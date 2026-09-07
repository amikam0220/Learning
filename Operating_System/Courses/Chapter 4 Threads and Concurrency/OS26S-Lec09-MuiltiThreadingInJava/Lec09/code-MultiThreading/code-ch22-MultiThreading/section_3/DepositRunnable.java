/**
   A deposit runnable makes periodic deposits to a bank account.
*/
public class DepositRunnable implements Runnable {
   private static final int DELAY = 1; 
   private BankAccount account;
   private double amount;
   private int count;

   /**
      Constructs a deposit runnable.
      @param account the account into which to deposit money
      @param amount the amount to deposit in each repetition
      @param count the number of repetitions
   */
   public DepositRunnable (BankAccount account, double amount, int count) {
      this.account = account;
      this.amount = amount;
      this.count = count;
   }

   public void run() {
      try {
         for (int i = 1; i <= count; i++) {
            account.deposit( amount );
            Thread.sleep( DELAY );
         }
      } catch (InterruptedException exception) {}
   }
}
