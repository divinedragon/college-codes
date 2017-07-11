#include <fstream.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iomanip.h>
#include <ctype.h>
#include <conio.h>

/*      Constants       */
#define MAX_LINES       20
#define CLRSCR  clrscr ( )

char Item_file_name[] = "ITEM_FILE";
const int       DELETE_MODIFY = 1, RECALL_MODIFY = 2, MODIFY_ALL = 3,
               ALL = 4, REORD_LVL = 5, DEFAULT = 6, LIST_SPECIFIC=7;

/*      Item class      */
class Item      {
private:
       char            Part_no[5];
       float           Price;
       char            Part_name[30];
       int                     Qty, Reorder_level, Qty_sold, Deleted;
public:
       /*      Default constructor     */
       Item ( )        {
               strcpy ( Part_no, "" );
               strcpy ( Part_name, "" );
               Price = 0;
               Qty_sold = Reorder_level = Qty = 0;
               Deleted = 0;
       }

       void Get_data ( )
       {
               char Ch;

               if ( ( Ch = cin.get ( ) ) != '\n' )
                       cin.putback ( Ch );

               cout << "Part name: ";  cin.getline ( Part_name, 30 );
               cout << "Price: ";              cin >> Price;
               cout << "Qty: ";                cin >> Qty;
               cout << "Reorder level: ";      cin >> Reorder_level;
       }

       int Is_valid_data ( )
       {
               if ( strlen ( Part_name ) == 0 || Price < 0.1 || Qty < 1 || Reorder_level < 1 ||
                       Reorder_level > Qty )
                       return 0;
               else
                       return 1;
       }

       void Show_data ( )
       {
               cout << setw ( 7 ) << Part_no
                        << setw ( 30 ) << Part_name
                        << setw ( 10 ) << Price
                        << setw ( 7 ) << Qty
                        << setw ( 12 ) << Reorder_level
                        << setw ( 10 ) << Qty_sold << '\n';
       }

       char* Get_part_no ( )
       {
               return Part_no;
       }

       int Get_qty ( )
       {
               return Qty;
       }

       void Sell ( int Quantity )
       {
               /*      Add to Qty_sold and remove from Qty available   */
               Qty_sold += Quantity;
               Qty -= Quantity;
       }

       void Set_delete ( int Delete_option )
       {
               /*      Record is deleted if data member Deleted has value 1    */
               Deleted = ( Delete_option == 1 ? 1 : 0 );
       }

       int Is_deleted ( )
       {
               return Deleted;
       }

       void Set_part_no ( char Pno[] )
       {
               strcpy ( Part_no, Pno );
       }

       float Get_price ( )
       {
               return Price;
       }

       int Get_reorder_level ( )
       {
               return Reorder_level;
       }
};

/*      Function prototypes     */
void            Add_bulk ( Item& x ) ;
char*           Get_next_item_id ( );
char            Display_main_menu ( );
void            Add_item ( fstream& Item_file );
void            Modify_item ( fstream& Item_file, int Modify_Type = MODIFY_ALL );
void            Add_sales ( fstream& Item_file );
void            Pack_item_file ( fstream& Item_file );
void            Report ( fstream& Item_file );
void            Wait ( );
void            Display_heading ( char Heading[] );
char            Display_report_heading ( );
void            Display_column_names ( );
void            List_records ( fstream& Item_file, int List_type = DEFAULT );

/*      Function definations    */
char* Get_next_item_id ( )
{
       ifstream File ( Item_file_name, ios::binary );

       if ( ! File )   {
               cout << "Unable to open file " << Item_file_name << '\n';
               getch ( );
               exit ( 1 );
       }

       Item x;
       char Last_part_no[5];

       Last_part_no[0] = '\0';

       while ( File.read ( ( char * ) &x, sizeof ( x ) ) )
               strcpy ( Last_part_no, x.Get_part_no ( ) );

       File.close ( );

       if ( Last_part_no[0] == '\0' )
               return "IAA01";
       else    {
               int Num = atoi ( Last_part_no + 3 );
               char Ch2 = Last_part_no[2];
               char Ch1 = Last_part_no[1];

               if ( Num == 99 )        {
                       Num = 1;

                       if ( Ch2 == 'Z' )       {
                               Ch2 = 'A';

                               if ( Ch1 == 'Z' )       {
                                       cout << "******** Sequence limit over **********\n";
                                       exit ( 1 );
                               }
                               Ch1++;
                       }
                       else
                               Ch2++;
               }
               else
                       Num++;

               static char Temp[5];

               sprintf ( Temp, "I%c%c%02d", Ch1, Ch2, Num );
               return Temp;
       }
}

void Wait ( )
{
       cin.clear ( );
       cin.get ( );
}

void Display_heading ( char Heading[] )
{
       CLRSCR;

       cout << "********************************************************************************\n";
       cout << setw ( ( 80 - strlen ( Heading ) ) / 2 )
                << ""
                << Heading << '\n';
       cout << "********************************************************************************\n";
       cout << '\n';
}

char Display_main_menu ( )
{
       Display_heading ( "S T O C K  K E E P I N G  S Y S T E M" );
       cout << "\t\t\t" << "1:  Add new item" << "\n\n"
                << "\t\t\t" << "2:  Modify item"  << "\n\n"
                << "\t\t\t" << "3:  Sell item"    << "\n\n"
                << "\t\t\t" << "4:  Delete item"  << "\n\n"
                << "\t\t\t" << "5:  Recall item"  << "\n\n"
                << "\t\t\t" << "6:  Pack item file" << "\n\n"
                << "\t\t\t" << "7:  Report"       << "\n\n"
                << "\t\t\t" << "8:  Exit"       << "\n\n" << '\n';
       cout << "\t\t\t\t" << "Option: ";

       char Option; cin >> Option;
       return Option;
}

/*      Adds a new record to item file, if it is valid  */
void Add_item ( fstream& Item_file )
{
       Item New_item;

       Display_heading ( "N E W  I T E M  E N T R Y  S C R E E N" );

       New_item.Get_data ( );

       if ( New_item.Is_valid_data ( ) )       {
               New_item.Set_part_no ( Get_next_item_id ( ) );
               cout << "***** Generated part no: " << New_item.Get_part_no ( )
                       << "*****\n";
               Item_file.clear ( );
               Item_file.seekp ( 0, ios::end );
               Item_file.write ( ( char * ) &New_item, sizeof ( New_item ) );
               Item_file.flush ( );
       }
       else
               cout << "\n***** invalid data entered *****\n";
       cin.get ( );
}

/*      Function used to modify, delete, and recall an existing record  */
void Modify_item ( fstream& Item_file, int Modify_Type )
{
       char Part_no[5];

       switch ( Modify_Type )  {
       case MODIFY_ALL:
               Display_heading ( "I T E M  M O D I F Y  S C R E E N" );
               break;
       case DELETE_MODIFY:
               Display_heading ( "I T E M  D E L E T I O N  S C R E E N" );
               break;
       case RECALL_MODIFY:
               Display_heading ( "I T E M  R E C A L L  S C R E E N" );
               break;
       }

       cout << "Enter part number to modify: ";
       cin >> Part_no;

       Item_file.clear ( );
       Item_file.seekg ( 0, ios::beg );
       Item Old_item;
       int Found = 0;

       while ( Item_file.read ( ( char * ) &Old_item, sizeof ( Old_item ) ) )
               if ( strcmp ( Old_item.Get_part_no ( ), Part_no ) == 0 &&
                               ( Modify_Type == RECALL_MODIFY || ! Old_item.Is_deleted ( ) ) ) {
                       Found = 1;
                       break;
               }

       if ( Found )    {
               switch ( Modify_Type )  {
               case DELETE_MODIFY:
                       Old_item.Set_delete ( 1 );
                       Item_file.seekp ( Item_file.tellp ( ) - sizeof ( Old_item ), ios::beg );
                       Item_file.write ( ( char * ) &Old_item, sizeof ( Old_item ) );
                       cout << "***** item deleted *****\n";
                       break;
               case RECALL_MODIFY:
                       if ( Old_item.Is_deleted ( ) == 0 )
                               cout << "***** item is not deleted *****\n";
                       else    {
                               Old_item.Set_delete ( 0 );
                               Item_file.seekp ( Item_file.tellp ( ) - sizeof ( Old_item ), ios::beg );
                               Item_file.write ( ( char * ) &Old_item, sizeof ( Old_item ) );
                               cout << "***** item recalled *****\n";
                       }
                       break;
               case MODIFY_ALL:
                       cout << "O L D  D A T A\n";
                       Old_item.Show_data ( );
                       cout << "\nEnter new data\n";
                       Old_item.Get_data ( );

                       if ( Old_item.Is_valid_data ( ) )       {
                               Item_file.seekp ( Item_file.tellp ( ) - sizeof ( Old_item ), ios::beg );
                               Item_file.write ( ( char * ) &Old_item, sizeof ( Old_item ) );
                               cout << "***** item modified *****\n";
                       }
                       else
                               cout << "\n***** invalid data entered *****\n";
               }
       }
       else
               cout << "\n***** no such part available *****\n";
       cin.get ( );
}

/*      Function used to sell an item   */
void Add_sales ( fstream& Item_file )
{
       Display_heading ( "S A L E S  S C R E E N" );

       char Part_no[5];

       cout << "Part no: "; cin >> Part_no;

       Item_file.clear ( );
       Item_file.seekg ( 0, ios::beg );

       Item Old_item;
       int Found = 0;

       while ( Item_file.read ( ( char * ) &Old_item, sizeof ( Old_item ) ) )
               if ( ! Old_item.Is_deleted ( ) && strcmp ( Old_item.Get_part_no ( ), Part_no ) == 0 )   {
                       Found = 1;
                       break;
               }

       if ( Found )    {
               cout << "Enter quantity: ";
               int Qty;
               cin >> Qty;

               if ( Qty > Old_item.Get_qty ( ) )
                       cout << "\n***** only " << Old_item.Get_qty ( ) << " items available *****\n";
               else    {
                       cout << '\n'
                                << "***** Price        : " << Old_item.Get_price ( ) << '\n'
                                << "***** Qty ordered  : "  << Qty << '\n'
                                << "***** Total amount : " << Old_item.Get_price ( ) * Qty << '\n';
                       char Temp;

                       cout << "\tUpdate data(y/n): "; cin >> Temp;
                       if ( tolower ( Temp ) == 'y' )  {
                               Old_item.Sell ( Qty );
                               Item_file.seekp ( Item_file.tellp ( ) - sizeof ( Old_item ), ios::beg );
                               Item_file.write ( ( char * ) &Old_item, sizeof ( Old_item ) );
                               cout << "***** Updated data *****\n";
                       }
                       else
                               cout << "***** data not updated *****\n";
               }
       }
       else
               cout << "***** no such item *****\n";
       cin.get ( );
}

/*      Function used to remove all deleted records from item file
       permanently     */
void Pack_item_file ( fstream& Item_file )
{
       ofstream Temp_file;
       char Temp_file_name[100];


       strcpy ( Temp_file_name, "IXE34UI2" );
       Temp_file.open ( Temp_file_name, ios::binary );

       if ( ! Temp_file )      {
               cout << "Unable to create temp file\n";
               getch ( );
               return;
       }

       Item_file.clear ( );
       Item_file.seekg ( 0, ios::beg );

       Item x;

       while ( Item_file.read ( ( char * ) &x, sizeof ( x ) ) )
               if ( ! x.Is_deleted ( ) )
                       Temp_file.write ( ( char *) &x, sizeof ( x ) );

       Item_file.close ( );
       Temp_file.close ( );

       remove ( Item_file_name );
       rename ( Temp_file_name, Item_file_name );

       Item_file.open ( Item_file_name, ios::in | ios::out | ios::binary );
}

void Report ( fstream& Item_file )
{
       while ( 1 )     {
               char Option = Display_report_heading ( );

               switch ( Option )       {
               case '1':
                       List_records ( Item_file, LIST_SPECIFIC );
                       break;
               case '2':
                       List_records ( Item_file );
                       break;
               case '3':
                       List_records ( Item_file, ALL );
                       break;
               case '4':
                       List_records ( Item_file, REORD_LVL );
                       break;
               case '5':
                       return;
               }
       }
}

char Display_report_heading ( )
{
       Display_heading ( "R E P O R T  S C R E E N" );

       cout << "\n"
                << "\t\t\t 1:  List specific" << "\n\n"
                << "\t\t\t 2:  List" << "\n\n"
                << "\t\t\t 3:  List deleted" << "\n\n"
                << "\t\t\t 4:  List reorder records" << "\n\n"
                << "\t\t\t 5:  #back";
       cout << "\n\n\t\t\t\t" << "Option: ";

       char Option; cin >> Option;
       return Option;
}

void Display_column_names ( )
{
       cout << setw ( 7 ) << "PART-NO"
                << setw ( 30 ) << "P A R T - N A M E"
                << setw ( 10 ) << "PRICE"
                << setw ( 7 ) << "QTY"
                << setw ( 12 ) << "REORDER-LVL"
                << setw ( 10 ) << "QTY-SOLD";
       cout << "\n";
}

/*      Function used to list records in different ways */
void List_records ( fstream& Item_file, int List_type )
{
       Display_heading ( "R E P O R T  S C R E E N" );

       int Line_count = 0;
       Item_file.clear ( );
       Item_file.seekg ( 0, ios::beg );
       Item x;
       char Part_no[5];

       if ( List_type == LIST_SPECIFIC )       {
               cout << "Part number to list: ";
               cin >> Part_no;
       }

       Display_column_names ( );
       Wait ( );
       while ( Item_file.read ( ( char * ) &x, sizeof ( x ) ) )        {
               switch ( List_type )    {
               case LIST_SPECIFIC:
                       if ( strcmp ( x.Get_part_no ( ), Part_no ) == 0 )       {
                               if ( x.Is_deleted ( ) ) cout << '*';
                               x.Show_data ( );
                               cin.get ( );
                               return;
                       }
                       break;
               case REORD_LVL:
                       if ( ! x.Is_deleted ( ) && x.Get_qty ( ) <= x.Get_reorder_level ( ) )   {
                               x.Show_data ( );
                               Line_count++;
                       }
                       break;
               case ALL:
                       if ( x.Is_deleted ( ) ) {
                               x.Show_data ( );
                               Line_count++;
                       }
                       break;
               case DEFAULT:
                       if ( ! x.Is_deleted ( ) )       {
                               x.Show_data ( );
                               Line_count++;
                       }
                       break;
               }

               if ( Line_count == MAX_LINES )  {
                       cout << "-- More -- ";
                       char Ch = cin.get ( );
                       if ( Ch == 'q' )
                               return;
                       Line_count = 0;
                       Display_heading ( "R E P O R T  S C R E E N" );
                       Display_column_names ( );
               }
       }
       cin.get ( );
}


/*      Main function   */
void main ( )
{
       fstream Item_file;

       Item_file.open ( Item_file_name, ios::in | ios::out | ios::binary );

       if ( ! Item_file )      {
               cout << "Unable to open item file\n";
               exit ( 1 );
       }

       while ( 1 )     {
               char Option = Display_main_menu ( );

               switch ( Option )       {
               case '1':
                       Add_item ( Item_file );
                       break;
               case '2':
                       Modify_item ( Item_file );
                       break;
               case '3':
                       Add_sales ( Item_file );
                       break;
               case '4':
                       Modify_item ( Item_file, DELETE_MODIFY );
                       break;
               case '5':
                       Modify_item (  Item_file, RECALL_MODIFY );
                       break;
               case '6':
                       Pack_item_file ( Item_file );
                       break;
               case '7':
                       Report ( Item_file );
                       break;
               case '8':
                       CLRSCR;
                       Item_file.close ( );
                       exit ( 0 );
               }
               Wait ( );
       }
}