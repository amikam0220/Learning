import java.util.Scanner;

public class DisplayCalendars {
    /**
     * display the calendar by the year and the first day
     * @param year the year
     * @param firstDay the first day
     */
    public static void displayCalendars(int year, int firstDay) {
        final String[] months = { "January", "February", "March", "April", "May", "June", "July", "August", "September",
                "October", "November", "December" };
        int[] daysInMonth = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            daysInMonth[1] = 29;
        }

        int currentFirstDay = firstDay;

        for (int m = 0; m < 12; m++) {
            // print the head of the table
            System.out.println("\n" + String.format("%-10s", months[m] + " " + year));
            System.out.println("-".repeat(28));
            System.out.printf("%-4s%-4s%-4s%-4s%-4s%-4s%-4s\n", "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat");

            // print the former space
            for (int i = 0; i < currentFirstDay; i++) {
                System.out.printf(" ".repeat(4));
            }

            // print dates
            int dayOfWeek = currentFirstDay;
            for (int day = 1; day <= daysInMonth[m]; day++) {
                System.out.printf("%-4d", day);

                if (dayOfWeek == 6) {
                    System.out.println();
                }
                dayOfWeek = (dayOfWeek + 1) % 7;
            }

            System.out.println();

            currentFirstDay = (currentFirstDay + daysInMonth[m]) % 7;
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Please enter the year:");
        int year = sc.nextInt();
        System.out.println("Please enter the first day of the year (0-6 for Sunday-Saturday):");
        int firstDay = sc.nextInt();
        displayCalendars(year, firstDay);

        sc.close();
    }
}
