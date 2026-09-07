/**
   A class playing a game of TicTacToe
*/
import java.util.Random;
import java.util.Scanner;

public class TicTacToe {
  public void play () {
    showStartHint();
    randomFirstPlayer();  

    board.clear();
    board.show();

    boolean gameOver = false;
    while (!gameOver) {
      Move move = getAMove();
      board.handleMove( move, player );

      board.show();

      if (board.isGameWon() || board.isFull())
        gameOver = true;
      else 
        player = oppositePlayer();
    }

    showGameResult();
  }

  private void showStartHint() {
    System.out.println( HINT_MESSAGE);
  }

  private void randomFirstPlayer () {
    if (generator.nextBoolean()) {
      person   = Tool.X; 
      computer = Tool.O;
    } else {
      person   = Tool.O; 
      computer = Tool.X;
    }
    player = Tool.X;
  }
    
  private Tool oppositePlayer () {
    return (player == computer) ? person : computer;
  }

  private void showGameResult () {
    if (board.isGameWon())
      System.out.println( player==person ? "You won!" : "I won!" );
    else if (board.isFull())
      System.out.println( "We tied!" );
    else
      System.out.println( "Something went wrong!" );
  }
  
   // Creates a move, either a random generated move or as input from the user
  private Move getAMove () {
    Move move = null;

    if (player == computer) {
      System.out.println( "It is my move.  I am '" + player + "'" );
      move = randomGenerateAValidMove();
    } else {
      System.out.println( "It is your move.  You are '" + player + "'" );
      move = getAValidMoveFromPerson();
    }
    return move;
  }

  private Move randomGenerateAValidMove () {
    Move move = null;
    do {
      move = new Move( intBetween(1, Board.SIZE), intBetween(1, Board.SIZE));
    } while ( !board.isValid( move ) );
    return move;
  }

  private int intBetween (int low, int high) {
    return low + generator.nextInt( high - low + 1 );
  }

  private Move getAValidMoveFromPerson () {
    Move move = null;
    while (true) {
      try {
        System.out.print( "Enter a row and column on one line: " );
        move = new Move( in.nextInt(), in.nextInt() );
        // Generates an exception if can't make a move from r and c

        if (board.isValid( move )) return move;

        System.out.println( "Invalid move. Try again!" );
      } catch (Exception e) {
        System.out.println( "Input error. Try again!" );
      }
    }
  }
    
  private Tool player;
  private Tool computer;
  private Tool person;

  private Board board = new Board();
  private Scanner in = new Scanner( System.in );

  private static Random generator = new Random();

  private static final String HINT_MESSAGE = "\n" +
    "************************************************\n" +
    "Let's play Tic Tac Toe!\n" +
    "When asked for a move, enter location you want.\n" +
    "Enter the row first and then the column, both on the same line.\n" +
    "The row and column must in the range 1 .. 3\n" +
    "************************************************\n" ;
}
