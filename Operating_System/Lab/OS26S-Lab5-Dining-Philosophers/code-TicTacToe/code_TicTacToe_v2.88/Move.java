/**
   A class for Tic Tac Toe moves
*/
public class Move {
  private int row;
  private int column;

  public Move (int r, int c) {
    if (r < 1 || Board.SIZE < r || c < 1 || Board.SIZE < c)
      throw new IllegalArgumentException();

    row = r;
    column = c;
  }

  public int getRow ()      { return row; }  
  public int getColumn ()   { return column; }

  public String toString() {
    return String.format( "(%d,%d)", row, column);
  } 

  public boolean atCorner () {
    return (row == 1 && column==1) ||  (row == 1 && column==3) || 
           (row == 3 && column==1) ||  (row == 3 && column==3) ;
  }
  
  public boolean isCatercorner (Move move) {
    return this.atCorner() && move.atCorner() &&
           this.row + move.row == 4 && this.column + move.column == 4;
  }
  
  public int getCross () {
    return CROSS[row-1][column-1];
  }
  private static final int[][] CROSS = { 
    {3, 2, 3}, 
    {2, 4, 2}, 
    {3, 2, 3} 
  };
  
  public static final Move CENTER = new Move(2,2);

  public static final Move[] CORNERS = new Move[] {
    new Move(1,1), new Move(1,3), new Move(3,1), new Move(3,3)
  }; 

  public static final Move[] SIDES = new Move[] {
    new Move(1,2),  new Move(2,1), new Move(2,3), new Move(3,2)
  };
}
