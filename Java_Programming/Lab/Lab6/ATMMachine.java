package Lab6;

import java.util.Scanner;

public class ATMMachine {

    public static void main(String[] args) {
        Account[] accounts = new Account[10];
        for (int i = 0; i < 10; i++) {
            accounts[i] = new Account(i, 100);
        }

        Scanner sc = new Scanner(System.in);

        while (true) {
            int id = 0;
            System.out.println("Please enter an id.");
            try {
                id = sc.nextInt();
                if (id < 0 || id >= 10) {
                    System.out.println("Invalid id");
                    continue;
                }
            } catch (java.util.InputMismatchException e) {
                System.out.println("Please enter a correct id.");
                sc.next();
            }
            while (true) {
                int choice = 0;
                System.out.println("Please enter the choice");
                System.out.println("1: check balance");
                System.out.println("2. withdraw money");
                System.out.println("3: deposit money");
                System.out.println("4: exit the main menu");

                try {
                    choice = sc.nextInt();
                    if (choice < 1 || choice > 4) {
                        System.out.println("Invalid choice number");
                        continue;
                    }
                } catch (java.util.InputMismatchException e) {
                    System.out.println("Please enter a correct choice");
                    sc.next();
                }

                if (choice == 1) {
                    System.out.println("The balance is " + accounts[id].getBalance());
                } else if (choice == 2) {
                    System.out.println("Enter amount to withdraw");
                    double amount = sc.nextDouble();
                    accounts[id].withdraw(amount);
                    System.out.println("Current balance: " + accounts[id].getBalance());
                } else if (choice == 3) {
                    System.out.println("Enter amount to deposit");
                    double amount = sc.nextDouble();
                    accounts[id].deposit(amount);
                    System.out.println("Current balance: " + accounts[id].getBalance());
                } else {
                    System.out.println("Exiting...");
                    break;
                }
            }
        }
    }    
}
