/**
   version 3.8
   
   A class for testing the TicTacToeGame class.
   
   Refactored by Max He, March 2008
   Rearranged on June 20, 2008
   v2.0, Add AIAssistance on May 19, 2017, Max
   v2.0.1, Correct a syntax error in line 45 in AIAssistance On May 20, 2017, by Liu Hao
   v2.0.5, Add random move selection when there are more than one moves in AIAssistance. 
   v2.1, Add a nextDoubleThreatsMoves method in AIAssistance. May 23, 2017
   v2.1.1, Correct some syntax errors On May 23, 2017, by Liu Hao
   v3.0, add TicTactoeAgent: RandomAgent, WisdomAgent with IQ, May 28-29
   v3.8, Optimized to become a real guru :-) , May 30, 2017
   v3.88, Refactored, May 15, 2018
*/
class TicTacToeGame {
   public static void main (String[] args) {
      int agentIQ = getIQfrom( args);
      TicTacToe game = new TicTacToe( agentIQ);
      game.play();
      System.out.println( "Goodbye!" );
   }
   
   private static int getIQfrom (String[] s) {
      int iQ = 100;
      if (s.length == 0) return iQ;
      
      try {
         iQ = Integer.parseInt( s[0]);
      } catch (Exception e) {}
        
      return iQ;
   }
}

