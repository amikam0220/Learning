/**
   A class for finding next move in a TicTacToe board automatically 
   consistent with the giving IQ.
*/
public class WisdomAgent extends AIAssistance {
  private int iQ; 
  private double smartProbility;
  private RandomAgent randomAid; 

  public WisdomAgent (Board board, Tool me, Tool opposite, int iQ) {
    super( board, me, opposite);
    
    this.iQ = iQ;
    smartProbility = iQ / 100.0;
    
    randomAid = new RandomAgent( board);
  }
  
  public Move nextMove () {
    if (iQ <= 0)   return randomAid.nextMove();
  
    Move move = super.obviousMove();
    if (move != null) return move;
  
    if (iQ == 1)   return randomAid.nextMove();
    if (iQ >= 100) return super.smartMove();
          
    if (random.nextBooleanBy( smartProbility)) 
      return super.smartMove();
    else 
      return randomAid.nextMove();
  } 
  
  private static RandomGenerator random = new RandomGenerator();
}
