VERSION 5.00
Begin VB.Form frmClock 
   BorderStyle     =   1  'Fixed Single
   Caption         =   "This is a Custom Clock "
   ClientHeight    =   1080
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   4425
   LinkTopic       =   "Form1"
   LockControls    =   -1  'True
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   1080
   ScaleWidth      =   4425
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox txtSec 
      Alignment       =   1  'Right Justify
      Appearance      =   0  'Flat
      BackColor       =   &H8000000F&
      BorderStyle     =   0  'None
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   20.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   600
      Left            =   2640
      Locked          =   -1  'True
      TabIndex        =   2
      TabStop         =   0   'False
      Text            =   "0"
      Top             =   240
      Width           =   735
   End
   Begin VB.TextBox txtMin 
      Alignment       =   1  'Right Justify
      Appearance      =   0  'Flat
      BackColor       =   &H8000000F&
      BorderStyle     =   0  'None
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   20.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   600
      Left            =   1800
      Locked          =   -1  'True
      TabIndex        =   1
      TabStop         =   0   'False
      Text            =   "0"
      Top             =   240
      Width           =   735
   End
   Begin VB.TextBox txtHr 
      Alignment       =   1  'Right Justify
      Appearance      =   0  'Flat
      BackColor       =   &H8000000F&
      BorderStyle     =   0  'None
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   20.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   600
      Left            =   960
      Locked          =   -1  'True
      TabIndex        =   0
      TabStop         =   0   'False
      Text            =   "0"
      Top             =   240
      Width           =   735
   End
   Begin VB.Timer tmrClock 
      Interval        =   1000
      Left            =   3720
      Top             =   120
   End
End
Attribute VB_Name = "frmClock"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
'This Code is displaying the Clock using 3 TextBoxes and a Timer Control
'The Working of the Clock is controlled by the
'Designed By - Deepak Shakya
'Date - 13-07-2007

Option Explicit
Dim Sec As Integer, Min As Integer, Hr As Integer

Private Sub Form_Load()
    Sec = 0
    Min = 0
    Hr = 0
    txtSec.Text = "00"
    txtMin.Text = "00"
    txtHr.Text = "00"
End Sub

Private Sub tmrClock_Timer()
    Sec = Sec + 1
    If Sec = 60 Then
        Sec = 0
        Min = Min + 1
        If Min = 60 Then
            Min = 0
            Hr = Hr + 1
            If Hr = 24 Then
                Hr = 0
            End If
        End If
    End If
    
    'Displaying the Numbers in the Format (00) - Traditional Way
'    If Sec < 10 Then
'        txtSec.Text = "0" + Trim(Str(Sec))
'    Else
'        txtSec.Text = Sec
'    End If
'
'    If Min < 10 Then
'        txtMin.Text = "0" + Trim(Str(Min))
'    Else
'        txtMin.Text = Min
'    End If
'
'    If Hr < 10 Then
'        txtHr.Text = "0" + Trim(Str(Hr))
'    Else
'        txtHr.Text = Hr
'    End If

    'The above code is too long for just displaying the values in correct format.
    'Not efficient. The following is the better way of doing the same thing using
    'the Format() function.
    txtSec.Text = Format(Sec, "00")
    txtMin.Text = Format(Min, "00")
    txtHr.Text = Format(Hr, "00")
    
End Sub
