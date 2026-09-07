package Lab2;

import java.util.Scanner;

public class DaysOfAMonth {

    /**
     * find the days of month in corresponding year
     * @param year 
     * @param month
     * @return the days of month in corresponding year
     */
    public static int findDaysOfMonth(int year, String month) {
        int ret = 0;
        // map month to corresponding days
        int[] days = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        // check whether is leap year
        if (((year % 100 != 0) && (year % 4 == 0)) || (year % 400 == 0)) {
            days[1] = 29;
        }

        // map string to corresponding index
        String[] months = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
        int monthsLen = months.length;
        boolean isMonth = false;

        for (int i = 0; i < monthsLen; i++) {
            if (month.equals(months[i])) {
                ret = days[i];
                isMonth = true;
            }
        }

        if (isMonth == false) {
            System.out.println(month + " is not a correct month name");
            System.exit(1);
        }

        return ret;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a year:");
        int year = sc.nextInt();
        System.out.println("Enter a month:");
        String month = sc.next();

        int days = findDaysOfMonth(year, month);
        System.out.println(month + " " + year + " has " + days + " days");

        sc.close();
    }
}
