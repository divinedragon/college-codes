VERSION 5.00
Begin VB.Form frmSimpleCalc 
   BorderStyle     =   1  'Fixed Single
   Caption         =   "Simple Calculator"
   ClientHeight    =   4185
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   3645
   LinkTopic       =   "Form1"
   LockControls    =   -1  'True
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   4185
   ScaleWidth      =   3645
   StartUpPosition =   2  'CenterScreen
   Begin VB.CommandButton cmdExit 
      BackColor       =   &H80000016&
      Caption         =   "&Exit"
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
      Left            =   1785
      Style           =   1  'Graphical
      TabIndex        =   19
      Top             =   3600
      Width           =   1215
   End
   Begin VB.TextBox txtOperation 
      Alignment       =   2  'Center
      Appearance      =   0  'Flat
      BackColor       =   &H00F0F0F0&
      Enabled         =   0   'False
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   12.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   390
      Left            =   435
      Locked          =   -1  'True
      TabIndex        =   18
      Top             =   600
      Width           =   375
   End
   Begin VB.TextBox txtDisplay 
      Alignment       =   1  'Right Justify
      Appearance      =   0  'Flat
      BackColor       =   &H00F0F0F0&
      Enabled         =   0   'False
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   12
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   390
      Left            =   885
      Locked          =   -1  'True
      TabIndex        =   17
      Top             =   600
      Width           =   2175
   End
   Begin VB.CommandButton cmdResult 
      BackColor       =   &H80000016&
      Caption         =   "&Result"
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
      Left            =   465
      Style           =   1  'Graphical
      TabIndex        =   16
      Top             =   3600
      Width           =   1215
   End
   Begin VB.CommandButton cmdAdd 
      BackColor       =   &H80000016&
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
      Left            =   405
      Style           =   1  'Graphical
      TabIndex        =   15
      Top             =   3000
      Width           =   495
   End
   Begin VB.CommandButton cmdSubtract 
      BackColor       =   &H80000016&
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
      Left            =   1125
      Style           =   1  'Graphical
      TabIndex        =   14
      Top             =   3000
      Width           =   495
   End
   Begin VB.CommandButton cmdMultiply 
      BackColor       =   &H80000016&
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
      Left            =   1845
      Style           =   1  'Graphical
      TabIndex        =   13
      Top             =   3000
      Width           =   495
   End
   Begin VB.CommandButton cmdDivide 
      BackColor       =   &H80000016&
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
      Left            =   2520
      Style           =   1  'Graphical
      TabIndex        =   12
      Top             =   3000
      Width           =   495
   End
   Begin VB.CommandButton cmdClear 
      BackColor       =   &H80000016&
      Caption         =   "&Clear"
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
      Left            =   1845
      Style           =   1  'Graphical
      TabIndex        =   11
      Top             =   2400
      Width           =   1215
   End
   Begin VB.CommandButton cmd9 
      BackColor       =   &H80000016&
      Caption         =   "&9"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   12
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   1125
      Style           =   1  'Graphical
      TabIndex        =   10
      Top             =   2400
      Width           =   495
   End
   Begin VB.CommandButton cmd8 
      BackColor       =   &H80000016&
      Caption         =   "&8"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   12
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   405
      Style           =   1  'Graphical
      TabIndex        =   9
      Top             =   2400
      Width           =   495
   End
   Begin VB.CommandButton cmd7 
      BackColor       =   &H80000016&
      Caption         =   "&7"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   12
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   2565
      Style           =   1  'Graphical
      TabIndex        =   8
      Top             =   1800
      Width           =   495
   End
   Begin VB.CommandButton cmd6 
      BackColor       =   &H80000016&
      Caption         =   "&6"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   12
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   1845
      Style           =   1  'Graphical
      TabIndex        =   7
      Top             =   1800
      Width           =   495
   End
   Begin VB.CommandButton cmd5 
      BackColor       =   &H80000016&
      Caption         =   "&5"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   12
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   1125
      Style           =   1  'Graphical
      TabIndex        =   6
      Top             =   1800
      Width           =   495
   End
   Begin VB.CommandButton cmd4 
      BackColor       =   &H80000016&
      Caption         =   "&4"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   12
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   405
      Style           =   1  'Graphical
      TabIndex        =   5
      Top             =   1800
      Width           =   495
   End
   Begin VB.CommandButton cmd3 
      BackColor       =   &H80000016&
      Caption         =   "&3"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   12
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   2565
      Style           =   1  'Graphical
      TabIndex        =   4
      Top             =   1200
      Width           =   495
   End
   Begin VB.CommandButton cmd2 
      BackColor       =   &H80000016&
      Caption         =   "&2"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   12
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   1845
      Style           =   1  'Graphical
      TabIndex        =   3
      Top             =   1200
      Width           =   495
   End
   Begin VB.CommandButton cmd1 
      BackColor       =   &H80000016&
      Caption         =   "&1"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   12
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   1125
      Style           =   1  'Graphical
      TabIndex        =   2
      Top             =   1200
      Width           =   495
   End
   Begin VB.CommandButton cmd0 
      BackColor       =   &H80000016&
      Caption         =   "&0"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   12
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   405
      Style           =   1  'Graphical
      TabIndex        =   1
      Top             =   1200
      Width           =   495
   End
   Begin VB.Label lblHeader 
      AutoSize        =   -1  'True
      BackStyle       =   0  'Transparent
      Caption         =   "Simple Calculator"
      BeginProperty Font 
         Name            =   "Times New Roman"
         Size            =   18
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   390
      Left            =   435
      TabIndex        =   0
      Top             =   120
      Width           =   2775
   End
End
Attribute VB_Name = "frmSimpleCalc"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Dim Operation, LastOperation As Integer
Dim StartSecond As Boolean
Dim Result As Double

Private Sub Form_Load()
    txtDisplay.Text = "0"
    txtOperation.Text = ""
    LastOperation = -1
    Operation = 0
    Result = 0
End Sub

Private Sub cmdResult_Click()
    Dim Test As Integer
    txtOperation.Text = "="
    StartSecond = True
    DoOperation (Operation)
End Sub

Public Function DoOperation(ByVal Operation As Integer) As Double
    Select Case (Operation)
        Case Is = 1
            txtDisplay.Text = Str(Result + Val(txtDisplay.Text))
            Result = Val(txtDisplay.Text)
        Case Is = 2
            txtDisplay.Text = Str(Result - Val(txtDisplay.Text))
            Result = Val(txtDisplay.Text)
        Case Is = 3
            txtDisplay.Text = Str(Result * Val(txtDisplay.Text))
            Result = Val(txtDisplay.Text)
        Case Is = 4
            txtDisplay.Text = Str(Result / Val(txtDisplay.Text))
            Result = Val(txtDisplay.Text)
    End Select
End Function

Public Sub DisplayNumber(ByVal Number As String)
    If Operation > 0 Then
        If StartSecond Then
            txtDisplay.Text = Number
            StartSecond = False
            LastOperation = -1
        Else
            If txtDisplay.Text = "0" Then
                txtDisplay.Text = Number
            Else
                txtDisplay.Text = txtDisplay.Text + Number
            End If
        End If
    Else
        If txtDisplay.Text = "0" Then
            txtDisplay.Text = Number
        Else
            txtDisplay.Text = txtDisplay.Text + Number
        End If
    End If
End Sub

Private Sub cmd0_Click()
    DisplayNumber ("0")
End Sub

Private Sub cmd1_Click()
    DisplayNumber ("1")
End Sub

Private Sub cmd2_Click()
    DisplayNumber ("2")
End Sub

Private Sub cmd3_Click()
    DisplayNumber ("3")
End Sub

Private Sub cmd4_Click()
    DisplayNumber ("4")
End Sub

Private Sub cmd5_Click()
    DisplayNumber ("5")
End Sub

Private Sub cmd6_Click()
    DisplayNumber ("6")
End Sub

Private Sub cmd7_Click()
    DisplayNumber ("7")
End Sub

Private Sub cmd8_Click()
    DisplayNumber ("8")
End Sub

Private Sub cmd9_Click()
    DisplayNumber ("9")
End Sub

Private Sub cmdAdd_Click()
    Operation = 1
    StartSecond = True
    
    'The following condition is checked for multiple operations before the user asks for
    'Result. For Example :  2+3*4-5/2=
    If LastOperation <> Operation Then
        If (txtOperation.Text <> "") Then
            DoOperation (LastOperation)
        Else
            Result = Val(txtDisplay.Text)
        End If
        LastOperation = 1
        txtOperation.Text = "+"
    End If
End Sub

Private Sub cmdSubtract_Click()
    Operation = 2
    StartSecond = True
    
    'The following condition is checked for multiple operations before the user asks for
    'Result. For Example :  2+3*4-5/2=
    If LastOperation <> Operation Then
        If (txtOperation.Text <> "") Then
            DoOperation (LastOperation)
        Else
            Result = Val(txtDisplay.Text)
        End If
        LastOperation = 2
        txtOperation.Text = "-"
    End If
End Sub

Private Sub cmdMultiply_Click()
    Operation = 3
    StartSecond = True
    
    'The following condition is checked for multiple operations before the user asks for
    'Result. For Example :  2+3*4-5/2=
    If LastOperation <> Operation Then
        If (txtOperation.Text <> "") Then
            DoOperation (LastOperation)
        Else
            Result = Val(txtDisplay.Text)
        End If
        LastOperation = 3
        txtOperation.Text = "x"
    End If
End Sub

Private Sub cmdDivide_Click()
    Operation = 4
    StartSecond = True
    
    'The following condition is checked for multiple operations before the user asks for
    'Result. For Example :  2+3*4-5/2=
    If LastOperation <> Operation Then
        If (txtOperation.Text <> "") Then
            DoOperation (LastOperation)
        Else
            Result = Val(txtDisplay.Text)
        End If
        LastOperation = 4
        txtOperation.Text = "+"
    End If
End Sub

Private Sub cmdClear_Click()
    txtDisplay.Text = "0"
    txtOperation.Text = ""
    Operation = 0
    LastOperation = -1
    StartSecond = False
    Result = 0
End Sub

Private Sub cmdExit_Click()
    End
End Sub

