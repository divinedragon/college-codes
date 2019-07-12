        IDENTIFICATION DIVISION.
        PROGRAM-ID. StudentGrade.
        AUTHOR. Deepak.
        INSTALLATION. Kirpa Bhawan.
        DATE-WRITTEN. 02-02-2007.
        DATE-COMPILED.
        SECURITY. General.
        ENVIRONMENT DIVISION.
        DATA DIVISION.
        WORKING-STORAGE SECTION.
        01  Mark       PIC 9(3).
        01  Counter    PIC 9 VALUE 1.
        01  TotalMark  PIC 9(3) VALUE 0.
        01  Percent    PIC 999V99.
        01  Grade      PIC A.
        01  PercentOut PIC ZZ9.99.
        PROCEDURE DIVISION.
        ControlPara.
           PERFORM IPnCALCULATEPara UNTIL Counter = 3.
           PERFORM GradePara.
           PERFORM OutputPara.
           STOP RUN.
        IPnCALCULATEPara.
           DISPLAY (5, 10) "Enter Number #", Counter, " :- ".
           ACCEPT Mark.
           IF Mark > 100
              DISPLAY (10, 15) "Invalid Data Entry. Re-Enter.".
              PERFORM IPnCALCULATEPara.
           COMPUTE TotalMark = TotalMark + Mark.
           COMPUTE Counter = Counter + 1.
        GradePara.
           COMPUTE Percent = TotalMark / Counter.
           IF Percent > 70 OR Percent = 70
              MOVE "A" TO Grade
           ELSE IF Percent > 60 OR Percent = 60
              MOVE "B" TO Grade
           ELSE IF Percent > 50 OR Percent = 50
              MOVE "C" TO Grade
           ELSE
              MOVE "F" TO Grade.
        OutputPara.
           MOVE Percent TO PercentOut.
           DISPLAY (20, 15) "Total Marks = ", TotalMark.
           DISPLAY (21, 15) "Percent = ", PercentOut.
           DISPLAY (22, 15) "Grade = ", Grade.
