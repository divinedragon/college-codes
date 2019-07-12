VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "This the First Form of Visual Basic - Enter Your Personal Details"
   ClientHeight    =   4065
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   8640
   LinkTopic       =   "Form1"
   ScaleHeight     =   4065
   ScaleWidth      =   8640
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text3 
      Height          =   285
      Left            =   3960
      TabIndex        =   4
      Top             =   960
      Width           =   2000
   End
   Begin VB.TextBox Text2 
      Height          =   765
      Left            =   3960
      MultiLine       =   -1  'True
      ScrollBars      =   2  'Vertical
      TabIndex        =   1
      Top             =   1440
      Width           =   2000
   End
   Begin VB.TextBox Text1 
      Height          =   285
      Left            =   3960
      TabIndex        =   0
      Text            =   "Deepak Shakya"
      Top             =   480
      Width           =   2000
   End
   Begin VB.Label Label3 
      Caption         =   "PRN No."
      Height          =   285
      Left            =   2520
      TabIndex        =   5
      Top             =   960
      Width           =   1335
   End
   Begin VB.Label Label2 
      Caption         =   "Address"
      Height          =   285
      Left            =   2520
      TabIndex        =   3
      Top             =   1440
      Width           =   1335
   End
   Begin VB.Label Label1 
      Caption         =   "Your Name"
      Height          =   285
      Left            =   2520
      TabIndex        =   2
      Top             =   480
      Width           =   1335
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit
