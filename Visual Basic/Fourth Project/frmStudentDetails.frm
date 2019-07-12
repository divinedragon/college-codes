VERSION 5.00
Begin VB.Form frmStudentDetails 
   BorderStyle     =   1  'Fixed Single
   Caption         =   "Enter The Student Details"
   ClientHeight    =   3075
   ClientLeft      =   5160
   ClientTop       =   4485
   ClientWidth     =   5280
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
   LockControls    =   -1  'True
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   3075
   ScaleWidth      =   5280
   Begin VB.CommandButton cmdCancel 
      BackColor       =   &H80000016&
      Caption         =   "&Cancel"
      CausesValidation=   0   'False
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   375
      Left            =   2880
      Style           =   1  'Graphical
      TabIndex        =   5
      Top             =   2400
      Width           =   1215
   End
   Begin VB.CommandButton cmdReset 
      BackColor       =   &H80000016&
      Caption         =   "&Reset"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   375
      Left            =   1680
      Style           =   1  'Graphical
      TabIndex        =   4
      Top             =   2400
      Width           =   1215
   End
   Begin VB.TextBox txtCourse 
      Appearance      =   0  'Flat
      Height          =   285
      Left            =   1440
      MaxLength       =   6
      TabIndex        =   2
      Top             =   1800
      Width           =   855
   End
   Begin VB.TextBox txtAge 
      Appearance      =   0  'Flat
      Height          =   285
      Left            =   1440
      MaxLength       =   3
      TabIndex        =   1
      Top             =   1320
      Width           =   495
   End
   Begin VB.TextBox txtName 
      Appearance      =   0  'Flat
      Height          =   285
      Left            =   1440
      MaxLength       =   50
      TabIndex        =   0
      Top             =   840
      Width           =   3375
   End
   Begin VB.CommandButton cmdSubmit 
      BackColor       =   &H80000016&
      Caption         =   "&Submit"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   375
      Left            =   480
      Style           =   1  'Graphical
      TabIndex        =   3
      Top             =   2400
      Width           =   1215
   End
   Begin VB.Label lblHeader 
      AutoSize        =   -1  'True
      BackStyle       =   0  'Transparent
      Caption         =   "Enter Student Details"
      BeginProperty Font 
         Name            =   "Times New Roman"
         Size            =   20.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   465
      Left            =   750
      TabIndex        =   9
      Top             =   120
      Width           =   3780
   End
   Begin VB.Label lblCourse 
      Caption         =   "Course"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   285
      Left            =   480
      TabIndex        =   8
      Top             =   1800
      Width           =   975
   End
   Begin VB.Label lblAge 
      Caption         =   "Age"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   285
      Left            =   480
      TabIndex        =   7
      Top             =   1320
      Width           =   975
   End
   Begin VB.Label lblName 
      Caption         =   "Name"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   285
      Left            =   480
      TabIndex        =   6
      Top             =   840
      Width           =   975
   End
End
Attribute VB_Name = "frmStudentDetails"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private Sub cmdSubmit_Click()
    MsgBox "Clicked"
End Sub

Private Sub cmdCancel_Click()
    End
End Sub

Private Sub cmdReset_Click()
    txtName.Text = ""
    txtAge.Text = ""
    txtCourse.Text = ""
    txtName.SetFocus
End Sub

Private Sub txtName_KeyPress(KeyAscii As Integer)
    If Not ((KeyAscii >= 65 And KeyAscii <= 90) Or (KeyAscii >= 97 And KeyAscii <= 122) Or KeyAscii = 8 Or KeyAscii = 32) Then
        KeyAscii = 0
    End If
End Sub

Private Sub txtName_Validate(Cancel As Boolean)
    If txtName.Text = "" Then
        Cancel = True
    End If
End Sub

Private Sub txtAge_KeyPress(KeyAscii As Integer)
    If Not ((KeyAscii >= 48 And KeyAscii <= 57) Or KeyAscii = 8) Then
        KeyAscii = 0
    End If
End Sub

Private Sub txtAge_Validate(Cancel As Boolean)
    If txtAge.Text = "" Or Not (Val(txtAge.Text) > 0 And Val(txtAge.Text) <= 125) Then
        Cancel = True
        MsgBox "Enter Age in the Range 1 - 125"
    End If
End Sub

Private Sub txtCourse_KeyPress(KeyAscii As Integer)
    If Not ((KeyAscii >= 65 And KeyAscii <= 90) Or (KeyAscii >= 97 And KeyAscii <= 122) Or KeyAscii = 8 Or KeyAscii = 45) Then
        KeyAscii = 0
    End If
End Sub

Private Sub txtCourse_Validate(Cancel As Boolean)
    If txtCourse.Text = "" Or Not (UCase(txtCourse.Text) = "BCA" Or UCase(txtCourse.Text) = "BBA-IT" Or UCase(txtCourse.Text) = "MSC-CA" Or UCase(txtCourse.Text) = "MBA-IT") Then
        Cancel = True
        MsgBox "Course can be any one of the Following - " & vbCr & "BCA, BBA-IT,MSC-CA or MBA-IT"
    End If
End Sub
