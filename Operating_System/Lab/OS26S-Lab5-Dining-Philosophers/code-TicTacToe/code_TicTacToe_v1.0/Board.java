/**
   A class for storing, manipulating, and printing TicTacToe boards
*/
public class Board {
  /*
    A sample board is shown like this:
  
      Here is the current board:
     
      o| |x
      -+-+-
      x|o|o 
      -+-+-
       | |x
   
  */
  public void show () {
    System.out.println( "Here is the current board:\n" );

    for (int r = 1; r <= SIZE; r++) {
      for (int c = 1; c <= SIZE; c++) {
        System.out.print( board[r-1][c-1] );  
        if (c != SIZE)   // Print strut after all but last column
          System.out.print( "|" );
      }
      System.out.println();     

      if (r != SIZE)   // Print row line after all but last row
        System.out.println( "-+-+-" );
    }
    System.out.println();     
  }
    
  public boolean isGameWon () {
    final Tool[][] b = board;  // a local variable for shorter expressions

    // Check (short circuit) all rows, columns and diagonals for a win
    return
      b[0][0]!=Tool.EMPTY && b[0][0]==b[0][1] && b[0][1]==b[0][2] ||  // Row 0
      b[1][0]!=Tool.EMPTY && b[1][0]==b[1][1] && b[1][1]==b[1][2] ||  // Row 1
      b[2][0]!=Tool.EMPTY && b[2][0]==b[2][1] && b[2][1]==b[2][2] ||  // Row 2
                                                                      
      b[0][0]!=Tool.EMPTY && b[0][0]==b[1][0] && b[1][0]==b[2][0] ||  // Col 0
      b[0][1]!=Tool.EMPTY && b[0][1]==b[1][1] && b[1][1]==b[2][1] ||  // Col 1
      b[0][2]!=Tool.EMPTY && b[0][2]==b[1][2] && b[1][2]==b[2][2] ||  // Col 2
                                                                      
      b[1][1]!=Tool.EMPTY && b[0][0]==b[1][1] && b[1][1]==b[2][2] ||  // Dia 1
      b[1][1]!=Tool.EMPTY && b[2][0]==b[1][1] && b[1][1]==b[0][2] ;   // Dia 2
  }

  public boolean isFull () {
    for (int i = 0; i < SIZE; i++)
      for (int j = 0; j < SIZE; j++)
        if (board[i][j] == Tool.EMPTY) return false;
    return true;
  }
    
  public boolean isValid (Move move) {
    int r = move.getRow();
    int c = move.getColumn();
    return board[r-1][c-1] == Tool.EMPTY;
  }
    
  public void handleMove (Move move, Tool player) {
    int r = move.getRow();
    int c = move.getColumn();
    System.out.printf( "\nThe move for %s is %d, %d\n", player, r, c );

    board[r-1][c-1] = player;  // Place the player's Tool on the board
  }

  public void clear () { 
    for (int i = 0; i < SIZE; i++)
      for (int j = 0; j < SIZE; j++)
        board[i][j] = Tool.EMPTY;
  }

  public static final int SIZE = 3;
  private Tool[][] board = new Tool[SIZE][SIZE];
}
