VERSION 5.00
Begin VB.Form frmArithmeticCalc 
   BorderStyle     =   1  'Fixed Single
   Caption         =   "Simple Arithmetic Calculator"
   ClientHeight    =   3885
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   6855
   LinkTopic       =   "Form1"
   LockControls    =   -1  'True
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   3885
   ScaleWidth      =   6855
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton cmdExit 
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
      Height          =   375
      Left            =   3480
      TabIndex        =   7
      Top             =   3360
      Width           =   1215
   End
   Begin VB.CommandButton cmdReset 
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
      Left            =   2160
      TabIndex        =   6
      Top             =   3360
      Width           =   1215
   End
   Begin VB.TextBox txtResult 
      Appearance      =   0  'Flat
      BackColor       =   &H80000018&
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   285
      Left            =   3480
      Locked          =   -1  'True
      TabIndex        =   11
      Top             =   1920
      Width           =   1335
   End
   Begin VB.CommandButton cmdDivide 
      Caption         =   "/"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   14.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   4260
      TabIndex        =   5
      Top             =   2640
      Width           =   495
   End
   Begin VB.CommandButton cmdMultiply 
      Caption         =   "x"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   14.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   3540
      TabIndex        =   4
      Top             =   2640
      Width           =   495
   End
   Begin VB.CommandButton cmdSubtract 
      Caption         =   "-"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   14.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   2820
      TabIndex        =   3
      Top             =   2640
      Width           =   495
   End
   Begin VB.CommandButton cmdAdd 
      Caption         =   "+"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   14.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   2100
      TabIndex        =   2
      Top             =   2640
      Width           =   495
   End
   Begin VB.TextBox txtNumber2 
      Appearance      =   0  'Flat
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   285
      Left            =   5040
      TabIndex        =   1
      Top             =   1200
      Width           =   1335
   End
   Begin VB.TextBox txtNumber1 
      Appearance      =   0  'Flat
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   285
      Left            =   1800
      TabIndex        =   0
      Top             =   1200
      Width           =   1335
   End
   Begin VB.Label Label4 
      BackStyle       =   0  'Transparent
      Caption         =   "Result :"
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
      Left            =   2160
      TabIndex        =   12
      Top             =   1920
      Width           =   1215
   End
   Begin VB.Label Label2 
      BackStyle       =   0  'Transparent
      Caption         =   "Number 2 :"
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
      Left            =   3720
      TabIndex        =   10
      Top             =   1200
      Width           =   1215
   End
   Begin VB.Label Label1 
      BackStyle       =   0  'Transparent
      Caption         =   "Number 1 :"
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
      TabIndex        =   9
      Top             =   1200
      Width           =   1215
   End
   Begin VB.Label Label3 
      AutoSize        =   -1  'True
      Caption         =   "Simple Arithmetic Calculator"
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
      Left            =   832
      TabIndex        =   8
      Top             =   120
      Width           =   5190
   End
End
Attribute VB_Name = "frmArithmeticCalc"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private Sub Form_Load()
    'Label4.FontBold = True
    'Label3.BackColor = &H80000018
End Sub

Private Sub cmdExit_Click()
    End
End Sub

Private Sub cmdReset_Click()
    txtNumber1.Text = ""
    txtNumber2.Text = ""
    txtResult.Text = ""
End Sub

Private Sub cmdAdd_Click()
    If ValidateData Then
        txtResult.Text = Val(txtNumber1.Text) + Val(txtNumber2.Text)
    Else
        MsgBox "Non - Valid Data Provided"
    End If
End Sub

Private Sub cmdSubtract_Click()
    If ValidateData Then
        txtResult.Text = Val(txtNumber1.Text) - Val(txtNumber2.Text)
    Else
        MsgBox "Non - Valid Data Provided"
    End If
End Sub

Private Sub cmdMultiply_Click()
    If ValidateData Then
        txtResult.Text = Val(txtNumber1.Text) * Val(txtNumber2.Text)
    Else
        MsgBox "Non - Valid Data Provided"
    End If
End Sub

Private Sub cmdDivide_Click()
    If ValidateData Then
        txtResult.Text = Val(txtNumber1.Text) / Val(txtNumber2.Text)
    Else
        MsgBox "Non - Valid Data Provided"
    End If
End Sub

Public Function ValidateData() As Boolean
    Dim validFlag As Boolean
    validFlag = True
    If txtNumber1.Text = "" Then
        validFlag = False
    End If
    If txtNumber2.Text = "" Then
        validFlag = False
    End If
    ValidateData = validFlag
End Function


