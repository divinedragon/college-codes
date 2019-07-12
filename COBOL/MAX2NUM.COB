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
        01  No1  PIC 9(4).
        01  No2  PIC 9(4).
        PROCEDURE DIVISION.
        ControlPara.
           PERFORM InputPara.
           PERFORM OutputPara.
           STOP RUN.
        InputPara.
           DISPLAY (5, 10) "Enter First Number :- ".
           ACCEPT No1.
           DISPLAY (6, 10) "Enter Second Number :- ".
           ACCEPT No2.
        OutputPara.
           IF No1 > No2
              DISPLAY (10, 15) No1, " is Greater Than ", No2
           ELSE IF No2 >  No1
              DISPLAY (10, 15) No2, " is Greater Than ", No1
           ELSE
              DISPLAY (10, 15) "Both the Entered Values are Equal.".

