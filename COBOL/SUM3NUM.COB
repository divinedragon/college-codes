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
        01  No3  PIC 9(4).
        01  Sum  PIC 9(5).
        PROCEDURE DIVISION.
        ControlPara.
           PERFORM AcceptInputPara.
           PERFORM ComputeSumPara.
           PERFORM DisplayOutputPara.
           STOP RUN.
        AcceptInputPara.
           DISPLAY (5, 10) "Enter First Number :- ".
           ACCEPT No1.
           DISPLAY (6, 10) "Enter Second Number :- ".
           ACCEPT No2.
           DISPLAY (7, 10) "Enter Third Number :- ".
           ACCEPT No3.
        ComputeSumPara.
           COMPUTE Sum = No1 + No2 + No3.
        DisplayOutputPara.
           DISPLAY (10, 15) "The Sum of the Three Numbers is ", Sum.
