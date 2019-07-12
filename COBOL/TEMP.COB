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
            SELECT FileOut ASSIGN TO DISK.

        DATA DIVISION.
        FILE SECTION.
        FD FileOut
            LABEL RECORDS ARE STANDARD
            VALUE OF FILE-ID IS "Report.dat".
        01  RecOut         PIC X(80).

        WORKING-STORAGE SECTION.
        01  DA             PIC 9(4)V99.
        01  HRA            PIC 9(4)V99.
        01  TotSal         PIC 9(6)V99.
        01  SrNoOut        PIC 9 VALUE 1.
        01  EOF            PIC A VALUE "N".
        01  Heading1.
            05  F          PIC X(30) VALUE SPACES.
            05  F          PIC A(20) VALUE "XYZ BANK LTD.".
            05  F          PIC X(30) VALUE SPACES.
        01  BlankRec       PIC X(80) VALUE SPACES.
        01  LineRec        PIC X(80) VALUE ALL "*".
        01  Heading2.
            05  F          PIC X(1)  VALUE SPACES.
            05  F          PIC A(9)  VALUE "Sr.No.".
            05  F          PIC A(9)  VALUE "Emp No.".
            05  F          PIC A(23)  VALUE "Emp Name".
            05  F          PIC A(9)  VALUE "Basic".
            05  F          PIC A(9)  VALUE "DA".
            05  F          PIC A(9)  VALUE "HRA".
            05  F          PIC A(11)  VALUE "Total".
        01  DetailRec.
            05  F          PIC X(1) VALUE SPACES.
            05  SrNoOut    PIC 9.
            05  F          PIC X(4) VALUE SPACES.
            05  EmpNoOut   PIC 9(4).
            05  F          PIC X(4) VALUE SPACES.
            05  NameOut    PIC A(20).
            05  F          PIC X(6) VALUE SPACES.
            05  BasicOut   PIC Z(4)9.99.
            05  F          PIC X(4) VALUE SPACES.
            05  DAOut      PIC Z(4)9.99.
            05  F          PIC X(2) VALUE SPACES.
            05  HRAOut     PIC Z(4)9.99.
            05  F          PIC X(5) VALUE SPACES.
            05  TotSalOut  PIC Z(5).99.

        PROCEDURE DIVISION.
        ControlPara.
            OPEN OUTPUT FileOut.
            WRITE RecOut FROM Heading1.
            WRITE RecOut FROM BlankRec.
            WRITE RecOut FROM LineRec.
            WRITE RecOut FROM Heading2.
            WRITE RecOut FROM LineRec.
            CLOSE FileOut.
            STOP RUN.
