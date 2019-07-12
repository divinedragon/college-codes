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
        01 PrnNo                      PIC 9(9).
        01 Name                       PIC A(20).
        PROCEDURE DIVISION.
        StartPara.
           DISPLAY (5, 10) "Enter Your PRN No.:- ".
           ACCEPT PrnNo.
           DISPLAY (7, 10) "Enter Your Name :- ".
           ACCEPT Name.
           DISPLAY (15, 10) "Hello ", Name.
           DISPLAY (16, 10) "Your PRN No. is ", PrnNo.
           STOP RUN.
