VERSION 5.00
Begin VB.Form frmAccount 
   BackColor       =   &H80000016&
   BorderStyle     =   1  'Fixed Single
   Caption         =   "NEW ACCOUNT WINDOW"
   ClientHeight    =   9330
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   8580
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
   ScaleHeight     =   9330
   ScaleWidth      =   8580
   StartUpPosition =   3  'Windows Default
   Begin VB.Frame FrameAmount 
      Height          =   615
      Left            =   120
      TabIndex        =   40
      Top             =   7680
      Width           =   8295
      Begin VB.TextBox txtAmount 
         Appearance      =   0  'Flat
         Height          =   285
         Left            =   3960
         TabIndex        =   15
         Top             =   240
         Width           =   3015
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
         Left            =   1680
         TabIndex        =   41
         Top             =   240
         Width           =   2055
      End
   End
   Begin VB.Frame FrameNomineeDetails 
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
      Height          =   3375
      Left            =   120
      TabIndex        =   33
      Top             =   4320
      Width           =   8295
      Begin VB.CheckBox chkNominee2_Select 
         Height          =   255
         Left            =   120
         TabIndex        =   11
         Top             =   1920
         Width           =   255
      End
      Begin VB.TextBox txtNominee2_Address 
         Appearance      =   0  'Flat
         Height          =   765
         Left            =   2040
         MultiLine       =   -1  'True
         TabIndex        =   14
         Top             =   2400
         Width           =   3015
      End
      Begin VB.TextBox txtNominee2_Name 
         Appearance      =   0  'Flat
         Height          =   285
         Left            =   2040
         TabIndex        =   12
         Top             =   1920
         Width           =   3015
      End
      Begin VB.TextBox txtNominee2_Age 
         Appearance      =   0  'Flat
         Height          =   285
         Left            =   6720
         TabIndex        =   13
         Top             =   1920
         Width           =   1215
      End
      Begin VB.TextBox txtNominee1_Address 
         Appearance      =   0  'Flat
         Height          =   765
         Left            =   2040
         MultiLine       =   -1  'True
         TabIndex        =   10
         Top             =   960
         Width           =   3015
      End
      Begin VB.TextBox txtNominee1_Name 
         Appearance      =   0  'Flat
         Height          =   285
         Left            =   2040
         TabIndex        =   8
         Top             =   480
         Width           =   3015
      End
      Begin VB.TextBox txtNominee1_Age 
         Appearance      =   0  'Flat
         Height          =   285
         Left            =   6720
         TabIndex        =   9
         Top             =   480
         Width           =   1215
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
         Left            =   480
         TabIndex        =   39
         Top             =   2400
         Width           =   1455
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
         Left            =   480
         TabIndex        =   38
         Top             =   1800
         Width           =   1455
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
         Left            =   5640
         TabIndex        =   37
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
         Index           =   9
         Left            =   480
         TabIndex        =   36
         Top             =   960
         Width           =   1455
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
         Left            =   480
         TabIndex        =   35
         Top             =   360
         Width           =   1455
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
         Left            =   5640
         TabIndex        =   34
         Top             =   480
         Width           =   735
      End
   End
   Begin VB.Frame FramePDetails 
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
      Height          =   2895
      Left            =   120
      TabIndex        =   22
      Top             =   1320
      Width           =   8295
      Begin VB.Frame FrameGender 
         BorderStyle     =   0  'None
         Height          =   615
         Left            =   5520
         TabIndex        =   31
         Top             =   840
         Width           =   2295
         Begin VB.OptionButton optMale 
            Caption         =   "Male"
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
            Left            =   960
            TabIndex        =   3
            Top             =   0
            Width           =   855
         End
         Begin VB.OptionButton optFemale 
            Caption         =   "Female"
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
            Left            =   960
            TabIndex        =   4
            Top             =   240
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
            Left            =   0
            TabIndex        =   32
            Top             =   0
            Width           =   855
         End
      End
      Begin VB.ComboBox cmbCity 
         Height          =   360
         ItemData        =   "frmAccount.frx":0000
         Left            =   1920
         List            =   "frmAccount.frx":0013
         TabIndex        =   6
         Text            =   "Select City"
         Top             =   2400
         Width           =   1935
      End
      Begin VB.TextBox txtPinCode 
         Appearance      =   0  'Flat
         BackColor       =   &H00FFFFFF&
         Height          =   285
         Left            =   6600
         TabIndex        =   7
         Top             =   2400
         Width           =   1215
      End
      Begin VB.TextBox txtAddress 
         Appearance      =   0  'Flat
         Height          =   885
         Left            =   1920
         MultiLine       =   -1  'True
         TabIndex        =   5
         Top             =   1320
         Width           =   3015
      End
      Begin VB.TextBox txtName 
         Appearance      =   0  'Flat
         Height          =   285
         Left            =   1920
         TabIndex        =   2
         Top             =   840
         Width           =   3015
      End
      Begin VB.TextBox txtDate 
         Appearance      =   0  'Flat
         BackColor       =   &H00FFFFFF&
         Height          =   285
         Left            =   6480
         TabIndex        =   26
         Top             =   360
         Width           =   1215
      End
      Begin VB.TextBox txtAcNo 
         Appearance      =   0  'Flat
         BackColor       =   &H00FFFFFF&
         Height          =   285
         Left            =   1920
         TabIndex        =   24
         Top             =   360
         Width           =   1215
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
         Left            =   360
         TabIndex        =   30
         Top             =   2400
         Width           =   735
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
         Left            =   5520
         TabIndex        =   29
         Top             =   2400
         Width           =   975
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
         Left            =   360
         TabIndex        =   28
         Top             =   1320
         Width           =   1455
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
         Left            =   360
         TabIndex        =   27
         Top             =   840
         Width           =   1455
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
         Left            =   5520
         TabIndex        =   25
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
         Left            =   360
         TabIndex        =   23
         Top             =   360
         Width           =   1455
      End
   End
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
      Left            =   5843
      TabIndex        =   19
      Top             =   8640
      Width           =   1575
   End
   Begin VB.CommandButton cmdClear 
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
      Height          =   375
      Left            =   4283
      TabIndex        =   18
      Top             =   8640
      Width           =   1575
   End
   Begin VB.CommandButton cmdSubmit 
      Caption         =   "&Submit"
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
      Left            =   2723
      TabIndex        =   17
      Top             =   8640
      Width           =   1575
   End
   Begin VB.CommandButton cmdNewAc 
      Caption         =   "&New Account"
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
      Left            =   1163
      TabIndex        =   16
      Top             =   8640
      Width           =   1575
   End
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
      TabIndex        =   21
      Top             =   480
      Width           =   8295
      Begin VB.OptionButton optSaving 
         Alignment       =   1  'Right Justify
         Caption         =   "Savings"
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
         Left            =   1320
         TabIndex        =   0
         Top             =   360
         Width           =   1215
      End
      Begin VB.OptionButton optCurrent 
         Alignment       =   1  'Right Justify
         Caption         =   "Current"
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
         Left            =   5520
         TabIndex        =   1
         Top             =   360
         Width           =   1215
      End
   End
   Begin VB.Label lblHeader 
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
      Height          =   375
      Left            =   3000
      TabIndex        =   20
      Top             =   0
      Width           =   2535
   End
End
Attribute VB_Name = "frmAccount"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit
Dim SavingsAcNo As Integer
Dim CurrentAcNo As Integer

Private Sub Form_Load()
    Dim i As Integer
    
    SavingsAcNo = 1 'Initialize the Savings Ac No
    CurrentAcNo = 1 'Initialize the Current Ac No
    
    'Lets first Disable All the Controls & Enable Only Required Controls
    'Disable the The Selection for Savings Type
    FrameAcType.Enabled = False
    optSaving.Enabled = False
    optCurrent.Enabled = False
    
    'Disable the The Selection for Personal Details
    FramePDetails.Enabled = False
    txtAcNo.Enabled = False
    txtDate.Enabled = False
    txtName.Enabled = False
    optMale.Enabled = False
    optFemale.Enabled = False
    txtAddress.Enabled = False
    cmbCity.Enabled = False
    txtPinCode.Enabled = False
    
    'Disable the Selection for Nominee Details
    FrameNomineeDetails.Enabled = False
    txtNominee1_Name.Enabled = False
    txtNominee1_Age.Enabled = False
    txtNominee1_Address.Enabled = False
    chkNominee2_Select.Enabled = False
    
    'Disable the Amount Section
    txtAmount.Enabled = False

    'Set the Enability and Disability of  the Relevant Command Buttons
    cmdNewAc.Enabled = True     'Enable the New Account Button
    cmdSubmit.Enabled = False   'Disable the Submit Button
    cmdClear.Enabled = False    'Disable the Clear Button
    cmdExit.Enabled = True      'Enable the Exit Button
    
    'Now Let us Disable the Label Array
    For i = 0 To 13
        Label(i).Enabled = False
    Next i
    
    'I am calling this function here for a specific reason.
    'Beacause in earlier, array (LABEL) is setting all the Labels of the array.
    'So to set the Nominee 2 Controls, we call the following Sub to set them as desired.
    Call chkNominee2_Select_Click   'This will set the Nominee 2 Details
End Sub

Private Sub cmdNewAc_Click()
    Dim i As Integer
    
    'Lets first Disable All the Controls & Enable Only Required Controls
    'Enable the The Selection for Savings Type
    FrameAcType.Enabled = True
    optSaving.Enabled = True
    optCurrent.Enabled = True
    
    'Disable the The Selection for Personal Details
    FramePDetails.Enabled = True
    txtAcNo.BackColor = &HE0E0E0
    txtDate.BackColor = &HE0E0E0
    txtName.Enabled = True
    optMale.Enabled = True
    optFemale.Enabled = True
    txtAddress.Enabled = True
    cmbCity.Enabled = True
    txtPinCode.BackColor = &HE0E0E0
    
    'Disable the Selection for Nominee Details
    FrameNomineeDetails.Enabled = True
    txtNominee1_Name.Enabled = True
    txtNominee1_Age.Enabled = True
    txtNominee1_Address.Enabled = True
    chkNominee2_Select.Enabled = True
    
    'Disable the Amount Section
    txtAmount.Enabled = True

    'Set the Enability and Disability of  the Relevant Command Buttons
    cmdNewAc.Enabled = False    'Disable the New Account Button
    cmdSubmit.Enabled = True    'Enable the Submit Button
    cmdClear.Enabled = True     'Enable the Clear Button
    cmdExit.Enabled = False     'Disable the Exit Button
    
    'Now Let us Disable the Label Array
    For i = 0 To 13
        Label(i).Enabled = True
    Next i
    
    'I am calling this function here for a specific reason.
    'Beacause in earlier, array (LABEL) is setting all the Labels of the array.
    'So to set the Nominee 2 Controls, we call the following Sub to set them as desired.
    Call chkNominee2_Select_Click   'This will set the Nominee 2 Details
        
    optSaving.SetFocus
End Sub

Private Sub chkNominee2_Select_Click()
    If chkNominee2_Select.Value = 1 Then
        Label(10).Enabled = True
        Label(11).Enabled = True
        Label(12).Enabled = True
        txtNominee2_Name.Enabled = True
        txtNominee2_Age.Enabled = True
        txtNominee2_Address.Enabled = True
    Else
        Label(10).Enabled = False
        Label(11).Enabled = False
        Label(12).Enabled = False
        txtNominee2_Name.Enabled = False
        txtNominee2_Age.Enabled = False
        txtNominee2_Address.Enabled = False
    End If
End Sub

Private Sub cmdClear_Click()
    If MsgBox("Are you sure, you want to Clear the input Data", vbYesNo, "Are You Sure") = vbYes Then
        'Clear the Contents
        Dim i As Integer
    
        'Lets first Disable All the Controls & Enable Only Required Controls
        'Disable the The Selection for Savings Type
        FrameAcType.Enabled = False
        optSaving.Enabled = False
        optSaving.Value = False     'Reset the Value
        optCurrent.Enabled = False
        optCurrent.Value = False    'Reset the Value
                
        'Disable the The Selection for Personal Details
        FramePDetails.Enabled = False
        txtAcNo.Enabled = False
        txtAcNo.BackColor = vbWhite
        txtDate.Enabled = False
        txtDate.BackColor = vbWhite
        txtName.Enabled = False
        optMale.Enabled = False
        optFemale.Enabled = False
        txtAddress.Enabled = False
        cmbCity.Enabled = False
        txtPinCode.Enabled = False
        txtPinCode.BackColor = vbWhite
        txtAcNo.Text = ""
        txtDate.Text = ""
        txtName.Text = ""
        optMale.Value = False
        optFemale.Value = False
        txtAddress.Text = ""
        cmbCity.Text = "Select City"
        txtPinCode.Text = ""
        
        'Disable the Selection for Nominee Details
        FrameNomineeDetails.Enabled = False
        txtNominee1_Name.Enabled = False
        txtNominee1_Age.Enabled = False
        txtNominee1_Address.Enabled = False
        chkNominee2_Select.Enabled = False
        txtNominee1_Name.Text = ""
        txtNominee1_Age.Text = ""
        txtNominee1_Address.Text = ""
        txtNominee2_Name.Text = ""
        txtNominee2_Age.Text = ""
        txtNominee2_Address.Text = ""
        chkNominee2_Select.Value = 0
        
        txtAmount.Enabled = False   'Disable the Amount Section
        txtAmount.Text = ""
            
        'Set the Enability and Disability of  the Relevant Command Buttons
        cmdNewAc.Enabled = True     'Enable the New Account Button
        cmdSubmit.Enabled = False   'Disable the Submit Button
        cmdClear.Enabled = False    'Disable the Clear Button
        cmdExit.Enabled = True      'Enable the Exit Button
        
        'Now Let us Disable the Label Array
        For i = 0 To 13
            Label(i).Enabled = False
        Next i
        
        'I am calling this function here for a specific reason.
        'Beacause in earlier, array (LABEL) is setting all the Labels of the array.
        'So to set the Nominee 2 Controls, we call the following Sub to set them as desired.
        Call chkNominee2_Select_Click   'This will set the Nominee 2 Details
    End If
    
End Sub

Private Sub cmdExit_Click()
    End 'Terminate the Application
End Sub

Private Sub optCurrent_Click()
        txtAcNo.Text = "C" & Format(CurrentAcNo, "000")
End Sub

Private Sub optSaving_Click()
    txtAcNo.Text = "S" & Format(SavingsAcNo, "000")
End Sub

Private Sub txtName_KeyPress(KeyAscii As Integer)
    If (KeyAscii < 65 Or KeyAscii > 90) And (KeyAscii) Then
        
    End If
End Sub
