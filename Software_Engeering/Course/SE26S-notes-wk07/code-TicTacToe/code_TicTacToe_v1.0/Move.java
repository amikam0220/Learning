/**
   A class for Tic Tac Toe moves
*/
public class Move {
  public Move (int r, int c) {
    if (r < 1 || Board.SIZE < r || c < 1 || Board.SIZE < c)
      throw new IllegalArgumentException();

    row = r;
    column = c;
  }

  public int getRow ()  { return row; }
  
  public int getColumn ()   { return column; }

  private int row;
  private int column;
}
