VERSION 5.00
Begin VB.Form frmArray 
   Caption         =   "Lets see how Arrays Work"
   ClientHeight    =   1230
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   5730
   LinkTopic       =   "Form1"
   ScaleHeight     =   1230
   ScaleWidth      =   5730
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton cmdDisplay 
      Caption         =   "&Display"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   3120
      TabIndex        =   1
      Top             =   360
      Width           =   1935
   End
   Begin VB.CommandButton cmdInitialize 
      Caption         =   "&Initialize"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   360
      TabIndex        =   0
      Top             =   360
      Width           =   1935
   End
End
Attribute VB_Name = "frmArray"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim Ar(10) As Integer
Dim i As Integer

Private Sub cmdDisplay_Click()
    For i = 0 To 10
        Print Ar(i)
    Next i
End Sub

Private Sub cmdInitialize_Click()
    cmdDisplay.Enabled = True
    For i = 0 To 10
        Ar(i) = i + 1
    Next i
End Sub

Private Sub Form_Load()
    cmdDisplay.Enabled = False
End Sub
