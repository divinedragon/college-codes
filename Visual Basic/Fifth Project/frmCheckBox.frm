VERSION 5.00
Begin VB.Form frmCheckBox 
   BorderStyle     =   1  'Fixed Single
   Caption         =   "Checking The Check Boxes"
   ClientHeight    =   2445
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   4545
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
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   2445
   ScaleWidth      =   4545
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "Command1"
      Height          =   495
      Left            =   2400
      TabIndex        =   3
      Top             =   1560
      Width           =   1215
   End
   Begin VB.CommandButton cmdCheckBox 
      Caption         =   "Command1"
      Height          =   495
      Left            =   1080
      TabIndex        =   2
      Top             =   1560
      Width           =   1215
   End
   Begin VB.CheckBox chkCheck2 
      Caption         =   "Check2"
      Height          =   375
      Left            =   840
      TabIndex        =   1
      Top             =   840
      Width           =   2895
   End
   Begin VB.CheckBox chkCheck1 
      Caption         =   "Check1"
      Height          =   375
      Left            =   840
      TabIndex        =   0
      Top             =   240
      Width           =   2895
   End
End
Attribute VB_Name = "frmCheckBox"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit
'Check Box Values
'0 - Unchecked
'1 - Checked
'2 - Grey

Private Sub cmdCheckBox_Click()

    If chkCheck1.Value = 1 Then
        If chkCheck2.Value = 1 Then
            MsgBox ("CheckBox 1 and CheckBox 2, both are Checked")
        Else
            MsgBox ("CheckBox 1 is Checked. CheckBox 2 is Unchecked")
        End If
    Else
        If chkCheck2.Value = 1 Then
            MsgBox ("CheckBox 2 is Checked. CheckBox 2 is Unchecked")
        Else
            MsgBox ("Both CheckBox 1 and CheckBox 2 are Unchecked")
        End If
    End If
End Sub

Private Sub Command1_Click()
    If (chkCheck1.Value = 0) Then
        chkCheck1.Value = 1
    ElseIf (chkCheck1.Value = 1) Then
        chkCheck1.Value = 2
    ElseIf (chkCheck1.Value = 2) Then
        chkCheck1.Value = 0
    End If
    
End Sub
