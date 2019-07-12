        IDENTIFICATION DIVISION.
        PROGRAM-ID. PayInFileCreator.
        AUTHOR. Deepak.
        INSTALLATION. Kirpa Bhawan.
        DATE-WRITTEN. 02-02-2007.
        DATE-COMPILED.
        SECURITY. General.

        ENVIRONMENT DIVISION.
        INPUT-OUTPUT SECTION.
        FILE-CONTROL.
            SELECT FileOut ASSIGN TO DISK.

        DATA DIVISION.
        FILE SECTION.
        FD FileOut
            LABEL RECORDS ARE STANDARD
            VALUE OF FILE-ID IS "TempPay.dat".
        01  DataOut        PIC X(80).

        WORKING-STORAGE SECTION.
        01  EmpNoIn        PIC 9(4).
        01  NameIn         PIC A(20).
        01  BasicIn        PIC 9(5)V99.
        01  EOF            PIC A VALUE "N".
        01  Heading1.
            05  F          PIC A(53) VALUE "XYZ BANK LTD.".
        01  BlankRec       PIC X(80) VALUE SPACES.
        01  LineRec        PIC X(80) VALUE ALL "*".
        01  Heading2.
            05  F          PIC X(1) VALUE SPACES.
            05  F          PIC A(8) VALUE "Emp.No.".
            05  F          PIC A(24) VALUE "Name".
            05  F          PIC A(10) VALUE "Basic".
        01  DetailRec.
            05  F          PIC X(2) VALUE SPACES.
            05  EmpNoOut   PIC 9(4).
            05  F          PIC X(4) VALUE SPACES.
            05  NameOut    PIC A(20).
            05  F          PIC X(5) VALUE SPACES.
            05  BasicOut   PIC Z(4)9.99.
        PROCEDURE DIVISION.
        ControlPara.
            PERFORM InputPara.
            OPEN OUTPUT FileOut.
            WRITE DataOut FROM Heading1.
            WRITE DataOut FROM BlankRec.
            WRITE DataOut FROM LineRec.
            WRITE DataOut FROM Heading2.
            WRITE DataOut FROM LineRec.
            MOVE EmpNoIn TO EmpNoOut.
            MOVE NameIn TO NameOut.
            MOVE BasicIn TO BasicOut.
            WRITE DataOut FROM DetailRec.
            CLOSE FileOut.
            STOP RUN.
        InputPara.
            DISPLAY (5, 10) "Enter Your Emp No. :- ".
            ACCEPT EmpNoIn.
            DISPLAY (6, 10) "Enter Your Name :- ".
            ACCEPT NameIn.
            DISPLAY (7, 10) "Enter Basic Salary :- ".
            ACCEPT BasicIn.
