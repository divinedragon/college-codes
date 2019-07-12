VERSION 5.00
Begin VB.Form frmAdvancedArrays 
   Caption         =   "Advanced Array Concepts"
   ClientHeight    =   3060
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   6225
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
   ScaleHeight     =   3060
   ScaleWidth      =   6225
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command2 
      Caption         =   "Test Dynamic Array"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   375
      Left            =   3480
      TabIndex        =   1
      Top             =   1200
      Width           =   2295
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Test Static Array"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   375
      Left            =   360
      TabIndex        =   0
      Top             =   1200
      Width           =   2295
   End
End
Attribute VB_Name = "frmAdvancedArrays"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Base 1

Dim Arr1(10) As Integer
Dim Nos() As Integer
Dim Arr2(3 To 10) As Integer


Dim i, s As Integer


Private Sub Command1_Click()
    MsgBox UBound(Arr1)
    MsgBox LBound(Arr2)
    
    For i = LBound(Arr1) To UBound(Arr1)
        Arr1(i) = Val(InputBox("Enter a Value"))
    Next i
    
    For i = LBound(Arr1) To UBound(Arr1)
        MsgBox "Array(" & i & ")" & "==>" & Arr1(i)
    Next i
End Sub

Private Sub Command2_Click()
    ReDim Nos(10)
    
    For i = LBound(Nos) To UBound(Nos)
        Nos(i) = Val(InputBox("Enter a Value"))
    Next i
End Sub
