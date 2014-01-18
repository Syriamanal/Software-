#include <iostream>
#include "stdafx.h"// so its used in Visual Studio
#include <windows.h>
#include <string>// just in case!
using namespace std;



//Add more comments so we can see what u did!
class Table
{
private:
  char data[ 9 ];
  
public:
  Table()
  {
    for ( int i = 0; i < 9; ++i )
    {
      data[ i ] = ' ';
    }
  }

  void Set( int row, int column, char letter )
  {
    data[ row * 3 + column ] = letter;
  }
  
  char Get( int row, int column )
  {
    return data[ row * 3 + column ];
  }
};

// Draw the bord!
void DrawBoard( Table table )
{
  for ( int r = 0; r < 3; ++r )
  {
    for ( int c = 0; c < 3; ++c )
    {
      cout << "|" << table.Get( r, c );
    }
    
    cout << endl;
  }
}


//Main function!
int main()
{
  SetConsoleTitle(TEXT(" Quantum Works Tic Tac Toe "))//Console Title!
  
  SetConsoleTitle(TEXT(" Quantum Works ")); // Logo
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\n\t\t\t  ______________________";
	cout << "\n\t\t\t | By Team\t|";
	cout << "\n\t\t\t | \t\t\t|";
	cout << "\n\t\t\t | Quantum Works\t\|";
	cout << "\n\t\t\t | \t\t\t|";
	cout << "\n\t\t\t | All Rights Reserved\t|";
	cout << "\n\t\t\t |______________________|";
	cout << "\n\t\t\t\t";

	system("color 90");
	Sleep(2000);

	system("cls");
	//Logo end
  
  Table table;
  
  while ( true )
  {
    DrawBoard();
    
    MessageBox(NULL, L" player 1's turn ", NULL, NULL); // Popupwindow
    
    //continue...
  }

  return 0;
}
