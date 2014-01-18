#include <iostream>

using namespace std;


class Table
{
private:
  char data[ 9 ];
  
public:
  Table()//initializes board
  {
    for ( int i = 0; i < 9; ++i )
    {
      data[ i ] = ' ';
    }
  }

  void Set( int row, int column, char letter )//sets an letter on board
  {
    data[ row * 3 + column ] = letter;
  }
  
  char Get( int row, int column )//gets a letter on board
  {
    return data[ row * 3 + column ];
  }
  
  void Draw()//draws board
  {
    for ( int r = 0; r < 3; ++r )
    {
      for ( int c = 0; c < 3; ++c )
      {
        cout << "|" << Get( r, c );
      }
      cout << "|" << endl;
      cout << "_______" << endl;
    }
  }
};


int main()
{
  Table table;
  
  int row, column;
  
  while ( true )
  {
    DrawBoard();
    
    cout << "player 1's turn( x )" << endl;
    
    a:
    
    cout << "enter a row & column: ";
    
    cin >> row >> column;
    
    if ( table.Get( row, column ) != ' ' )
    {
      cout << "invalid pick, please choose again." << endl;
      goto a;
    }
    else
    {
      table.Set( row, column, 'x' );
    }
    
    //Check for win
    
    DrawBoard();
    
    cout << "player 2's turn( o )" << endl;
    
    b:
    
    cout << "enter a row & column: ";
    
    cin >> row >> column;
    
    if ( table.Get( row, column ) != ' ' )
    {
      cout << "invalid pick, please choose again." << endl;
      goto b;
    }
    else
    {
      table.Set( row, column, 'o' );
    }
    
    //Check for win
  }

  return 0;
}
