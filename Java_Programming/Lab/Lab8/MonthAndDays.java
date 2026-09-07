package Lab8;

import java.util.InputMismatchException;
import java.util.Scanner;

public class MonthAndDays {
    public static void main(String[] args) {
        String[] months = { "January", "February", "March", "April",
                "May", "June", "July", "August", "September", "October",
                "November", "December" };
        int[] dom = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        Scanner sc = new Scanner(System.in);
        int idx;
        String month;
        int days;

        System.out.println("Please enter an integer between 1 and 12: ");

        try{
            idx = sc.nextInt() - 1;
        } catch (InputMismatchException e) {
            System.err.println("Invalid input. Please enter an integer between 1 and 12.");
            sc.close();
            return;
        }

        try{
            month = months[idx];
            days = dom[idx];
        } catch (ArrayIndexOutOfBoundsException e) {
            System.err.println("Wrong number. Please enter an integer between 1 and 12.");
            sc.close();
            return;
        }

        System.out.println("Month :" + month);
        System.out.println("The number of days in the month: " + days);
        
        sc.close();
    }
}
