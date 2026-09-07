package Lab2;

import java.util.Scanner;

public class FindFutureDate {
    /**
     * print the day according to today and the days after today
     * @param today the day of today
     * @param days the days
     */
    public static void printFutureDay(int today, int days) {
        // error check
        if (today < 0) {
            System.out.println("Error input of today");
            return;
        }

        if (days < 0) {
            System.out.println("Error input of days");
        }

        // calculate the future day
        String[] dayStrings = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thusday", "Friday", "Saturday" };
        int futureDay = (today + days) % 7;
        System.out.println("Today is " + dayStrings[today] + " and the future day is " + dayStrings[futureDay]);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter today's day:");
        int today = sc.nextInt();
        System.out.println("Enter the number of days elapsed since today:");
        int days = sc.nextInt();

        printFutureDay(today, days);

        sc.close();
    }
}
