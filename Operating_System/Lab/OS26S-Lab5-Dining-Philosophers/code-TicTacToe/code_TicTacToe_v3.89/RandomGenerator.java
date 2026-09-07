import java.util.Random;
public class RandomGenerator extends Random {
   private static final long serialVersionUID = 1L;

   public int nextIntBetween (int low, int high) {
      return low + super.nextInt( high - low + 1);
   }
   
   public boolean nextBooleanBy (double probility) {
      return super.nextDouble() <= probility;
   }
}
