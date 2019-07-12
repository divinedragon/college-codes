       IDENTIFICATION DIVISION.
       PROGRAM-ID. ItemReport.
       ENVIRONMENT DIVISION.
       INPUT-OUTPUT SECTION.
       FILE-CONTROL.
           SELECT FileIn1 ASSIGN TO DISK
           ORGANIZATION IS LINE SEQUENTIAL.
           SELECT FileIn2 ASSIGN TO DISK
           ORGANIZATION IS LINE SEQUENTIAL.
           SELECT FileOut ASSIGN TO DISK
           ORGANIZATION IS LINE SEQUENTIAL.
       DATA DIVISION.
       FILE SECTION.
       FD FileIn1
           LABEL RECORDS ARE STANDARD
           VALUE OF FILE-ID IS "Master.dat".
       01 RecIn1.
           05  MItemCode        PIC X(4).
           05  MItemName        PIC X(10).

       FD FileIn2
           LABEL RECORDS ARE STANDARD
           VALUE OF FILE-ID IS "Trasac.dat".
       01 RecIn2.
           05  TItemCode        PIC X(4).
           05  Qty              PIC 9(4).
           05  Rate             PIC 9(4)V99.

       FD FileOut
           LABEL RECORDS ARE STANDARD
           VALUE OF FILE-ID IS "ItemRepo.dat".
       01 RecOut                PIC X(80).

       WORKING-STORAGE SECTION.
       01 TodayDate             PIC X(6).
       01 MyDate.
           05  YY               PIC 99.
           05  MM               PIC 99.
           05  DD               PIC 99.
       01 PageNo                PIC 99 VALUE 1.
       01 Cost                  PIC 9(5)V99 VALUE 0.
       01 TotalCost             PIC 9(6)V99 VALUE 0.
       01 SrNo                  PIC 99 VALUE 1.
       01 Heading1.
           05  F                PIC X(30) VALUE ALL SPACES.
           05  F                PIC X(15) VALUE "XYZ Co. Ltd.".
       01 Heading2.
           05  F                PIC X(3) VALUE ALL SPACES.
           05  F                PIC X(8) VALUE "DATE : ".
           05  DDOut            PIC 99.
           05  F                PIC X VALUE "/".
           05  MMOut            PIC 99.
           05  F                PIC X VALUE "/".
           05  YYOut            PIC 99.
           05  F                PIC X(25) VALUE ALL SPACES.
           05  F                PIC X(15) VALUE "Page No. : ".
           05  PageNoOut        PIC 99.
       01 LineRec               PIC X(80) VALUE ALL "-".
       01 BlankRec              PIC X(80) VALUE ALL SPACES.
       01 DetailRec1.
           05  F                PIC X(3) VALUE ALL SPACES.
           05  F                PIC X(15) VALUE "Item Code : ".
           05  ItemCodeOut      PIC 9(4).
           05  F                PIC X(20) VALUE ALL SPACES.
           05  F                PIC X(15) VALUE "Item Name : ".
           05  ItemNameOut      PIC X(10).
       01 RecHead.
           05  F                PIC X(15) VALUE "  Srl. No.".
           05  F                PIC X(15) VALUE "Quantity".
           05  F                PIC X(15) VALUE "Rate".
           05  F                PIC X(15) VALUE "Total Cost".
       01 DetailRec2.
           05  F                PIC X(4) VALUE ALL SPACES.
           05  SrNoOut          PIC Z9.
           05  F                PIC X(6) VALUE ALL SPACES.
           05  QtyOut           PIC Z(4).
           05  F                PIC X(10) VALUE ALL SPACES.
           05  RateOut          PIC Z(3)9.99.
           05  F                PIC X(9) VALUE ALL SPACES.
           05  CostOut          PIC Z(4)9.99.
       01 PageFooter.
           05  F                PIC X(15) VALUE ALL SPACES.
           05  F                PIC X(25) VALUE "Total Cost of Item : ".
           05  TotalCostOut     PIC Z(4)9.99.

       PROCEDURE DIVISION.
       ControlPara.
           OPEN INPUT FileIn1
                INPUT FileIn2
                OUTPUT FileOut.
           ACCEPT TodayDate FROM DATE.
           DISPLAy "ALL THE FILES OPENED SUCCESSFULLY.".
           MOVE TodayDate TO MyDate.
           MOVE DD TO DDOut.
           MOVE MM TO MMOut.
           MOVE YY TO YYOut.
           PERFORM ReadFile1.
           PERFORM ReadFile2.           
           PERFORM PagePara UNTIL MItemCode = HIGH-VALUE
                            AND   TItemCode = HIGH-VALUE.
           CLOSE FileIn1 FileIn2 FileOut.
           STOP RUN.
       ReadFile1.
           READ FileIn1 AT END MOVE HIGH-VALUE TO MItemCode.

       ReadFile2.
           READ FileIn2 AT END MOVE HIGH-VALUE TO TItemCode.

       PagePara.
           MOVE PageNo TO PageNoOut.
           WRITE RecOut FROM Heading1.
           WRITE RecOut FROM Heading2.
           MOVE MItemCode TO ItemCodeOut.
           MOVE MItemName TO ItemNameOut.
           WRITE RecOut FROM DetailRec1.
           WRITE RecOut FROM LineRec.
           WRITE RecOut FROM RecHead.
           WRITE RecOut FROM LineRec.
           COMPUTE TotalCost = 0.
           COMPUTE SrNo = 1.
           PERFORM DetailPara UNTIL MItemCode < TItemCode.
           PERFORM ReadFile1.
           MOVE TotalCost TO TotalCostOut.
           WRITE RecOut FROM LineRec.
           WRITE RecOut FROM PageFooter.
           COMPUTE PageNo = PageNo + 1.
           WRITE RecOut FROM BlankRec.
           WRITE RecOut FROM BlankRec.
       DetailPara.
           IF MItemCode = TItemCode
              PERFORM WriteRec.
       WriteRec.
           DISPLAY "IT IS COMING TILL HERE.".
           COMPUTE Cost = Qty * Rate.
           COMPUTE TotalCost = TotalCost + Cost.
           MOVE Qty TO QtyOut.
           MOVE Rate TO RateOut.
           MOVE Cost TO CostOut.
           MOVE SrNo TO SrNoOut.
           WRITE RecOut FROM DetailRec2.
           COMPUTE SrNo = SrNo + 1.
           display titemcode, mitemcode.
           PERFORM ReadFile2.
