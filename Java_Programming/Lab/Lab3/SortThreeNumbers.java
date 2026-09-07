import java.util.Scanner;

public class SortThreeNumbers {
    /**
     * display three numbers in decreasing order
     * @param num1 the first number
     * @param num2 the second number
     * @param num3 the third number
     */
    public static void displaySortedNumbers(double num1, double num2, double num3) {
        double temp;
        if (num1 < num2) {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
        if (num1 < num3) {
            temp = num1;
            num1 = num3;
            num3 = temp;
        }
        if (num2 < num3) {
            temp = num2;
            num2 = num3;
            num3 = temp;
        }

        System.out.println(num1);
        System.out.println(num2);
        System.out.println(num3);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Please enter three numbers: ");
        double num1 = sc.nextDouble();
        double num2 = sc.nextDouble();
        double num3 = sc.nextDouble();

        System.out.println();
        displaySortedNumbers(num1, num2, num3);

        sc.close();
    }
}