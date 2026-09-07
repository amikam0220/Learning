public class DerbyReport {
  int leftAgentIQ;     // 0..100
  int rightAgentIQ;    // 0..100
  String winner;       // "X", "=", "O"
  String moves;        // [(1,3), (1,1), (2,2), (2,1), (3,1)]
   
  public DerbyReport (int leftAgentIQ, int rightAgentIQ) {
    this.leftAgentIQ  = leftAgentIQ;
    this.rightAgentIQ = rightAgentIQ;
  }
   
  public String toString () {
    return String.format( 
      "%3d:%-3d %s %s", leftAgentIQ, rightAgentIQ, winner, moves
    );
  }
   
  static final String HEADER = "LiQ:RiQ ? Moves:";
}
