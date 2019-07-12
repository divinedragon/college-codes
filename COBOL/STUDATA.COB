        IDENTIFICATION DIVISION.
        PROGRAM-ID. StudentData.
        AUTHOR. Deepak.
        INSTALLATION. Kirpa Bhawan.
        DATE-WRITTEN. 02-02-2007.
        DATE-COMPILED.
        SECURITY. General.

        ENVIRONMENT DIVISION.
        INPUT-OUTPUT SECTION.
        FILE-CONTROL.
            SELECT FileOut ASSIGN TO DISK
            ORGANIZATION IS LINE SEQUENTIAL.

        DATA DIVISION.
        FILE SECTION.
        FD FileOut
            LABEL RECORDS ARE STANDARD
            VALUE OF FILE-ID IS "MyFile.dat".
        01  DataOut        PIC X(80).

        WORKING-STORAGE SECTION.
        01  PrnNoIn        PIC 9(9).
        01  NameIn         PIC A(30).
        01  CourseIn       PIC A(6).
        01  SrNoIn         PIC 9 VALUE 1.
        01  EOF            PIC A VALUE "N".
        01  Heading1.
            05  F          PIC X(30) VALUE SPACES.
            05  F          PIC A(20) VALUE "XYZ BANK LTD.".
            05  F          PIC X(30) VALUE SPACES.
        01  BlankRec       PIC X(80) VALUE SPACES.
        01  LineRec        PIC X(80) VALUE ALL "*".
        01  Heading2.
            05  F          PIC X(5) VALUE SPACES.
            05  F          PIC A(7) VALUE "Srl.No.".
            05  F          PIC X(5) VALUE SPACES.
            05  F          PIC A(7) VALUE "PRN No.".
            05  F          PIC X(5) VALUE SPACES.
            05  F          PIC A(7) VALUE "Name".
            05  F          PIC X(28) VALUE SPACES.
            05  F          PIC A(7) VALUE "Course".
        01  DetailRec.
            05  F          PIC X(7) VALUE SPACES.
            05  SrNoOut    PIC 9.
            05  F          PIC X(8) VALUE SPACES.
            05  PrnNoOut   PIC 9(9).
            05  F          PIC X(5) VALUE SPACES.
            05  NameOut    PIC A(30).
            05  F          PIC X(5) VALUE SPACES.
            05  CourseOut  PIC A(7).

        PROCEDURE DIVISION.
        ControlPara.
            PERFORM InputPara.
            OPEN OUTPUT FileOut.
            WRITE DataOut FROM Heading1.
            WRITE DataOut FROM BlankRec.
            WRITE DataOut FROM LineRec.
            WRITE DataOut FROM Heading2.
            WRITE DataOut FROM LineRec.
            MOVE SrNoIn TO SrNoOut.
            MOVE PrnNoIn TO PrnNoOut.
            MOVE NameIn TO NameOut.
            MOVE CourseIn TO CourseOut.
            WRITE DataOut FROM DetailRec.
            CLOSE FileOut.
            STOP RUN.
        InputPara.
            DISPLAY (5, 10) "Enter Your Prn No. ".
            ACCEPT PrnNoIn.
            DISPLAY (6, 10) "Enter Your Name ".
            ACCEPT NameIn.
            DISPLAY (7, 10) "Enter Course ".
            ACCEPT CourseIn.
