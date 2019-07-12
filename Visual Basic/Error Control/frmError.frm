VERSION 5.00
Begin VB.Form frmError 
   Caption         =   "Form1"
   ClientHeight    =   5100
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   8475
   LinkTopic       =   "Form1"
   ScaleHeight     =   5100
   ScaleWidth      =   8475
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "Command1"
      Height          =   495
      Left            =   3600
      TabIndex        =   0
      Top             =   2280
      Width           =   1215
   End
End
Attribute VB_Name = "frmError"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim Num1, Num2 As Integer

Private Sub Command1_Click()
'On Error GoTo 0                 'Disable the Error Handling Routine
On Error GoTo ErrorControl
        Num1 = Int(InputBox("Enter 1st Number ", , 0))
        Num2 = Int(InputBox("Enter 2nd Number ", , 0))
        
        If (Num2 = 0) Then
            Err.Raise 515   '0-512  - Error No. are reserved by VB for its own errors
                            '513 - 65535 - User defined Errors and description
                            'Raise Method of Err Object is used to Define the User
                            'Defined Errors
        End If
        MsgBox Num1 / Num2
        'MsgBox "Trying Again"
        'MsgBox Num1 / Num2
        Exit Sub
ErrorControl:
        MsgBox "Error Number - " & Err.Number & vbCr & "Description - " & Err.Description
        If (Err.Number = 515) Then
            MsgBox "Zero is Not Allowed"
        Else
            Num2 = 1
            'Resume Next 'Executes the Next Instrution that follows the Erroneous Instruction
            Resume       'Transfers the control to the Instruction where error occurred
        End If
End Sub
