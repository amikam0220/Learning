/**
   A Utility class for Tic Tac Toe moves
*/
import java.util.ArrayList;

public class Moves {
  private static RandomGenerator random = new RandomGenerator();

  public static Move anyMoveFrom (ArrayList<Move> moves) {
    return moves.get( random.nextInt( moves.size()));
  }

  public static Move anyMoveFrom (Move[] moves) {
    return moves[ random.nextInt( moves.length)];
  }

  public static Move randomStartMove () {
    return random.nextBoolean() ? 
      anyMoveFrom( CORNERS) :
      (random.nextBoolean() ? anyMoveFrom( SIDES) : CENTER);
  }
  
  public static final Move CENTER = new Move(2,2);

  public static final Move[] CORNERS = new Move[] {
    new Move(1,1), new Move(1,3), new Move(3,1), new Move(3,3)
  }; 

  public static final Move[] SIDES = new Move[] {
    new Move(1,2),  new Move(2,1), new Move(2,3), new Move(3,2)
  };
}
