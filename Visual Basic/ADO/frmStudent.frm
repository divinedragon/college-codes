VERSION 5.00
Begin VB.Form frmStudent 
   BorderStyle     =   1  'Fixed Single
   Caption         =   "Student Master"
   ClientHeight    =   5340
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   8175
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
   ScaleHeight     =   5340
   ScaleWidth      =   8175
   StartUpPosition =   2  'CenterScreen
   Begin VB.CommandButton cmdDelete 
      Caption         =   "&Delete"
      Height          =   375
      Left            =   5760
      TabIndex        =   4
      Top             =   4320
      Width           =   1095
   End
   Begin VB.CommandButton cmdCancel 
      Caption         =   "&Cancel"
      Height          =   375
      Left            =   4680
      TabIndex        =   3
      Top             =   4320
      Width           =   1095
   End
   Begin VB.CommandButton cmdEnd 
      Caption         =   "E&nd"
      Height          =   375
      Left            =   6840
      TabIndex        =   6
      Top             =   4800
      Width           =   1215
   End
   Begin VB.CommandButton cmdSearch 
      Caption         =   "&Search"
      Height          =   375
      Left            =   120
      TabIndex        =   5
      Top             =   4800
      Width           =   1215
   End
   Begin VB.CommandButton cmdSave 
      Caption         =   "S&ave"
      Height          =   375
      Left            =   3600
      TabIndex        =   2
      Top             =   4320
      Width           =   1095
   End
   Begin VB.CommandButton cmdEdit 
      Caption         =   "&Edit"
      Height          =   375
      Left            =   2520
      TabIndex        =   1
      Top             =   4320
      Width           =   1095
   End
   Begin VB.CommandButton cmdAdd 
      Caption         =   "&Add"
      Height          =   375
      Left            =   1320
      TabIndex        =   0
      Top             =   4320
      Width           =   1215
   End
   Begin VB.Frame Frame1 
      Caption         =   "Student Details"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   3855
      Left            =   120
      TabIndex        =   14
      Top             =   240
      Width           =   7935
      Begin VB.OptionButton optFemale 
         Caption         =   "Female"
         Height          =   255
         Left            =   3600
         TabIndex        =   13
         Top             =   3360
         Width           =   1215
      End
      Begin VB.OptionButton optMale 
         Caption         =   "Male"
         Height          =   255
         Left            =   2160
         TabIndex        =   12
         Top             =   3360
         Width           =   1215
      End
      Begin VB.TextBox txtAge 
         Height          =   315
         Left            =   2160
         MaxLength       =   3
         TabIndex        =   11
         Top             =   2880
         Width           =   1095
      End
      Begin VB.TextBox txtAddress 
         Height          =   915
         Left            =   2160
         MaxLength       =   80
         MultiLine       =   -1  'True
         TabIndex        =   9
         Top             =   1320
         Width           =   3735
      End
      Begin VB.TextBox txtName 
         Height          =   315
         Left            =   2160
         MaxLength       =   30
         TabIndex        =   8
         Top             =   840
         Width           =   3375
      End
      Begin VB.TextBox txtPRN 
         Height          =   315
         Left            =   2160
         MaxLength       =   5
         TabIndex        =   7
         Top             =   360
         Width           =   1575
      End
      Begin VB.ComboBox cmbCity 
         Height          =   360
         Left            =   2160
         TabIndex        =   10
         Text            =   "Select City"
         Top             =   2400
         Width           =   2415
      End
      Begin VB.Label Label6 
         Caption         =   "Gender"
         Height          =   255
         Left            =   480
         TabIndex        =   20
         Top             =   3360
         Width           =   975
      End
      Begin VB.Label Label5 
         Caption         =   "Age"
         Height          =   255
         Left            =   480
         TabIndex        =   19
         Top             =   2880
         Width           =   1575
      End
      Begin VB.Label Label4 
         Caption         =   "City"
         Height          =   255
         Left            =   480
         TabIndex        =   18
         Top             =   2400
         Width           =   1575
      End
      Begin VB.Label Label3 
         Caption         =   "Address"
         Height          =   255
         Left            =   480
         TabIndex        =   17
         Top             =   1320
         Width           =   1575
      End
      Begin VB.Label Label2 
         Caption         =   "Student Name"
         Height          =   255
         Left            =   480
         TabIndex        =   16
         Top             =   840
         Width           =   1575
      End
      Begin VB.Label Label1 
         Caption         =   "PRN No."
         Height          =   255
         Left            =   480
         TabIndex        =   15
         Top             =   360
         Width           =   1215
      End
   End
End
Attribute VB_Name = "frmStudent"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit
Private mconDB As ADODB.Connection




'Dim ValidateError As Boolean
'Dim ErrorString As String

Private Sub cmdAdd_Click()
    Call ClearControls
    
    'Enable and Disable the Required Buttons
    cmdSave.Enabled = True
    cmdCancel.Enabled = True
    cmdSearch.Enabled = False
    cmdEdit.Enabled = False
    cmdAdd.Enabled = False
    cmdDelete.Enabled = False

    txtPRN.SetFocus
End Sub

Private Sub cmdCancel_Click()
    'Set the Controls after the Cancel Operation
    cmdSave.Enabled = False
    cmdCancel.Enabled = False
    cmdAdd.Enabled = True
    cmdEdit.Enabled = True
    cmdDelete.Enabled = True
    cmdSearch.Enabled = True
End Sub

Private Sub cmdDelete_Click()
    Dim PRN As String
    PRN = ""
    
    PRN = InputBox("Enter a PRN No.", "Project Input", "")
    
    If Trim(PRN) = "" Then
        MsgBox ""
        Exit Sub
    End If
    
    If SearchPRN(PRN) Then
        'If found display the record and ask the user for deletion
        If MsgBox("Do you want to Delete the Record for PRN ==> " & PRN & vbCr & "You will not be able to Undo the Deletion ???", vbYesNo + vbQuestion + vbDefaultButton2) = vbYes Then
            Dim sqlString As String
            
            sqlString = "DELETE from STUDENT Where PRN = '" & PRN & "'"
            
            mconDB.Execute sqlString
            
            MsgBox "Record for PRN ==> " & PRN & " has been DELETED from the Database successfully", vbInformation
            Call ClearControls
            Exit Sub
        End If
    Else
        MsgBox "PRN does not exists in the Database", vbInformation
    End If
End Sub

Private Sub cmdEnd_Click()
    End
End Sub

Private Sub cmdSave_Click()
    Dim strSQL As String
    Dim strSex As String
    
    'Validate the Data entered by the user
    If Not ValidateData Then
        Exit Sub
    End If
    
    If optMale.Value = True Then
        strSex = "M"
    Else
        strSex = "F"
    End If
    
    'Build the Query String and Save the data
    strSQL = "Insert into STUDENT values('" & txtPRN.Text _
     & "','" & txtName.Text & "','" & txtAddress.Text _
     & "','" & cmbCity.Text & "'," & Val(txtAge.Text) _
     & ",'" & strSex & "')"
     
    'MsgBox strSQL
    mconDB.Execute strSQL
    
    MsgBox "Data Saved into the Database Successfully", vbInformation
    
    cmdSave.Enabled = False
    cmdCancel.Enabled = False
    cmdAdd.Enabled = True
    cmdEdit.Enabled = True
    cmdDelete.Enabled = True
    cmdSearch.Enabled = True
End Sub

Private Sub Form_Load()
    'Fill the City Combo
    
    cmbCity.AddItem ("Pune")
    cmbCity.AddItem ("Mumbai")
    cmbCity.AddItem ("New Delhi")
    cmbCity.AddItem ("Bangalore")
    cmbCity.AddItem ("Kolkata")
    cmbCity.AddItem ("Agra")
    cmbCity.AddItem ("Allahabad")
    
    cmdSave.Enabled = False
    cmdCancel.Enabled = False

    Set mconDB = New ADODB.Connection
    mconDB.ConnectionString = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" & App.Path & "\..\student.MDB"
    mconDB.Open
    
'    If mconDB.State = adStateOpen Then
'        MsgBox "Connection Established"
'    End If
    
End Sub

Private Sub txtAge_KeyPress(KeyAscii As Integer)
    If ((KeyAscii < 48 Or KeyAscii > 57) And (Not (KeyAscii = 8))) Then
        KeyAscii = 0
    End If
End Sub

Private Sub ClearControls()
    'Clear all the Data
    txtPRN.Text = ""
    txtName.Text = ""
    txtAddress.Text = ""
    cmbCity.ListIndex = -1
    txtAge.Text = ""
    optMale.Value = False
    optFemale.Value = False
End Sub

Private Function ValidateData() As Boolean
    'ValidateError = False
    'ErrorString = ""
    If Trim$(txtPRN.Text) = "" Then
        'ErroString = ErrorString & "Invalid PRN Provided"
        MsgBox "Invalid PRN Provided", vbCritical
        ValidateData = False
        Exit Function
    End If
    
    If Trim$(txtAge.Text) = "" Then
        MsgBox "Invalid Age Provided", vbCritical
        ValidateData = False
        Exit Function
    End If
    
    ValidateData = True
End Function

Private Function SearchPRN(ByVal PRN As String) As Boolean
    'Creating a Recordset object to collect the Data returned by the SELECT query
    Dim rs As ADODB.Recordset
    Set rs = New ADODB.Recordset
    
    Dim strSQL As String
    
    strSQL = "SELECT * FROM Student Where PRN='" & PRN & "'"
    mconDB.Execute strSQL
    
    rs.Open strSQL, mconDB, adOpenStatic, adLockReadOnly
    
    If rs.RecordCount = -1 Then
        MsgBox "An error occurred while extracting Student details for PRN ==> " & PRN
        rs.Close
        SearchPRN = False
        Exit Function
    ElseIf rs.RecordCount = 0 Then
        SearchPRN = False
        Exit Function
    End If
    
    rs.MoveFirst
    
    txtPRN.Text = rs!PRN
    txtName.Text = rs!Name
    txtAddress.Text = rs!Address & ""   'If at all the Address value is NULL, then the textbox will contain zero length string
    cmbCity.Text = rs!City
    txtAge.Text = rs!Age & ""
    If Trim(rs!Sex) = "M" Then
        optMale.Value = True
    Else
        optFemale.Value = True
    End If
    
    SearchPRN = True
End Function
