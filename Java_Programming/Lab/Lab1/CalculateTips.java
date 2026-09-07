import java.util.Scanner;

public class CalculateTips {
    public static class TipCalculator {
        private double subtotal;
        private double gratuityRate;

        // get subtotal
        public double getSubtotal() {
            return subtotal;
        }

        // conductor to initialize subtotal and gratuityRate
        public TipCalculator(double subtotal, double gratuityRate) {
            this.subtotal = subtotal;
            this.gratuityRate = gratuityRate;
        }

        // calculate tip 
        public double calculateTip() {
            double tip = subtotal * gratuityRate / 100;
            subtotal += tip;
            return tip;
        }

    }
    
    public static void main(String[] args) {
        // create a Scanner object to read input from the user
        Scanner input = new Scanner(System.in);

        System.out.println("Enter the subtotal and a gratuity rate:");
        // read the subtotal and gratuity rate from the user
        double subtotal = input.nextDouble();
        double gratuityRate = input.nextDouble();

        // create a TipCalculator object and calculate the tip and total
        TipCalculator calculator = new TipCalculator(subtotal, gratuityRate);
        System.out.println("The gratuity is $" + calculator.calculateTip()
                            + " and total is $" + calculator.getSubtotal());
        input.close();
    }
}
