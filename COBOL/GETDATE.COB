      /  
        IDENTIFICATION DIVISION.
        PROGRAM-ID. LeapYear.
        AUTHOR. Deepak Shakya.
        INSTALLATION. Kirpa Bhawan.
        DATE-WRITTEN. 18-02-2007.
        DATE-COMPILED.
        SECURITY. General Program.
        ENVIRONMENT DIVISION.
        DATA DIVISION.
        WORKING-STORAGE SECTION.
      * 01  YearIn              PIC 9999.
        01  TodayDate           PIC 9(6).
        01  MyDate.
            05  YY              PIC 99.
            05  MM              PIC 99.
            05  DD              PIC 99.
        PROCEDURE DIVISION.
        StartPara.
            ACCEPT TodayDate FROM DATE.
            MOVE TodayDate TO MyDate.
            DISPLAY "Today's Date is :", DD, "/", MM, "/", YY.
            STOP RUN.
