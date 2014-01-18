#include <iostream>
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
  Table table;
  
  while ( true )
  {
    DrawBoard();
    
    cout << "player 1's turn" << endl;
    
    //continue...
  }

  return 0;
}
