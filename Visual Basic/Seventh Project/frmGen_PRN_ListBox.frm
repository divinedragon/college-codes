VERSION 5.00
Begin VB.Form frmGen_PRN_ListBox 
   BorderStyle     =   1  'Fixed Single
   Caption         =   "Form1"
   ClientHeight    =   3720
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   6150
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
   ScaleHeight     =   3720
   ScaleWidth      =   6150
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox txtYear 
      Appearance      =   0  'Flat
      Height          =   285
      Left            =   3720
      MaxLength       =   4
      TabIndex        =   5
      Top             =   960
      Width           =   975
   End
   Begin VB.TextBox txtPRN_Output 
      Appearance      =   0  'Flat
      BackColor       =   &H80000016&
      Height          =   285
      Left            =   3600
      Locked          =   -1  'True
      TabIndex        =   2
      Top             =   1920
      Width           =   1455
   End
   Begin VB.CommandButton cmdGenerate 
      Caption         =   "Generate PRN"
      Height          =   375
      Left            =   2040
      TabIndex        =   1
      Top             =   2760
      Width           =   1575
   End
   Begin VB.ListBox lstCourse 
      Height          =   1980
      Left            =   120
      TabIndex        =   0
      Top             =   720
      Width           =   1575
   End
   Begin VB.Label Label3 
      Caption         =   "New PRN ==>"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   255
      Left            =   1920
      TabIndex        =   6
      Top             =   1920
      Width           =   1575
   End
   Begin VB.Label Label1 
      Caption         =   "Admission Year"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   255
      Left            =   1920
      TabIndex        =   4
      Top             =   960
      Width           =   1815
   End
   Begin VB.Label Label2 
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
      Height          =   255
      Left            =   120
      TabIndex        =   3
      Top             =   360
      Width           =   1575
   End
End
Attribute VB_Name = "frmGen_PRN_ListBox"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim CountPRN(3) As String

Private Sub cmdGenerate_Click()
    If Validate(Trim(txtYear.Text)) Then
        txtPRN_Output.Text = Right(txtYear.Text, 2) & "03"
        If lstCourse.Text = "BCA" Then
            txtPRN_Output.Text = txtPRN_Output.Text & Trim(Str(lstCourse.ItemData(lstCourse.ListIndex))) + CountPRN(0)
            CountPRN(0) = Format((Int(CountPRN(0)) + 1), "000")
        ElseIf lstCourse.Text = "BBA-IT" Then
            txtPRN_Output.Text = txtPRN_Output.Text & Trim(Str(lstCourse.ItemData(lstCourse.ListIndex))) + CountPRN(1)
            CountPRN(1) = Format((Int(CountPRN(1)) + 1), "000")
        ElseIf lstCourse.Text = "M.Sc. (CA)" Then
            txtPRN_Output.Text = txtPRN_Output.Text & Trim(Str(lstCourse.ItemData(lstCourse.ListIndex))) + CountPRN(2)
            CountPRN(2) = Format((Int(CountPRN(2)) + 1), "000")
        Else
            txtPRN_Output.Text = txtPRN_Output.Text & Trim(Str(lstCourse.ItemData(lstCourse.ListIndex))) + CountPRN(3)
            CountPRN(3) = Format((Int(CountPRN(3)) + 1), "000")
        End If
    Else
        MsgBox "Invalid Data Provided in Academic Year or No Course is Selected", vbCritical
    End If
End Sub

Private Sub Form_Load()
    Dim CourseArray(4, 2) As String
    Dim i As Integer
    CourseArray(1, 1) = "BCA"
    CourseArray(1, 2) = "21"
    
    CourseArray(2, 1) = "BBA-IT"
    CourseArray(2, 2) = "22"
    
    CourseArray(3, 1) = "M.Sc. (CA)"
    CourseArray(3, 2) = "41"
    
    CourseArray(4, 1) = "MBA-IT"
    CourseArray(4, 2) = "42"
    
    For i = 1 To 4
        lstCourse.AddItem (CourseArray(i, 1))
        lstCourse.ItemData(lstCourse.NewIndex) = Int(CourseArray(i, 2))
    Next i
    
'    lstCourse.AddItem ("BCA")
'    lstCourse.ItemData(lstCourse.NewIndex) = 21
'
'    lstCourse.AddItem ("BBA-IT")
'    lstCourse.ItemData(lstCourse.NewIndex) = 22
'
'    lstCourse.AddItem ("M.Sc. (CA)")
'    lstCourse.ItemData(lstCourse.NewIndex) = 41
'
'    lstCourse.AddItem ("MBA-IT")
'    lstCourse.ItemData(lstCourse.NewIndex) = 42
    
    lstCourse.ListIndex = 0
    
    CountPRN(0) = "001"     'Counter for BCA
    CountPRN(1) = "001"     'Counter for BBA-IT
    CountPRN(2) = "001"     'Counter for MSCCA
    CountPRN(3) = "001"     'Counter for MBA-IT
End Sub

Public Function Validate(ByVal AcadYear As String) As Boolean
    Dim Flag As Boolean
    Flag = True

    If AcadYear = "" Then
        Flag = False
    End If
    If Len(AcadYear) <> 4 Then
        Flag = False
    End If
    
    If lstCourse.SelCount < 1 Then
        Flag = False
    End If
    
    Validate = Flag
End Function
