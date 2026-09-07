/**
   A class for Tool (of Player)
 */
public enum Tool {
  X, O, EMPTY;   // name()
  
  public String toString () { return SHOW_AS[ ordinal() ]; }

  private static String[] SHOW_AS = { "X", "O", " " };
}
