VERSION 5.00
Begin VB.Form frmBflyAnimation 
   BackColor       =   &H8000000A&
   Caption         =   "Lets Do Some Animation Using the Timer Control"
   ClientHeight    =   4980
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   8730
   LinkTopic       =   "Form1"
   LockControls    =   -1  'True
   ScaleHeight     =   4980
   ScaleWidth      =   8730
   StartUpPosition =   3  'Windows Default
   Begin VB.PictureBox picAnimation 
      Appearance      =   0  'Flat
      BackColor       =   &H80000004&
      BorderStyle     =   0  'None
      ForeColor       =   &H80000008&
      Height          =   1215
      Left            =   120
      Picture         =   "frmBflyAnimation.frx":0000
      ScaleHeight     =   1215
      ScaleWidth      =   1215
      TabIndex        =   0
      Top             =   3720
      Width           =   1215
   End
   Begin VB.Timer tmrAnimation 
      Interval        =   1
      Left            =   6360
      Top             =   120
   End
End
Attribute VB_Name = "frmBflyAnimation"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
'This Forms shows how we can do animation in Visual Basic using the Timer Control.
'We are using a two images which we are swapping using the Timer Control every second
'Also we are changing the position

Option Explicit
Dim i As Boolean
Dim picLeft As Integer, picTop As Integer

Private Sub Form_Load()
    i = True
    picLeft = 0
    picTop = frmBflyAnimation.Height - picAnimation.Height
End Sub

Private Sub Form_Resize()
    picLeft = 0
    picTop = frmBflyAnimation.Height - picAnimation.Height
End Sub

Private Sub tmrAnimation_Timer()
    'We are using i as a flag to determine the picture that is being displayed.
    'When i is True, load Image2 and when it is False, load Image1
    If i Then
        picAnimation.Picture = LoadPicture("H:\Visual Basic\All Images\bfly2.bmp",)
        i = False
    Else
        picAnimation.Picture = LoadPicture("H:\Visual Basic\All Images\bfly1.bmp")
        i = True
    End If
    
    If (picAnimation.Top < 0) Or (picAnimation.Left > (frmBflyAnimation.Width - picAnimation.Width)) Then
        picAnimation.Left = picLeft
        picAnimation.Top = picTop
    End If
    
    'Here we are moving the picture so that the animation looks good.
    picAnimation.Left = picAnimation.Left + frmBflyAnimation.Width / 100
    picAnimation.Top = picAnimation.Top - frmBflyAnimation.Height / 100
End Sub
