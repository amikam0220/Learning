package Lab5;

import java.util.GregorianCalendar;

public class UseGregorianCalendar {
    public static void main(String[] args) {
        // create object of current time
        GregorianCalendar current = new GregorianCalendar();

        System.out.println("Current year, month and day:");
        System.out.println((current.get(GregorianCalendar.MONTH) + 1) + "/"
                + current.get(GregorianCalendar.DAY_OF_MONTH) + "/"
                + current.get(GregorianCalendar.YEAR));

        // create object of the time after 1234567898765 millis
        GregorianCalendar obj = new GregorianCalendar();
        obj.setTimeInMillis(1234567898765L);
        System.out.println("The time after 1234567898765 millis from 1/1/1970 is:");
        System.out.println((obj.get(GregorianCalendar.MONTH) + 1) + "/"
                + obj.get(GregorianCalendar.DAY_OF_MONTH) + "/"
                + obj.get(GregorianCalendar.YEAR));
    }
}
