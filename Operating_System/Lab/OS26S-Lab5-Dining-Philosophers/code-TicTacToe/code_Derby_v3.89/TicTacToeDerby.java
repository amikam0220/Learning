public class TicTacToeDerby {
  private final Tool leftHand  = Tool.X;
  private final Tool rightHand = Tool.O;
  private Tool player = leftHand;

  private Board board;
  private TicTacToeAgent leftAgent;
  private TicTacToeAgent rightAgent;
  private DerbyReport report; 

  public TicTacToeDerby (int leftAgentIQ, int rightAgentIQ) {
    board = new Board();
     
    leftAgent  = agentCreator( leftAgentIQ, leftHand, rightHand);
    rightAgent = agentCreator( rightAgentIQ, rightHand, leftHand);

    report = new DerbyReport( leftAgentIQ, rightAgentIQ);
  }

  public void play () {
    boolean gameOver = false;
    while (!gameOver) {
      Move move = getAMove();
      board.setMove( move, player);

      if (board.isGameWon()) {
        report.winner = player.toString();
        gameOver = true;
      } else if (board.isFull()) {
        report.winner = TIE;
        gameOver = true;
      } else 
        player = oppositePlayer();
    }

    report.moves = Moves.movesToString( board.getMoves());
  }

  public DerbyReport getReport () {
    return report;
  }
   
  private TicTacToeAgent agentCreator (int iQ, Tool me, Tool opposite) {
    TicTacToeAgent agent;
    switch (iQ) {
      case 0 :   agent = new RandomAgent( board); break;
      case 100 : agent = new AIAssistance( board, me, opposite); break;
      default:   agent = new WisdomAgent( board,  me, opposite, iQ); break;
    }
    return agent;
  }

  private Tool oppositePlayer () {
    return (player == leftHand) ? rightHand : leftHand;
  }

  private Move getAMove () {
    return (player == leftHand) ? leftAgent.nextMove() : rightAgent.nextMove();
  }

  private static final String TIE = "=";
}

