        IDENTIFICATION DIVISION.
        PROGRAM-ID. Payroll.
        AUTHOR. Deepak.
        INSTALLATION. Kirpa Bhawan.
        DATE-WRITTEN. 02-02-2007.
        DATE-COMPILED.
        SECURITY. General.

        ENVIRONMENT DIVISION.
        INPUT-OUTPUT SECTION.
        FILE-CONTROL.
            SELECT FileIn ASSIGN TO DISK
            ORGANIZATION IS LINE SEQUENTIAL.
            SELECT FileOut ASSIGN TO DISK
            ORGANIZATION IS LINE SEQUENTIAL.

        DATA DIVISION.
        FILE SECTION.
        FD FileIn
            LABEL RECORDS ARE STANDARD
            VALUE OF FILE-ID IS "payin.dat".
        01  RecIn.
            05  EmpNoIn    PIC 9(4).
            05  NameIn     PIC A(15).
            05  BasicIn    PIC 9(5)V99.
        FD FileOut
            LABEL RECORDS ARE STANDARD
            VALUE OF FILE-ID IS "PayRep.dat".
        01  RecOut         PIC X(80).

        WORKING-STORAGE SECTION.
        01  Counter        PIC 9 VALUE 0.
        01  DA             PIC 9(4)V99.
        01  HRA            PIC 9(4)V99.
        01  TotSal         PIC 9(6)V99.
        01  GBasic         PIC 9(7)V99 VALUE 0.
        01  GDA            PIC 9(6)V99 VALUE 0.
        01  GHRA           PIC 9(6)V99 VALUE 0.
        01  GTotSal        PIC 9(9)V99 VALUE 0.
        01  SrNoIn         PIC 9 VALUE 0.
        01  EOF            PIC A VALUE "N".
        01  Heading1.
            05  F          PIC X(33) VALUE SPACES.
            05  F          PIC A(20) VALUE "XYZ BANK LTD.".
        01  BlankRec       PIC X(80) VALUE SPACES.
        01  LineRec        PIC X(80) VALUE ALL "*".
        01  Heading2.
            05  F          PIC X(1) VALUE SPACES.
            05  F          PIC A(8)  VALUE "Sr.No.".
            05  F          PIC A(9)  VALUE "Emp No.".
            05  F          PIC A(19)  VALUE "Emp Name".
            05  F          PIC A(13)  VALUE "Basic".
            05  F          PIC A(11)  VALUE "DA".
            05  F          PIC A(10)  VALUE "HRA".
            05  F          PIC A(11)  VALUE "Total".
        01  DetailRec.
            05  F          PIC X(3) VALUE SPACES.
            05  SrNoOut    PIC 9.
            05  F          PIC X(6) VALUE SPACES.
            05  EmpNoOut   PIC 9(4).
            05  F          PIC X(4) VALUE SPACES.
            05  NameOut    PIC A(15).
            05  F          PIC X(3) VALUE SPACES.
            05  BasicOut   PIC Z(4)9.99.
            05  F          PIC XXX VALUE SPACES.
            05  DAOut      PIC Z(4)9.99.
            05  F          PIC XXX VALUE SPACES.
            05  HRAOut     PIC Z(4)9.99.
            05  F          PIC XXXX VALUE SPACES.
            05  TotSalOut  PIC Z(5).99.
        01  SumRec.
            05  F          PIC X(34) VALUE SPACES.
            05  GBasicOut  PIC Z(6)9.99.
            05  F          PIC XX VALUE SPACES.
            05  GDAOut     PIC Z(5)9.99.
            05  F          PIC XX VALUE SPACES.
            05  GHRAOut    PIC Z(5)9.99.
            05  GTotSalOut PIC Z(8)9.99.
        01  TotRecRead.
            05  F          PIC X(25) VALUE SPACES.
            05  F          PIC X(30) VALUE "Total Records Read : ".
            05  TotalRec   PIC Z9.

        PROCEDURE DIVISION.
        MainPara.
            OPEN INPUT FileIn OUTPUT FileOut.
            DISPLAY (5, 10) "MAIN PARA RUNNED..".
            PERFORM ControlPara UNTIL EOF = "Y".
            CLOSE FileIn FileOut.
            STOP RUN.
        ControlPara.
            WRITE RecOut FROM Heading1.
            WRITE RecOut FROM BlankRec.
            WRITE RecOut FROM LineRec.
            WRITE RecOut FROM Heading2.
            WRITE RecOut FROM LineRec.
            COMPUTE Counter = 1.
            PERFORM CalculatePara UNTIl EOF = "Y" OR Counter > 3.
            MOVE GBasic TO GBasicOut.
            MOVE GDA TO GDAOut.
            MOVE GHRA TO GHRAOut.
            MOVE GTotSal TO GTotSalOut.
            WRITE RecOut FROM LineRec.
            WRITE RecOut FROM SumRec.
            WRITE RecOut FROM LineRec.
            IF EOF = "Y"
                MOVE SrNoIn TO TotalRec
                WRITE RecOut FROM TotRecRead.
            WRITE RecOut FROM BlankRec.
            WRITE RecOut FROM BlankRec.
        CalculatePara.
            READ FileIn AT END MOVE "Y" TO EOF.
            IF NOT EOF = "Y"
                COMPUTE DA = 0.25 * BasicIn
                COMPUTE HRA = 0.1 * (BasicIn + DA)
                COMPUTE TotSal = BasicIn + DA + HRA
                COMPUTE GBasic = GBasic + BasicIn
                COMPUTE GDA = GDA + DA
                COMPUTE GHRA = GHRA + HRA
                COMPUTE GTotSal = GTotSal + TotSal
                COMPUTE SrNoIn = SrNoIn + 1
                COMPUTE Counter = Counter + 1
                MOVE EmpNoIn TO EmpNoOut
                MOVE NameIn TO NameOut
                MOVE DA TO DAOut
                MOVE HRA TO HRAOut
                MOVE BasicIn TO BasicOut
                MOVE TotSal TO TotSalOut
                MOVE SrNoIn TO SrNoOut
                WRITE RecOut FROM DetailRec.          
