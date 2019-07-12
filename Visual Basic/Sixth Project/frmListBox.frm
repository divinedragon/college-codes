VERSION 5.00
Begin VB.Form frmListBox_ComboBox 
   Caption         =   "Working with ListBox and ComboBox"
   ClientHeight    =   8580
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   8775
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
   ScaleHeight     =   8580
   ScaleWidth      =   8775
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton cmdRemoveFromList 
      Caption         =   "Remove Selected From List"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   330
      Left            =   3240
      TabIndex        =   8
      Top             =   1920
      Width           =   3255
   End
   Begin VB.CommandButton cmdListProps 
      Caption         =   "Show ListBox Properties"
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
      Left            =   3240
      TabIndex        =   7
      Top             =   1440
      Width           =   3255
   End
   Begin VB.TextBox txtInputCombo 
      Appearance      =   0  'Flat
      Height          =   330
      Left            =   3840
      TabIndex        =   6
      Top             =   4320
      Width           =   2055
   End
   Begin VB.CommandButton cmdAddToCombo 
      Caption         =   "&Add"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   330
      Left            =   6000
      TabIndex        =   5
      Top             =   4320
      Width           =   1095
   End
   Begin VB.CommandButton cmdComboProps 
      Caption         =   "Show &ComboBox Properties"
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
      Left            =   2640
      TabIndex        =   4
      Top             =   5160
      Width           =   3255
   End
   Begin VB.ComboBox TextCombo 
      Height          =   360
      ItemData        =   "frmListBox.frx":0000
      Left            =   240
      List            =   "frmListBox.frx":001F
      TabIndex        =   3
      Text            =   "Select A Name"
      Top             =   4320
      Width           =   3135
   End
   Begin VB.CommandButton cmdAddToList 
      Caption         =   "&Add"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   330
      Left            =   5400
      TabIndex        =   2
      Top             =   240
      Width           =   1095
   End
   Begin VB.TextBox txtInput 
      Appearance      =   0  'Flat
      Height          =   330
      Left            =   3240
      TabIndex        =   1
      Top             =   240
      Width           =   2055
   End
   Begin VB.ListBox TestList 
      Height          =   2460
      ItemData        =   "frmListBox.frx":00A2
      Left            =   240
      List            =   "frmListBox.frx":00BB
      MultiSelect     =   2  'Extended
      TabIndex        =   0
      Top             =   240
      Width           =   2775
   End
End
Attribute VB_Name = "frmListBox_ComboBox"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
'This Project shows the working of List Box, important properties and methods
'Following Properties are Illustrated
    '1. Text
    '2. ListCount
    '3. SelCount
    '4. Columns - Shows the List in that many Columns
    '5. Sorted - Sorts the List in Alphabetic Order. Also, if set to TRUE, Items
    '            Added @ runtime are also added alphabetically
    '6. ListIndex - Gives us the Index of the Last Selected Item (-1 - No Selection)
    
'Following Methods are Illustrated
    '1. AddItem
    '2. RemoveItem
    
'Created By :- Deepak Shakya
'Date :- 14-07-2007

Option Explicit

Private Sub Form_Load()
    TestList.ListIndex = 0  'Select the First Item from the List
End Sub

Private Sub cmdListProps_click()
    Dim OutputString As String
    'The Text Property of the ListBox gives the Item which is recently selected in
    'the ListBox
    'ListCount Property gives the Total No. of Items in the ListBox
    'SelCount Property gives the Total No. of Selected Items in the ListBox
    'ListItem Property gives the Index of the Last Item Selected
    
    OutputString = "Last Item Selected : " & TestList.Text & vbCr
    OutputString = OutputString & "Total Items : " & TestList.ListCount & vbCr
    OutputString = OutputString & "Selected Items : " & TestList.SelCount & vbCr
    OutputString = OutputString & "Index of Last Selected Item : " & TestList.ListIndex & vbCr
    MsgBox OutputString, , "ListBox Properties"
End Sub

Private Sub cmdAddToList_Click()
    'AddItem method adds a new Item in the ListBox at Runtime
    If Trim(txtInput.Text) <> "" Then
        TestList.AddItem (txtInput.Text)
        txtInput.Text = ""
    End If
End Sub

Private Sub cmdRemoveFromList_Click()
    'In the following code, we are asking the user whether he really wants the Item
    'to be removed. If he says Yes, then only the Item is Removed the ListBox
    
    If MsgBox("Remove This Item : " & TestList.Text, vbYesNo) = vbYes Then
        TestList.RemoveItem (TestList.ListIndex)
    End If
End Sub

Private Sub cmdComboProps_Click()
    MsgBox TextCombo.Text
End Sub

Private Sub cmdAddToCombo_Click()
    'AddItem method adds a new Item in the ListBox at Runtime. If empty then nothing
    'is added to the ListBox
    If Trim(txtInputCombo.Text) <> "" Then
        TextCombo.AddItem (txtInputCombo.Text)
        txtInputCombo.Text = ""
    End If
End Sub
