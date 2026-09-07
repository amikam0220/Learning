/**
   A withdraw runnable makes periodic withdrawals from a bank account.
*/
public class WithdrawRunnable implements Runnable {
   private static final int DELAY = 1; 
   private BankAccount account;
   private double amount;
   private int count;

   /**
      Constructs a withdraw runnable.
      @param account the account from which to withdraw money
      @param amount the amount to withdraw in each repetition
      @param count the number of repetitions
   */
   public WithdrawRunnable (BankAccount account, double amount, int count) {
      this.account = account;
      this.amount = amount;
      this.count = count;
   }

   public void run() {
      try {
         for (int i = 1; i <= count; i++) {
            account.withdraw( amount );
            Thread.sleep( DELAY );
         }
      } catch (InterruptedException exception) {}
   }
}
