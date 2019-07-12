VERSION 5.00
Begin VB.MDIForm mdiMain 
   BackColor       =   &H8000000C&
   Caption         =   "MDIForm1"
   ClientHeight    =   7725
   ClientLeft      =   165
   ClientTop       =   450
   ClientWidth     =   10665
   LinkTopic       =   "MDIForm1"
   StartUpPosition =   3  'Windows Default
   Begin VB.Menu mnuForms 
      Caption         =   "Form Collection"
      Visible         =   0   'False
      Begin VB.Menu mnuForm1 
         Caption         =   "Form &1"
      End
      Begin VB.Menu mnuForm2 
         Caption         =   "Form &2"
      End
      Begin VB.Menu mnuForm3 
         Caption         =   "Form &3"
      End
   End
End
Attribute VB_Name = "mdiMain"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False


Private Sub MDIForm_MouseDown(Button As Integer, Shift As Integer, X As Single, Y As Single)
    If (Button = 2) Then
        
    End If
End Sub

Private Sub mnuForm1_Click()
    frmChild1.Show
End Sub

Private Sub mnuForm2_Click()
    frmChild2.Show
End Sub

Private Sub mnuForm3_Click()
    frmChild3.Show
End Sub

