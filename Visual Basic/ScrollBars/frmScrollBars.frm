VERSION 5.00
Begin VB.Form frmScrollBars 
   Caption         =   "Working with Scroll Bars"
   ClientHeight    =   4365
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   5130
   BeginProperty Font 
      Name            =   "Verdana"
      Size            =   9.75
      Charset         =   0
      Weight          =   400
      Underline       =   0   'False
      Italic          =   0   'False
      Strikethrough   =   0   'False
   EndProperty
   LinkTopic       =   "Form1"
   ScaleHeight     =   4365
   ScaleWidth      =   5130
   StartUpPosition =   3  'Windows Default
   Begin VB.Timer Timer1 
      Interval        =   50
      Left            =   360
      Top             =   3720
   End
   Begin VB.HScrollBar hscrBlue 
      Height          =   255
      LargeChange     =   10
      Left            =   1080
      Max             =   255
      TabIndex        =   4
      Top             =   2880
      Width           =   2655
   End
   Begin VB.HScrollBar hscrGreen 
      Height          =   255
      LargeChange     =   10
      Left            =   1080
      Max             =   255
      TabIndex        =   3
      Top             =   2400
      Width           =   2655
   End
   Begin VB.TextBox txtColorDisplay 
      Height          =   1395
      Left            =   120
      TabIndex        =   2
      Top             =   120
      Width           =   4815
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Command1"
      Height          =   375
      Left            =   3240
      TabIndex        =   1
      Top             =   3720
      Width           =   1455
   End
   Begin VB.HScrollBar hscrRed 
      Height          =   255
      LargeChange     =   10
      Left            =   1080
      Max             =   255
      TabIndex        =   0
      Top             =   1920
      Width           =   2655
   End
End
Attribute VB_Name = "frmScrollBars"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
    'MsgBox "Horizontal Scroll --> " & HScroll1.Value & vbCr & "Vertical Scroll --> " & VScroll1.Value
End Sub


Private Sub Form_Load()
    txtColorDisplay.BackColor = RGB(hscrRed.Value, hscrGreen.Value, hscrBlue.Value)
End Sub

Private Sub hscrBlue_Change()
    txtColorDisplay.BackColor = RGB(hscrRed.Value, hscrGreen.Value, hscrBlue.Value)
End Sub

Private Sub hscrBlue_Scroll()
    txtColorDisplay.BackColor = RGB(hscrRed.Value, hscrGreen.Value, hscrBlue.Value)
End Sub

Private Sub hscrGreen_Change()
    txtColorDisplay.BackColor = RGB(hscrRed.Value, hscrGreen.Value, hscrBlue.Value)
End Sub

Private Sub hscrGreen_Scroll()
    txtColorDisplay.BackColor = RGB(hscrRed.Value, hscrGreen.Value, hscrBlue.Value)
End Sub

Private Sub hscrRed_Change()
    txtColorDisplay.BackColor = RGB(hscrRed.Value, hscrGreen.Value, hscrBlue.Value)
End Sub

Private Sub hscrRed_Scroll()
    txtColorDisplay.BackColor = RGB(hscrRed.Value, hscrGreen.Value, hscrBlue.Value)
End Sub

Private Sub Timer1_Timer()
    hscrRed.Value = hscrRed.Value + 5
    hscrGreen.Value = hscrGreen.Value + 3
    hscrBlue.Value = hscrBlue.Value + 1
    
    txtColorDisplay.BackColor = RGB(hscrRed.Value, hscrGreen.Value, hscrBlue.Value)
    
    If hscrRed.Value = 255 Then
        hscrRed.Value = 0
    End If
    
    If hscrGreen.Value = 255 Then
        hscrGreen.Value = 0
    End If
    
    If hscrBlue.Value = 255 Then
        hscrBlue.Value = 0
    End If
End Sub
