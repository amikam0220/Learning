package Lab2;

import java.util.Scanner;

public class CurrencyExchange {
    /**
     * print the result of currency exchange
     * @param rate the rate from dollor to yuan
     * @param type the conversion type
     * @param amount the amount of currency
     */
    public static void printCurrencyExchange(double rate, int type, double amount) {
        // check the input
        if (type != 0 && type != 1) {
            System.out.println("Incorrect input");
            return;
        }

        if (rate <= 0) {
            System.out.println("Incorrect input of rate");
            return;
        }

        if (amount < 0) {
            System.out.println("Incorrect input of amount");
            return;
        }

        // calculate the result according to type
        double target;
        if (type == 0) {
            target = amount * rate;
            System.out.println("$" + amount + " is " + String.format("%.2f", target) + " yuan");
        } else {
            target = amount / rate;
            System.out.println(amount + " yuan is $" + String.format("%.2f", target));
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the exchange rate from dollars to RMB:");
        double rate = sc.nextDouble();
        if (rate <= 0) {
            System.out.println("Incorrect input of rate");
            sc.close();
            return;
        }

        System.out.println("Enter 0 to convert dollars to RMB and 1 vice versa:");
        int type = sc.nextInt();
        if (type != 0 && type != 1) {
            System.out.println("Incorrect input");
            sc.close();
            return;
        }

        System.out.println("Enter the RMB amount:");
        double amount = sc.nextDouble();
        if (amount < 0) {
            System.out.println("Incorrect input of amount");
            sc.close();
            return;
        }

        printCurrencyExchange(rate, type, amount);
        
        sc.close();
    }
}
