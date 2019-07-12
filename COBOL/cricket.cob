       IDENTIFICATION DIVISION.
       PROGRAM-ID. Exam.
       AUTHOR. Deepak.
       INSTALLATION. Kirpa Bhawan.
       DATE-WRITTEN. 28-3-2007.
       DATE-COMPILED.
       SECURITY. General.

       ENVIRONMENT DIVISION.
       CONFIGURATION SECTION.
       INPUT-OUTPUT SECTION.
       FILE-CONTROL.
            SELECT Original ASSIGN TO DISK
            ORGANIZATION IS LINE SEQUENTIAL.

            SELECT Temporary ASSIGN TO DISK.

            SELECT NewFile ASSIGN TO DISK
            ORGANIZATION IS LINE SEQUENTIAL.

            SELECT Transaction ASSIGN TO DISK
            ORGANIZATION IS LINE SEQUENTIAL.

            SELECT Report ASSIGN TO DISK
            ORGANIZATION IS LINE SEQUENTIAL.

       DATA DIVISION.
       FILE SECTION.
       FD Original
            LABEL RECORDS ARE STANDARD
            VALUE OF FILE-ID IS "Main.dat".
       01 OriginalRec           PIC X(24).

       FD NewFile
            LABEL RECORDS ARE STANDARD
            VALUE OF FILE-ID IS "NewFile.dat".
       01 NewRec.
            05 MPlayerId        PIC X(4).
            05 MName            PIC X(20).

       SD Temporary.
       01 TempRec.
            05 TempPlayerId     PIC X(4).
            05 F                PIC X(20).
       FD Transaction
            LABEL RECORDS ARE STANDARD
            VALUE OF FILE-ID IS "transac.dat".
       01 TransacRec.
            05 TPlayerId        PIC X(4).
            05 TMatchId         PIC 999.
            05 RunsScored       PIC 999.

       FD Report
            LABEL RECORDS ARE STANDARD
            VALUE OF FILE-ID IS "MReport.dat".
       01 RecOut                PIC X(80).

       WORKING-STORAGE SECTION.
       01 Heading1.
            05 F                PIC X(33) VALUE ALL SPACES.
            05 F                PIC X(15) VALUE "Country Name".
       01 Heading2.
            05 F                PIC X(2) VALUE ALL SPACES.
            05 F                PIC X(8) VALUE "Date : ".
            05 MMOut            PIC 99.
            05 F                PIC X VALUE "/".
            05 DDOut            PIC 99.
            05 F                PIC X VALUE "/".
            05 YYOut            PIC 99.
            05 F                PIC X(20) VALUE ALL SPACES.
            05 F                PIC X(12) VALUE "Page No.:".
            05 PageNoOut        PIC ZZ9.
       01 LineRec               PIC X(80) VALUE ALL "*".
       01 BlankRec              PIC X(80) VALUE ALL SPACES.
       01 PageHead.
            05 F                PIC X(5) VALUE ALL SPACES.
            05 F                PIC X(15) VALUE "Player ID : ".
            05 PlayerIdOut      PIC X(4).
            05 F                PIC X(20) VALUE ALL SPACES.
            05 F                PIC X(8) VALUE "Name : ".
            05 PlayerNameOut    PIC X(20).
       01 RecHeader.
            05 F                PIC X(10) VALUE ALL SPACES.
            05 F                PIC X(15) VALUE "Match ID".
            05 F                PIC X(20) VALUE ALL SPACES.
            05 F                PIC X(15) VALUE "Runs Scored".
       01 DetailRec.
            05 F                PIC X(11) VALUE ALL SPACES.
            05 MatchIdOut       PIC ZZ9.
            05 F                PIC X(30) VALUE ALL SPACES.
            05 RunsOut          PIC ZZ9.
       01 Footer.
            05 F                PIC X(5) VALUE ALL SPACES.
            05 F                PIC X(20) VALUE "Total Runs Scored :".
            05 TotalRunsOut     PIC ZZZ9.
            05 F                PIC X(10) VALUE ALL SPACES.
            05 F                PIC X(10) VALUE "Average :".
            05 AverageOut       PIC ZZ9.99.

       01 Counter               PIC 99 VALUE 0.
       01 Average               PIC 999V99.
       01 TotalRuns             PIC 9999.
       01 PageNo                PIC 9 VALUE 0.
       01 TodayDate             PIC 9(6).
       01 MyDate.
            05 YY               PIC 99.
            05 MM               PIC 99.
            05 DD               PIC 99.

       PROCEDURE DIVISION.
       ControlPara.
            PERFORM SortPara.
            PERFORM Prepare.
            PERFORM ReadFile1.
            PERFORM ReadFile2.
            PERFORM PagePara UNTIL MPlayerId = HIGH-VALUE
                             AND   TPlayerId = HIGH-VALUE.
            CLOSE NewFile Transaction Report.
            DISPLAY "Congrats. It worked".
            STOP RUN.
       SortPara.
            SORT Temporary ON ASCENDING KEY TempPlayerId
                 USING Original GIVING NewFile.
       Prepare.
            OPEN INPUT NewFile
                 INPUT Transaction
                 OUTPUT Report.
            ACCEPT TodayDate FROM DATE.
            MOVE TodayDate TO MyDate.
            MOVE YY TO YYOut.
            MOVE MM TO MMOut.
            MOVE DD TO DDOut.
       ReadFile1.
            READ NewFile AT END MOVE HIGH-VALUE TO MPlayerId.
       ReadFile2.
            READ Transaction AT END MOVE HIGH-VALUE TO TPlayerId.
       PagePara.
            COMPUTE PageNo = PageNo + 1.
            MOVE PageNo TO PageNoOut.
            MOVE MPlayerId TO PlayerIdOut.
            MOVE MName TO PlayerNameOut.
            WRITE RecOut FROM Heading1.
            WRITE RecOut FROM Heading2.
            WRITE RecOut FROM LineRec.
            WRITE RecOut FROM PageHead.
            WRITE RecOut FROM BlankRec.
            WRITE RecOut FROM RecHeader.
            WRITE RecOut FROM LineRec.
            COMPUTE Counter = 0.
            COMPUTE TotalRuns = 0.
            PERFORM RecordPara UNTIL MPlayerId IS NOT EQUAL TO TPlayerId.
            WRITE RecOut FROM LineRec.
            COMPUTE Average = TotalRuns / Counter.
            MOVE TotalRuns TO TotalRunsOut.
            MOVE Average TO AverageOut.
            WRITE RecOut FROM Footer.
            WRITE RecOut FROM BlankRec.
            WRITE RecOut FROM BlankRec.
            WRITE RecOut FROM BlankRec.
            PERFORM ReadFile1.
       RecordPara.
            IF MPlayerId = TPlayerId
               PERFORM WriteRecord.
            PERFORM ReadFile2.
       WriteRecord.
            COMPUTE Counter = Counter + 1.
            COMPUTE TotalRuns = TotalRuns + RunsScored.
            MOVE TMatchId TO MatchIdOut.
            MOVE RunsScored TO RunsOut.
            WRITE RecOut FROM DetailRec.
