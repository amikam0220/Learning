/**
   A class for finding the best move in a TicTacToe board automatically
*/
import java.util.ArrayList;

public class AIAssistance implements TicTacToeAgent {
  private Board board;
  private Tool me;
  private Tool opposite;

  public AIAssistance (Board board, Tool me, Tool opposite) {
    this.board = board;
    this.me = me;
    this.opposite = opposite;
  }
  
  public Move nextMove () {
    Move move = obviousMove();
    if (move != null) return move;
    
    return smartMove();
  } 
  
  protected Move obviousMove () {
    ArrayList<Move> moves = nextKillerMoves();
    if (moves.size() > 0) return Moves.anyMoveFrom( moves);
    
    moves = nextSurviveMoves();
    if (moves.size() > 0) return Moves.anyMoveFrom( moves);
  
    return null;
  }   
  
  protected Move smartMove () {
    ArrayList<Move> moves = board.getMoves();
    if (moves.size() == 0)   // smart starting :-)
      return Moves.randomStartMove();
  
    if (moves.size() == 3 && moves.get(0).isCatercorner( moves.get(2))) 
      return Moves.anyMoveFrom( Moves.SIDES);  // The unique special case!
  
    moves = nextDoubleThreatsMoves( me);
    if (moves.size() > 0) return Moves.anyMoveFrom( moves);
  
    moves = nextDoubleThreatsMoves( opposite);
    if (moves.size() > 0) {
      moves = antiDoubleThreatsMoves();
      if (moves.size() > 0) return Moves.anyMoveFrom( moves);
    }
  
    return Moves.anyMoveFrom( maxCrossMoves());
  } 
  
  private ArrayList<Move> nextKillerMoves () {
    return trialToWinMoves( me);
  }
  
  private ArrayList<Move> nextSurviveMoves () {
    return trialToWinMoves( opposite);
  }
  
  private ArrayList<Move> trialToWinMoves (Tool player) {
    ArrayList<Move> moves = new ArrayList<Move>();
    for (int r = 1; r <= Board.SIZE; r++) {
      for (int c = 1; c <= Board.SIZE; c++) {
        Move move = new Move( r, c);
        if (board.trialToWin( move, player)) 
          moves.add( move);
      }
    } 
    return moves;   
  }
  
  private ArrayList<Move> nextDoubleThreatsMoves (Tool player) {
    ArrayList<Move> moves = new ArrayList<Move>();
    for (int r = 1; r <= Board.SIZE; r++) {
      for (int c = 1; c <= Board.SIZE; c++) {
        Move move = new Move( r, c);
        if (board.trialDoubleTreats( move, player)) 
          moves.add( move);
      }
    } 
    return moves;   
  }
  
  private ArrayList<Move> antiDoubleThreatsMoves () {
    ArrayList<Move> moves = new ArrayList<Move>();
    for (int r = 1; r <= Board.SIZE; r++) {
      for (int c = 1; c <= Board.SIZE; c++) {
        Move move = new Move( r, c);
        if (board.isValid( move)) {
          board.setMove( move, me);   // trial a move 
          // to check whether there is double-threat-move for opposite 
          ArrayList<Move> threatMoves = 
            nextDoubleThreatsMoves( opposite);
          if (threatMoves.size() == 0) 
            moves.add( move);
          board.clearMove( move);   // clear trial move
        }
      }
    }
    return moves;   
  }
  
  private ArrayList<Move> maxCrossMoves () {
    int maxCross = 0;
    for (int r = 1; r <= Board.SIZE; r++) {
      for (int c = 1; c <= Board.SIZE; c++) {
        Move move = new Move( r, c);
        if (board.isValid( move) && move.getCross() > maxCross) 
          maxCross = move.getCross();
      }
    }    
  
    ArrayList<Move> moves = new ArrayList<Move>();
    for (int r = 1; r <= Board.SIZE; r++) {
      for (int c = 1; c <= Board.SIZE; c++) {
        Move move = new Move( r, c);
        if ((board.isValid( move)) && move.getCross() == maxCross)
          moves.add( move);
      }
    }    
    return moves;            
  }
}  
