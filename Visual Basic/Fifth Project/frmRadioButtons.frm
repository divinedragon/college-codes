VERSION 5.00
Begin VB.Form frmRadioButtons 
   BorderStyle     =   1  'Fixed Single
   Caption         =   "Checking The Radio Button Control in Visual Basic"
   ClientHeight    =   5595
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   4965
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
   ScaleHeight     =   5595
   ScaleWidth      =   4965
   StartUpPosition =   3  'Windows Default
   Begin VB.Frame Frame3 
      Caption         =   "Personal Details"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   3255
      Left            =   120
      TabIndex        =   12
      Top             =   240
      Width           =   4695
      Begin VB.TextBox txtName 
         Appearance      =   0  'Flat
         Height          =   285
         Left            =   1200
         MaxLength       =   50
         TabIndex        =   1
         Top             =   840
         Width           =   3135
      End
      Begin VB.TextBox txtPRN 
         Appearance      =   0  'Flat
         Height          =   285
         Left            =   1200
         MaxLength       =   9
         TabIndex        =   0
         Top             =   480
         Width           =   1215
      End
      Begin VB.TextBox txtAddress 
         Appearance      =   0  'Flat
         Height          =   885
         Left            =   1200
         MaxLength       =   200
         MultiLine       =   -1  'True
         ScrollBars      =   2  'Vertical
         TabIndex        =   2
         Top             =   1200
         Width           =   3135
      End
      Begin VB.TextBox txtPhone 
         Appearance      =   0  'Flat
         Height          =   285
         Left            =   1200
         MaxLength       =   10
         TabIndex        =   3
         Top             =   2280
         Width           =   1575
      End
      Begin VB.TextBox txtEmail 
         Appearance      =   0  'Flat
         Height          =   285
         Left            =   1200
         MaxLength       =   70
         TabIndex        =   4
         Top             =   2640
         Width           =   3135
      End
      Begin VB.Label Label1 
         AutoSize        =   -1  'True
         Caption         =   "Name :-"
         Height          =   240
         Left            =   120
         TabIndex        =   17
         Top             =   840
         Width           =   810
      End
      Begin VB.Label Label2 
         AutoSize        =   -1  'True
         Caption         =   "PRN :-"
         Height          =   240
         Left            =   120
         TabIndex        =   16
         Top             =   480
         Width           =   645
      End
      Begin VB.Label Label3 
         AutoSize        =   -1  'True
         Caption         =   "Address :-"
         Height          =   240
         Left            =   120
         TabIndex        =   15
         Top             =   1200
         Width           =   1050
      End
      Begin VB.Label Label4 
         AutoSize        =   -1  'True
         Caption         =   "Phone :-"
         Height          =   240
         Left            =   120
         TabIndex        =   14
         Top             =   2280
         Width           =   870
      End
      Begin VB.Label Label5 
         AutoSize        =   -1  'True
         Caption         =   "Email :-"
         Height          =   240
         Left            =   120
         TabIndex        =   13
         Top             =   2640
         Width           =   765
      End
   End
   Begin VB.Frame Frame2 
      Caption         =   "Select Gender"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   1215
      Left            =   2520
      TabIndex        =   10
      Top             =   3600
      Width           =   2295
      Begin VB.OptionButton rbMale 
         Caption         =   "Male"
         Height          =   495
         Left            =   360
         TabIndex        =   6
         Top             =   240
         Value           =   -1  'True
         Width           =   1215
      End
      Begin VB.OptionButton rbFemale 
         Caption         =   "Female"
         Height          =   495
         Left            =   360
         TabIndex        =   11
         Top             =   600
         Width           =   1215
      End
   End
   Begin VB.Frame Frame1 
      Caption         =   "Select Course"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   1215
      Left            =   120
      TabIndex        =   8
      Top             =   3600
      Width           =   2295
      Begin VB.OptionButton rbBBA 
         Caption         =   "BBA-IT"
         Height          =   495
         Left            =   360
         TabIndex        =   9
         Top             =   600
         Width           =   1215
      End
      Begin VB.OptionButton rbBCA 
         Caption         =   "BCA"
         Height          =   495
         Left            =   360
         TabIndex        =   5
         Top             =   240
         Value           =   -1  'True
         Width           =   1215
      End
   End
   Begin VB.CommandButton cmdCheckRadioButtons 
      Caption         =   "Check It"
      Height          =   375
      Left            =   1680
      TabIndex        =   7
      Top             =   5040
      Width           =   1335
   End
End
Attribute VB_Name = "frmRadioButtons"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub cmdCheckRadioButtons_Click()
    If (rbMale.Value = True) Then
        MsgBox ("You are Male.")
    End If
    If (rbFemale.Value = True) Then
        MsgBox ("You are Female.")
    End If
End Sub

