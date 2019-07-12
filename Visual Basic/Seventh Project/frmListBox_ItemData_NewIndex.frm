VERSION 5.00
Begin VB.Form frmListBox_ItemData_NewIndex 
   Caption         =   "Working with ListBox --> ItemData and NewIndex"
   ClientHeight    =   3420
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   5925
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
   ScaleHeight     =   3420
   ScaleWidth      =   5925
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton cmdShow 
      Caption         =   "SHOW"
      Height          =   375
      Left            =   3120
      TabIndex        =   2
      Top             =   2880
      Width           =   1695
   End
   Begin VB.ListBox List1 
      Height          =   2220
      Left            =   1920
      TabIndex        =   1
      Top             =   360
      Width           =   2175
   End
   Begin VB.CommandButton cmdAdd 
      Caption         =   "ADD"
      Height          =   375
      Left            =   1320
      TabIndex        =   0
      Top             =   2880
      Width           =   1695
   End
End
Attribute VB_Name = "frmListBox_ItemData_NewIndex"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub cmdAdd_Click()
    If List1.ListCount < 1 Then
        List1.AddItem ("BCA")
        List1.ItemData(List1.NewIndex) = 21
        
        List1.AddItem ("BBA-IT")
        List1.ItemData(List1.NewIndex) = 22
        
        List1.AddItem ("M.Sc. (CA)")
        List1.ItemData(List1.NewIndex) = 41
        
        List1.AddItem ("MBA-IT")
        List1.ItemData(List1.NewIndex) = 42
    End If
End Sub

Private Sub cmdShow_Click()
    If List1.SelCount > 0 Then
        Dim output As String
        output = "List1.Text ==> " & List1.Text & vbCr
        output = output & "List1.ListIndex  ==> " & List1.ListIndex & vbCr
        output = output & "List1.ItemData(List1.ListIndex) ==> " & List1.ItemData(List1.ListIndex)
        MsgBox output
    Else
        MsgBox "First Select an Item from the ListBox"
    End If
End Sub

Private Sub List1_DblClick()
    MsgBox List1.ItemData(List1.ListIndex)
End Sub
