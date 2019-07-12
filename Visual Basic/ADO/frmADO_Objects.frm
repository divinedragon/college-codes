VERSION 5.00
Begin VB.Form frmADO_Objects 
   BackColor       =   &H80000004&
   BorderStyle     =   1  'Fixed Single
   Caption         =   "ADO Objects"
   ClientHeight    =   5490
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   6285
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
   ScaleHeight     =   5490
   ScaleWidth      =   6285
   StartUpPosition =   2  'CenterScreen
   Begin VB.CommandButton cmdForwardOnly 
      Appearance      =   0  'Flat
      Caption         =   "&ForwardOnly RecordSet"
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
      Left            =   1440
      MaskColor       =   &H00000000&
      Picture         =   "frmADO_Objects.frx":0000
      TabIndex        =   4
      ToolTipText     =   "Connect to Microsoft Access Database"
      Top             =   3720
      Width           =   2775
   End
   Begin VB.CommandButton cmdStatic 
      Appearance      =   0  'Flat
      Caption         =   "&Static RecordSet"
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
      Left            =   1440
      MaskColor       =   &H00000000&
      Picture         =   "frmADO_Objects.frx":5242
      TabIndex        =   3
      ToolTipText     =   "Connect to Microsoft Access Database"
      Top             =   3360
      Width           =   2775
   End
   Begin VB.CommandButton cmdKeySet 
      Appearance      =   0  'Flat
      Caption         =   "&KeySet RecordSet"
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
      Left            =   1440
      MaskColor       =   &H00000000&
      Picture         =   "frmADO_Objects.frx":A484
      TabIndex        =   2
      ToolTipText     =   "Connect to Microsoft Access Database"
      Top             =   3000
      Width           =   2775
   End
   Begin VB.CommandButton cmdDynamic 
      Appearance      =   0  'Flat
      Caption         =   "&Dynamic RecordSet"
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
      Left            =   1440
      MaskColor       =   &H00000000&
      Picture         =   "frmADO_Objects.frx":F6C6
      TabIndex        =   1
      ToolTipText     =   "Connect to Microsoft Access Database"
      Top             =   2640
      Width           =   2775
   End
   Begin VB.CommandButton cmdConn_Access 
      Appearance      =   0  'Flat
      Caption         =   "Connect to &Access"
      BeginProperty Font 
         Name            =   "Verdana"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   615
      Left            =   480
      MaskColor       =   &H00000000&
      Picture         =   "frmADO_Objects.frx":14908
      TabIndex        =   0
      ToolTipText     =   "Connect to Microsoft Access Database"
      Top             =   840
      Width           =   5295
   End
End
Attribute VB_Name = "frmADO_Objects"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private cn As ADODB.Connection


Private Sub cmdDynamic_Click()
    Dim rs As ADODB.Recordset
    Set rs = New ADODB.Recordset
    
    rs.Open "SELECT * from Customers", cn, adOpenDynamic
    
    If rs.RecordCount = -1 Then
        MsgBox "Connection Corrupted. Aborting due to Safety reasons"
        rs.Close    'Closing the Recordset
        cn.Close    'Closing the Connection
        End
    End If
    
    rs.MoveFirst 'Because the recordset points to the last record, we have to first point
                 'to the first record
                 
    Do While (rs.EOF = False)
        MsgBox rs.Fields("CustomerID") & "  " & rs!CompanyName    ' ! is the bank operator
        rs.MoveNext     'Move to the next record
    Loop
End Sub

'Recordset is the result set of the SELECT query on the database
'Recordset Type
'   Dynamic - Read/Write (Updates are possible)
'               The recordset holds the pointer to the tables of the database. Dynamic
'               recordset will keep checking for the new data on the server by checking
'               the datatime stamp of the retrived data and that on the server. Because
'               the recordset has to refresh data automatically, the overhead for
'               dynamic recordset is more and hence the memory requirements are more.
'               Any changes made to the recordset using the sql queries gets automatically
'               updated on the database. No explicit connection and queries need to be
'               fired on the database. This recordset is mostly used in real time
'               applications where any lapse in time with the newer data can cause
'               potential problems with the system.



'   KeySet - Read/Write (Updates are possible)
'               This is the same as dynamic recordset. The difference is that is does
'               not refresh data after a paricular time. Thus, the performance of KeySet
'               is comparitively better than dynamic. The data is refreshed whenever
'               the connection is established.
'   Static - ReadOnly (Only view purposes, ex Reports)
'               This will get the results of a query in a recordset, which is only readonly
'               The data in the recordset can be accessed in both the directions, from
'               BOF to EOF or from EOF to BOF.
'               Ghost Record - EOF, and BOF
'               RecordCount property gives the records in the recordset. If the value
'               of the RecordCount property is -1, this means that the recordset is
'               corrupted. So we should re-establish the connection
'   ForwardOnly - ReadOnly (Only view purposes, ex Reports)
'               This allows only one direction access of data in the recordset.

Private Sub Form_Activate()
    Set cn = New ADODB.Connection

    cn.ConnectionString = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=H:\Visual Basic College\nwind.MDB;Persist Security Info=False"
    cn.CursorLocation = adUseClient     'Location of cursor where the data is to be consumed
    cn.Open
    
    If cn.State = adStateOpen Then
        MsgBox "Connection Established Successfully. Press OK to Continue..", vbOKOnly
    Else
        MsgBox "Can't Connect to the Database. Press OK to Abort", vbOKOnly
    End If
End Sub
