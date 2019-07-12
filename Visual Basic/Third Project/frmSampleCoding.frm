VERSION 5.00
Begin VB.Form frmSampleCoding 
   BorderStyle     =   1  'Fixed Single
   Caption         =   "Form1"
   ClientHeight    =   3735
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   6015
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
   ScaleHeight     =   3735
   ScaleWidth      =   6015
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton cmdClose 
      Cancel          =   -1  'True
      Caption         =   "E&xit"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   855
      Left            =   2640
      Picture         =   "frmSampleCoding.frx":0000
      Style           =   1  'Graphical
      TabIndex        =   4
      ToolTipText     =   "Click to Exit the Project"
      Top             =   2520
      Width           =   1215
   End
   Begin VB.CommandButton cmdSubmit 
      BackColor       =   &H80000016&
      Caption         =   "&S&ubmit"
      CausesValidation=   0   'False
      Default         =   -1  'True
      DisabledPicture =   "frmSampleCoding.frx":0442
      DownPicture     =   "frmSampleCoding.frx":0884
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   855
      Left            =   4080
      MaskColor       =   &H80000013&
      MouseIcon       =   "frmSampleCoding.frx":0CC6
      MousePointer    =   99  'Custom
      Picture         =   "frmSampleCoding.frx":1250
      Style           =   1  'Graphical
      TabIndex        =   3
      ToolTipText     =   "Click To Submit Data"
      Top             =   2520
      Width           =   1215
   End
   Begin VB.CommandButton cmdSave 
      Caption         =   "&Save"
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
      Height          =   855
      Left            =   1200
      Picture         =   "frmSampleCoding.frx":1692
      Style           =   1  'Graphical
      TabIndex        =   1
      ToolTipText     =   "Click To Save Data"
      Top             =   2520
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      Height          =   285
      Left            =   3000
      TabIndex        =   0
      Text            =   "Text1"
      ToolTipText     =   "Type Your Name Here (All Characters - No Numbers)"
      Top             =   960
      Width           =   2055
   End
   Begin VB.Label Label1 
      Caption         =   "Enter Name :"
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
      Left            =   1320
      TabIndex        =   2
      Top             =   960
      Width           =   1455
   End
End
Attribute VB_Name = "frmSampleCoding"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private Sub cmdClose_Click()
    End
End Sub

Private Sub cmdSave_Click()
    MsgBox "Thanks for Clicking the Save Button."
    
End Sub

Private Sub cmdSubmit_Click()
    'MsgBox "Hello World. Thank You for Clicking the Submit Button"
    cmdClose.Caption = "E&nd App"
    MsgBox Text1
    Text1.Text = "Deepak Shakya"
    MsgBox Text1.Text
End Sub
