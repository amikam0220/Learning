public class RandomAgent implements TicTacToeAgent {
  private Board board;

  public RandomAgent (Board board) {
    this.board = board;
  }
  
  public Move nextMove () {
    return Moves.anyMoveFrom( board.getEmptyMoves());
  }
}
