        IDENTIFICATION DIVISION.
        PROGRAM-ID. Hello.
        AUTHOR. Deepak.
        INSTALLATION. Kirpa Bhawan.
        DATE-WRITTEN. 02-02-2007.
        DATE-COMPILED.
        SECURITY. General.
        ENVIRONMENT DIVISION.
        DATA DIVISION.
        WORKING-STORAGE SECTION.
        01 IP                      PICTURE IS 9(4).
        PROCEDURE DIVISION.
        StartPara.
           DISPLAY (5, 10) "Please Enter a Number :- ".
           ACCEPT IP.
           DISPLAY (10, 10) "You have Entered ", IP.
           STOP RUN.
