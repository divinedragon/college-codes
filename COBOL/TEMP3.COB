        IDENTIFICATION DIVISION.
        PROGRAM-ID. Read.
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

        DATA DIVISION.
        FILE SECTION.
        FD FileIn
            LABEL RECORDS ARE STANDARD
            VALUE OF FILE-ID IS "tpayin.dat".
        01  RecIn.
            05  EmpNoIn    PIC 9(4).
            05  NameIn     PIC A(6).
            05  BasicIn    PIC 9(5)V99.

        WORKING-STORAGE SECTION.
        01  EmpNoOut       PIC 9(4).
        01  NameOut        PIC A(6).
        01  BasicOut       PIC Z(4)9.99.
        01  EOF            PIC A VALUE "N".

        PROCEDURE DIVISION.
        ControlPara.
            OPEN INPUT FileIn.
            READ FileIn AT END MOVE "Y" TO EOF.
            PERFORM ProcessPara UNTIL EOF = "Y".
            CLOSE FileIn.
            STOP RUN.
        ProcessPara.
            MOVE EmpNoIn TO EmpNoOut.
            MOVE NameIn TO NameOut.
            MOVE BasicIn TO BasicOut.
            DISPLAY  EmpNoOut.
            DISPLAY  NameOut.
            DISPLAY  BasicOut.
            READ FileIn AT END MOVE "Y" TO EOF.
