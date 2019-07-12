VERSION 5.00
Begin VB.Form frmNewAccount 
   BorderStyle     =   1  'Fixed Single
   Caption         =   "New Account Window"
   ClientHeight    =   9075
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   9150
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
   ScaleHeight     =   9075
   ScaleWidth      =   9150
   StartUpPosition =   3  'Windows Default
   Begin VB.Frame FrameAcType 
      Caption         =   "Select Account Type"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   735
      Left            =   120
      TabIndex        =   38
      Top             =   600
      Width           =   8895
      Begin VB.OptionButton optSavings 
         Caption         =   "Savings"
         Height          =   255
         Left            =   1680
         TabIndex        =   40
         Top             =   360
         Width           =   1215
      End
      Begin VB.OptionButton optCurrent 
         Caption         =   "Current"
         Height          =   255
         Left            =   6000
         TabIndex        =   39
         Top             =   360
         Width           =   1215
      End
   End
   Begin VB.CommandButton cmdExit 
      BackColor       =   &H80000016&
      Caption         =   "E&xit"
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
      Height          =   375
      Left            =   6248
      Style           =   1  'Graphical
      TabIndex        =   18
      Top             =   8520
      Width           =   1695
   End
   Begin VB.CommandButton cmdClear 
      BackColor       =   &H80000016&
      Caption         =   "&Clear"
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
      Height          =   375
      Left            =   4568
      Style           =   1  'Graphical
      TabIndex        =   17
      Top             =   8520
      Width           =   1695
   End
   Begin VB.CommandButton cmdSubmit 
      BackColor       =   &H80000016&
      Caption         =   "&Submit"
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
      Height          =   375
      Left            =   2888
      Style           =   1  'Graphical
      TabIndex        =   16
      Top             =   8520
      Width           =   1695
   End
   Begin VB.CommandButton cmdNewAccount 
      BackColor       =   &H80000016&
      Caption         =   "&New Account"
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
      Height          =   375
      Left            =   1208
      Style           =   1  'Graphical
      TabIndex        =   15
      Top             =   8520
      Width           =   1695
   End
   Begin VB.Frame FrameAmt 
      Height          =   615
      Left            =   120
      TabIndex        =   22
      Top             =   7680
      Width           =   8895
      Begin VB.TextBox txtAmount 
         Appearance      =   0  'Flat
         Height          =   285
         Left            =   4200
         TabIndex        =   14
         Top             =   240
         Width           =   2295
      End
      Begin VB.Label Label 
         Caption         =   "Amount Deposited"
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
         Index           =   13
         Left            =   2040
         TabIndex        =   37
         Top             =   240
         Width           =   2055
      End
   End
   Begin VB.Frame FrameNominee 
      Caption         =   "Nominee Details"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   3495
      Left            =   120
      TabIndex        =   21
      Top             =   4080
      Width           =   8895
      Begin VB.CheckBox chkNominee2_Enable 
         Caption         =   "Check1"
         Height          =   240
         Left            =   240
         TabIndex        =   41
         Top             =   2040
         Width           =   255
      End
      Begin VB.TextBox txtNominee2_Age 
         Appearance      =   0  'Flat
         Height          =   285
         Left            =   6480
         MaxLength       =   3
         TabIndex        =   12
         Top             =   1920
         Width           =   1095
      End
      Begin VB.TextBox txtNominee2_Address 
         Appearance      =   0  'Flat
         Height          =   885
         Left            =   2040
         MultiLine       =   -1  'True
         TabIndex        =   13
         Top             =   2520
         Width           =   3255
      End
      Begin VB.TextBox txtNominee2_Name 
         Appearance      =   0  'Flat
         Height          =   285
         Left            =   2040
         TabIndex        =   11
         Top             =   1920
         Width           =   2895
      End
      Begin VB.TextBox txtNominee1_Age 
         Appearance      =   0  'Flat
         Height          =   285
         Left            =   6480
         MaxLength       =   3
         TabIndex        =   9
         Top             =   360
         Width           =   1095
      End
      Begin VB.TextBox txtNominee1_Address 
         Appearance      =   0  'Flat
         Height          =   885
         Left            =   2040
         MultiLine       =   -1  'True
         TabIndex        =   10
         Top             =   960
         Width           =   3255
      End
      Begin VB.TextBox txtNominee1_Name 
         Appearance      =   0  'Flat
         Height          =   285
         Left            =   2040
         TabIndex        =   8
         Top             =   360
         Width           =   2895
      End
      Begin VB.Label Label 
         Caption         =   "Age"
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
         Index           =   11
         Left            =   5400
         TabIndex        =   36
         Top             =   1920
         Width           =   735
      End
      Begin VB.Label Label 
         Caption         =   "Address"
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
         Index           =   12
         Left            =   600
         TabIndex        =   35
         Top             =   2520
         Width           =   1335
      End
      Begin VB.Label Label 
         Caption         =   "Nominee 2 Name"
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
         Index           =   10
         Left            =   600
         TabIndex        =   34
         Top             =   1920
         Width           =   1335
      End
      Begin VB.Label Label 
         Caption         =   "Age"
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
         Index           =   8
         Left            =   5400
         TabIndex        =   33
         Top             =   360
         Width           =   735
      End
      Begin VB.Label Label 
         Caption         =   "Address"
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
         Index           =   9
         Left            =   600
         TabIndex        =   32
         Top             =   960
         Width           =   1335
      End
      Begin VB.Label Label 
         Caption         =   "Nominee 1 Name"
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
         Index           =   7
         Left            =   600
         TabIndex        =   31
         Top             =   360
         Width           =   1335
      End
   End
   Begin VB.Frame FramePersonal 
      Caption         =   "Personal Details"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   2535
      Left            =   120
      TabIndex        =   20
      Top             =   1440
      Width           =   8895
      Begin VB.TextBox txtPinCode 
         Appearance      =   0  'Flat
         Height          =   285
         Left            =   6480
         TabIndex        =   7
         Top             =   2040
         Width           =   1695
      End
      Begin VB.ComboBox cmbCity 
         Height          =   360
         ItemData        =   "frmNewAccount.frx":0000
         Left            =   1920
         List            =   "frmNewAccount.frx":0002
         TabIndex        =   6
         Text            =   "Select City"
         Top             =   2040
         Width           =   2655
      End
      Begin VB.TextBox txtAddress 
         Appearance      =   0  'Flat
         Height          =   885
         Left            =   1920
         MultiLine       =   -1  'True
         TabIndex        =   5
         Top             =   1080
         Width           =   3255
      End
      Begin VB.Frame FrameGender 
         BorderStyle     =   0  'None
         Height          =   615
         Left            =   5280
         TabIndex        =   26
         Top             =   720
         Width           =   2655
         Begin VB.OptionButton optFemale 
            Caption         =   "Female"
            Height          =   255
            Left            =   1200
            TabIndex        =   4
            Top             =   360
            Width           =   1215
         End
         Begin VB.OptionButton optMale 
            Caption         =   "Male"
            Height          =   255
            Left            =   1200
            TabIndex        =   3
            Top             =   0
            Width           =   1215
         End
         Begin VB.Label Label 
            Caption         =   "Gender"
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
            Index           =   3
            Left            =   120
            TabIndex        =   27
            Top             =   0
            Width           =   975
         End
      End
      Begin VB.TextBox txtName 
         Appearance      =   0  'Flat
         Height          =   285
         Left            =   1920
         TabIndex        =   2
         Top             =   720
         Width           =   2895
      End
      Begin VB.TextBox txtDate 
         Appearance      =   0  'Flat
         Height          =   285
         Left            =   6480
         TabIndex        =   1
         Top             =   360
         Width           =   1695
      End
      Begin VB.TextBox txtAcNo 
         Appearance      =   0  'Flat
         Height          =   285
         Left            =   1920
         TabIndex        =   0
         Top             =   360
         Width           =   1695
      End
      Begin VB.Label Label 
         Caption         =   "Pin Code"
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
         Index           =   6
         Left            =   5400
         TabIndex        =   30
         Top             =   2040
         Width           =   735
      End
      Begin VB.Label Label 
         Caption         =   "City"
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
         Index           =   5
         Left            =   600
         TabIndex        =   29
         Top             =   2040
         Width           =   735
      End
      Begin VB.Label Label 
         Caption         =   "Address"
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
         Index           =   4
         Left            =   600
         TabIndex        =   28
         Top             =   1080
         Width           =   1335
      End
      Begin VB.Label Label 
         Caption         =   "Name"
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
         Index           =   2
         Left            =   600
         TabIndex        =   25
         Top             =   720
         Width           =   1335
      End
      Begin VB.Label Label 
         Caption         =   "Date"
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
         Index           =   1
         Left            =   5400
         TabIndex        =   24
         Top             =   360
         Width           =   735
      End
      Begin VB.Label Label 
         Caption         =   "Account No."
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
         Index           =   0
         Left            =   600
         TabIndex        =   23
         Top             =   360
         Width           =   1335
      End
   End
   Begin VB.Label Label1 
      Caption         =   "New Account"
      BeginProperty Font 
         Name            =   "Book Antiqua"
         Size            =   20.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   -1  'True
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   3480
      TabIndex        =   19
      Top             =   0
      Width           =   2535
   End
End
Attribute VB_Name = "frmNewAccount"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
'*************************************************************************************'
'
'Coded By :- Deepak Shakya
'Date :- 18-08-2007, 2240 Hrs
'
'*************************************************************************************'

Option Explicit
Option Base 1

Dim SavingAcNo As Integer
Dim CurrentAcNo As Integer

Private Sub Form_Load()
    Dim i As Integer
    Dim City(5) As String
    Dim Pin(5) As String
    City(1) = "New Delhi"
    Pin(1) = "10"
    
    City(2) = "Pune"
    Pin(2) = "20"
    
    City(3) = "Bangalore"
    Pin(3) = "30"
    
    City(4) = "Lucknow"
    Pin(4) = "40"
    
    City(5) = "Agra"
    Pin(5) = "50"
      
    For i = LBound(City) To UBound(City)
        cmbCity.AddItem (City(i))
        cmbCity.ItemData(cmbCity.NewIndex) = Pin(i)
    Next i
    
    SavingAcNo = 1
    CurrentAcNo = 1
    
    'Set the Initial Controls
    FrameAcType.Enabled = False
    optSavings.Enabled = False
    optCurrent.Enabled = False
    
    FramePersonal.Enabled = False
    txtAcNo.Enabled = False
    txtDate.Enabled = False
    txtName.Enabled = False
    FrameGender.Enabled = False
    optMale.Enabled = False
    optFemale.Enabled = False
    txtAddress.Enabled = False
    cmbCity.Enabled = False
    txtPinCode.Enabled = False
    
    FrameNominee.Enabled = False
    txtNominee1_Name.Enabled = False
    txtNominee1_Age.Enabled = False
    txtNominee1_Address.Enabled = False
    chkNominee2_Enable.Value = 0
    chkNominee2_Enable.Enabled = False
    Call chkNominee2_Enable_Click
    
    
    FrameAmt.Enabled = False
    txtAmount.Enabled = False
    
    For i = Label.LBound To Label.UBound
        Label(i).Enabled = False
    Next i
    
    cmdNewAccount.Enabled = True
    cmdSubmit.Enabled = False
    cmdClear.Enabled = False
    cmdExit.Enabled = True
End Sub

Private Sub cmdNewAccount_Click()
    Dim i As Integer
    
    'Set the Initial Controls
    FrameAcType.Enabled = True
    optSavings.Enabled = True
    optCurrent.Enabled = True
    
    FramePersonal.Enabled = True
    txtAcNo.BackColor = &H80000016
    txtDate.BackColor = &H80000016
    txtName.Enabled = True
    FrameGender.Enabled = True
    optMale.Enabled = True
    optFemale.Enabled = True
    txtAddress.Enabled = True
    cmbCity.Enabled = True
    txtPinCode.BackColor = &H80000016
    
    FrameNominee.Enabled = True
    txtNominee1_Name.Enabled = True
    txtNominee1_Age.Enabled = True
    txtNominee1_Address.Enabled = True
    chkNominee2_Enable.Value = 0
    chkNominee2_Enable.Enabled = True
    
    FrameAmt.Enabled = True
    txtAmount.Enabled = True
    
    For i = Label.LBound To Label.UBound
        Label(i).Enabled = True
    Next i
    
    Call chkNominee2_Enable_Click
    
    cmdNewAccount.Enabled = False
    cmdSubmit.Enabled = True
    cmdClear.Enabled = True
    cmdExit.Enabled = False
    
    optSavings.SetFocus
    txtDate.Text = Format(Date, "DD-MM-YYYY")
    cmbCity.ListIndex = 0
End Sub

Private Sub cmdSubmit_Click()
    Dim ErrorStr As String
    Dim IsErr As Boolean
       
    ErrorStr = "Following errors were found while processing data you provided."
    IsErr = False
    
    If (optSavings.Value = False) And (optCurrent.Value = False) Then
        ErrorStr = ErrorStr & vbCr & " --> Please choose an Account Type"
        IsErr = True
    End If
    
    If txtName.Text = "" Then
        ErrorStr = ErrorStr & vbCr & " --> Please enter your Name"
        IsErr = True
    End If
    If (optMale.Value = False) And (optFemale.Value = False) Then
        ErrorStr = ErrorStr & vbCr & " --> Please choose Gender"
        IsErr = True
    End If
    If txtAddress.Text = "" Then
        ErrorStr = ErrorStr & vbCr & " --> Please enter your Address"
        IsErr = True
    End If
    If txtNominee1_Name.Text = "" Then
        ErrorStr = ErrorStr & vbCr & " --> Please enter Nominee 1 Name"
        IsErr = True
    End If
    If txtNominee1_Age.Text = "" Then
        ErrorStr = ErrorStr & vbCr & " --> Please enter Nominee 1 Age"
        IsErr = True
    End If
    If txtNominee1_Address.Text = "" Then
        ErrorStr = ErrorStr & vbCr & " --> Please enter Nominee 1 Address"
        IsErr = True
    End If
    If chkNominee2_Enable.Value = vbChecked Then
        If txtNominee2_Name.Text = "" Then
            ErrorStr = ErrorStr & vbCr & " --> Please enter Nominee 2 Name"
            IsErr = True
        End If
        If txtNominee2_Age.Text = "" Then
            ErrorStr = ErrorStr & vbCr & " --> Please enter Nominee 2 Age"
            IsErr = True
        End If
        If txtNominee2_Address.Text = "" Then
            ErrorStr = ErrorStr & vbCr & " --> Please enter Nominee 2 Address"
            IsErr = True
        End If
    End If
    If txtAmount.Text = "" Then
        ErrorStr = ErrorStr & vbCr & " --> Please enter Deposit Amount"
        IsErr = True
    Else
        If optSavings.Value = True Then
            If Val(txtAmount.Text) < 1000 Or Val(txtAmount.Text) > 25000 Then
                ErrorStr = ErrorStr & vbCr & "--> Invalid Deposit Amount for Savings Account"
                IsErr = True
            End If
        Else
            If Val(txtAmount.Text) < 5000 Or Val(txtAmount.Text) > 100000 Then
                ErrorStr = ErrorStr & vbCr & "--> Invalid Deposit Amount for Current Account"
                IsErr = True
            End If
    End If
    End If
    
    If IsErr Then
        MsgBox ErrorStr, , "Processing Error"
        optSavings.SetFocus
    Else
        Dim OutPutStr As String
        
        OutPutStr = "Your data has been verfied. Is this Data provided Correct ???"
        If optSavings.Value = True Then
            OutPutStr = OutPutStr & vbCr & "Account Type ==> Savings"
        Else
            OutPutStr = OutPutStr & vbCr & "Account Type ==> Current"
        End If
        OutPutStr = OutPutStr & vbCr & "Account No. ==> " & txtAcNo.Text
        OutPutStr = OutPutStr & vbCr & "Name ==> " & txtName.Text
        If optMale.Value = True Then
            OutPutStr = OutPutStr & vbCr & "Gender ==> Male"
        Else
            OutPutStr = OutPutStr & vbCr & "Gender ==> FeMale"
        End If
        OutPutStr = OutPutStr & vbCr & "Address ==> " & txtAddress.Text
        OutPutStr = OutPutStr & vbCr & "City ==> " & cmbCity.Text
        OutPutStr = OutPutStr & vbCr & "PinCode ==> " & txtPinCode.Text
        OutPutStr = OutPutStr & vbCr & "Nominee 1 Name ==> " & txtNominee1_Name.Text
        OutPutStr = OutPutStr & vbCr & "Nominee 1 Age ==> " & txtNominee1_Age.Text
        OutPutStr = OutPutStr & vbCr & "Nominee 1 Address ==> " & txtNominee1_Address.Text
        If chkNominee2_Enable.Value = Checked Then
            OutPutStr = OutPutStr & vbCr & "Nominee 2 Name ==> " & txtNominee2_Name.Text
            OutPutStr = OutPutStr & vbCr & "Nominee 2 Age ==> " & txtNominee2_Age.Text
            OutPutStr = OutPutStr & vbCr & "Nominee 2 Address ==> " & txtNominee2_Address.Text
        End If
        OutPutStr = OutPutStr & vbCr & "Amount Deposited ==> " & txtAmount.Text
        
        If MsgBox(OutPutStr, vbYesNo + vbInformation) = vbYes Then
            If optSavings.Value = True Then
                SavingAcNo = SavingAcNo + 1
            Else
                CurrentAcNo = CurrentAcNo + 1
            End If
        End If
    End If
End Sub

Private Sub cmdClear_Click()
    If MsgBox("Do you want to Discard the Changes ???", vbYesNo + vbExclamation) = vbYes Then
        Dim i As Integer
        
        'Set the Initial Controls
        FrameAcType.Enabled = False
        optSavings.Enabled = False
        optSavings.Value = False
        optCurrent.Enabled = False
        optCurrent.Value = False
        
        FramePersonal.Enabled = False
        txtAcNo.BackColor = vbWhite
        txtAcNo.Text = ""
        txtDate.BackColor = vbWhite
        txtDate.Text = ""
        txtName.Enabled = False
        txtName.Text = ""
        FrameGender.Enabled = False
        optMale.Enabled = False
        optMale.Value = False
        optFemale.Enabled = False
        optFemale.Value = False
        txtAddress.Enabled = False
        txtAddress.Text = ""
        cmbCity.Enabled = False
        cmbCity.Text = "Select City"
        txtPinCode.BackColor = vbWhite
        txtPinCode.Text = ""
        
        FrameNominee.Enabled = False
        txtNominee1_Name.Enabled = False
        txtNominee1_Name.Text = ""
        txtNominee1_Age.Enabled = False
        txtNominee1_Age.Text = ""
        txtNominee1_Address.Enabled = False
        txtNominee1_Address.Text = ""
        chkNominee2_Enable.Enabled = False
        txtNominee2_Name.Text = ""
        txtNominee2_Age.Text = ""
        txtNominee2_Address.Text = ""
        chkNominee2_Enable.Value = 0
        
        FrameAmt.Enabled = False
        txtAmount.Enabled = False
        txtAmount.Text = ""
        
        For i = Label.LBound To Label.UBound
            Label(i).Enabled = False
        Next i
        
        'Call chkNominee2_Enable_Click  'This call is not required because if the
                                        'checkbox is already checked, then setting
                                        'its value to 0 will automatically trigger
                                        'the click event. If it is disabled, then
                                        'we dont have to disable other controls
                                        'because they will be already disabled.
        
        cmdNewAccount.Enabled = True
        cmdSubmit.Enabled = False
        cmdClear.Enabled = False
        cmdExit.Enabled = True
    End If
End Sub

Private Sub cmdExit_Click()
    End
End Sub

Private Sub chkNominee2_Enable_Click()
    If chkNominee2_Enable.Value = 1 Then
        'Enable the Nominee 2 Details
        txtNominee2_Name.Enabled = True
        txtNominee2_Age.Enabled = True
        txtNominee2_Address.Enabled = True
        Label(10).Enabled = True
        Label(11).Enabled = True
        Label(12).Enabled = True
    Else
        If Trim(txtNominee2_Name.Text) <> "" Or Trim(txtNominee2_Age.Text) <> "" Or Trim(txtNominee2_Address) <> "" Then
            Dim str As String
            str = "You have entered a value for Nominee 2. "
            str = str & "Disabling the CheckBox will clear this data."
            str = str & vbCr & "Do you wish to clear this data ???"
            If MsgBox(str, vbYesNo + vbExclamation) = vbYes Then
                txtNominee2_Name.Text = ""
                txtNominee2_Age.Text = ""
                txtNominee2_Address.Text = ""
                
                'Disable the Nominee 2 Details
                txtNominee2_Name.Enabled = False
                txtNominee2_Age.Enabled = False
                txtNominee2_Address.Enabled = False
                Label(10).Enabled = False
                Label(11).Enabled = False
                Label(12).Enabled = False
            Else
                chkNominee2_Enable.Value = 1
            End If
        Else
            'Disable the Nominee 2 Details
            txtNominee2_Name.Enabled = False
            txtNominee2_Age.Enabled = False
            txtNominee2_Address.Enabled = False
            Label(10).Enabled = False
            Label(11).Enabled = False
            Label(12).Enabled = False
        End If
    End If
End Sub

Private Sub optCurrent_Click()
    txtAcNo.Text = "C" & Format(CurrentAcNo, "000")
End Sub

Private Sub optSavings_Click()
    txtAcNo.Text = "S" & Format(SavingAcNo, "000")
End Sub

Private Sub txtName_KeyPress(KeyAscii As Integer)
    If Not ((KeyAscii >= 65 And KeyAscii <= 90) Or (KeyAscii >= 97 And KeyAscii <= 122) Or KeyAscii = 32 Or KeyAscii = 8) Then
        KeyAscii = 0
    End If
End Sub

Private Sub txtName_Validate(Cancel As Boolean)
    If Trim(txtName.Text) = "" Then
        MsgBox "Name field can't be Empty", vbExclamation, "Invalid Data"
        Cancel = True
    End If
End Sub

Private Sub txtAddress_Validate(Cancel As Boolean)
    If Trim(txtAddress.Text) = "" Then
        MsgBox "Address field can't be Empty", vbExclamation, "Invalid Data"
        Cancel = True
    End If
End Sub

Private Sub cmbCity_Click()
    txtPinCode.Text = cmbCity.ItemData(cmbCity.ListIndex)
End Sub

Private Sub txtNominee1_Name_KeyPress(KeyAscii As Integer)
    If Not ((KeyAscii >= 65 And KeyAscii <= 90) Or (KeyAscii >= 97 And KeyAscii <= 122) Or KeyAscii = 32 Or KeyAscii = 8) Then
        KeyAscii = 0
    End If
End Sub

Private Sub txtNominee1_Name_Validate(Cancel As Boolean)
    If Trim(txtNominee1_Name.Text) = "" Then
        MsgBox "Nominee 1 Name field can't be Empty", vbExclamation, "Invalid Data"
        Cancel = True
    End If
End Sub

Private Sub txtNominee1_Age_KeyPress(KeyAscii As Integer)
    If Not ((KeyAscii >= 48 And KeyAscii <= 57) Or KeyAscii = 8) Then
        KeyAscii = 0
    End If
End Sub

Private Sub txtNominee1_Age_Validate(Cancel As Boolean)
    
    If txtNominee1_Age.Text = "" Then   'Check for Emptyness
        MsgBox "Nominee 1 Age field can't be Empty", vbExclamation, "Invalid Data"
        Cancel = True
    ElseIf Val(txtNominee1_Age.Text) < 18 Or Val(txtNominee1_Age.Text) > 100 Then   'Check for Correct Range
        MsgBox "Nominee 1 Age is not valid.(Min-18 & Max-100)", vbExclamation, "Invalid Data"
        Cancel = True
    End If
End Sub

Private Sub txtNominee1_Address_Validate(Cancel As Boolean)
    If Trim(txtNominee1_Address.Text) = "" Then
        MsgBox "Nominee 1 Address field can't be Empty", vbExclamation, "Invalid Data"
        Cancel = True
    End If
End Sub

Private Sub txtNominee2_Name_KeyPress(KeyAscii As Integer)
    If Not ((KeyAscii >= 65 And KeyAscii <= 90) Or (KeyAscii >= 97 And KeyAscii <= 122) Or KeyAscii = 32 Or KeyAscii = 8) Then
        KeyAscii = 0
    End If
End Sub

Private Sub txtNominee2_Name_Validate(Cancel As Boolean)
    If Trim(txtNominee2_Name.Text) = "" Then
        MsgBox "Nominee 2 Name field can't be Empty", vbExclamation, "Invalid Data"
        Cancel = True
    End If
End Sub

Private Sub txtNominee2_Age_KeyPress(KeyAscii As Integer)
    If Not ((KeyAscii >= 48 And KeyAscii <= 57) Or KeyAscii = 8) Then
        KeyAscii = 0
    End If
End Sub

Private Sub txtNominee2_Age_Validate(Cancel As Boolean)
    
    If txtNominee2_Age.Text = "" Then   'Check for Emptyness
        MsgBox "Nominee 2 Age field can't be Empty", vbExclamation, "Invalid Data"
        Cancel = True
    ElseIf Val(txtNominee2_Age.Text) < 18 Or Val(txtNominee2_Age.Text) > 100 Then   'Check for Correct Range
        MsgBox "Nominee 2 Age is not valid.(Min-18 & Max-100)", vbExclamation, "Invalid Data"
        Cancel = True
    End If
End Sub

Private Sub txtNominee2_Address_Validate(Cancel As Boolean)
    If Trim(txtNominee2_Address.Text) = "" Then
        MsgBox "Nominee 2 Address field can't be Empty", vbExclamation, "Invalid Data"
        Cancel = True
    End If
End Sub

Private Sub txtAmount_GotFocus()
    cmdSubmit.CausesValidation = True
    cmdClear.CausesValidation = True
End Sub

Private Sub txtAmount_KeyPress(KeyAscii As Integer)
    If Not ((KeyAscii >= 48 And KeyAscii <= 57) Or KeyAscii = 8 Or KeyAscii = 46) Then
        KeyAscii = 0
    End If
End Sub

Private Sub txtAmount_Validate(Cancel As Boolean)
    If optSavings.Value = True Then
        If Val(txtAmount.Text) < 1000 Or Val(txtAmount.Text) > 25000 Then
            MsgBox "Invalid Deposit Amount for Savings Account", vbExclamation, "Invalid Data"
            Cancel = True
        End If
    Else
        If Val(txtAmount.Text) < 5000 Or Val(txtAmount.Text) > 100000 Then
            MsgBox "Invalid Deposit Amount for Current Account", vbExclamation, "Invalid Data"
            Cancel = True
        Else
            cmdSubmit.CausesValidation = False
            cmdClear.CausesValidation = False
        End If
    End If
End Sub

