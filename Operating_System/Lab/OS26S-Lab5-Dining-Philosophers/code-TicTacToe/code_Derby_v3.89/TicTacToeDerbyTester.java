/**
   version 3.8
   
   A class for testing the TicTacToeDerby class (TicTacToeGame is for play with a person).
   
   Refactored by Max He, March 2008
   Rearranged on June 20, 2008
   v2.0, Add AIAssistance on May 19, 2017, Max
   v2.0.1, Correct a syntax error in line 45 in AIAssistance On May 20, 2017, by Liu Hao
   v2.0.5, Add random move selection when there are more than one moves in AIAssistance. 
   v2.1, Add a nextDoubleThreatsMoves method in AIAssistance. May 23, 2017
   v2.1.1, Correct some syntax errors On May 23, 2017, by Liu Hao
   v3.0, add TicTactoeAgent: RandomAgent, WisdomAgent with IQ, May 28-29
   v3.8, Optimized to become a real guru :-) , May 30, 2017
*/
import java.util.Date;
import java.util.Arrays;

class TicTacToeDerbyTester {
  public static void main (String[] args) {
    int N = args.length > 0 ? Integer.parseInt(args[0]) : 10000;
   
    int[] iQAI = { 100 };
    int[] iQx  = { 0, 1, 10, 20, 30, 40, 50, 60, 70, 80, 90, 99, 100 };
    int[] iQ   = new int[101];
    for (int i = 0; i <= 100; i++)
      iQ[i] = i;
      
    System.out.println( new Date());
    derbyShow( iQAI, iQ );
    derbyShow( iQ, iQAI );
    derbyShow( iQx, iQx );
    System.out.println( new Date());
       
    derbyStatistic( iQAI, iQ, N );
    System.out.println( new Date());
    derbyStatistic( iQ, iQAI, N );
    System.out.println( new Date());
    derbyStatistic( iQx, iQx, N );
    System.out.println( new Date());
  }

  private static void derbyShow (int[] iQ1, int[] iQ2) {
    System.out.println( "\nTic-Tac-Toe Derby Show" );
    System.out.println( "iQ1[] : " + Arrays.toString( iQ1 ) );
    System.out.println( "iQ2[] : " + Arrays.toString( iQ2 ) );
    System.out.println( DerbyReport.HEADER);

    for (int i = 0; i < iQ1.length; i++) {
      for (int j = 0; j < iQ2.length; j++) {
        TicTacToeDerby game = new TicTacToeDerby( iQ1[i], iQ2[j]);
        game.play();
        System.out.println( game.getReport());
      }
    }
  }

  private static void derbyStatistic (int[] iQ1, int[] iQ2, int N) {
    System.out.println( "\nTic-Tac-Toe Derby Statistic" );
    System.out.println( "iQ1[] : " + Arrays.toString( iQ1 ) );
    System.out.println( "iQ2[] : " + Arrays.toString( iQ2 ) );
    System.out.println( "repetition : " + N );

    final String RESULTS = "X=O";
    System.out.println( 
      "LiQ:RiQ {   X's    ='s    O's  } of " + N + " games" 
    );
    
    for (int i = 0; i < iQ1.length; i++) {
      for (int j = 0; j < iQ2.length; j++) {
        int[] rc = new int[3];
        for (int k = 0 ; k < N; k++) {
          TicTacToeDerby game = new TicTacToeDerby( iQ1[i], iQ2[j] );
          game.play();
          ++rc[ RESULTS.indexOf( game.getReport().winner.charAt(0))];
        }
        System.out.printf( "%3d:%-3d { %6d %6d %6d }\n", 
          iQ1[i], iQ2[j], rc[0], rc[1], rc[2]
        );
      }
    } 
  }
}

