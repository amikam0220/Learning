package Lab2;

import java.util.Scanner;

public class Lottery {
    /**
     * sort the integers in non-decreasing order
     * @param arr the array storing integers
     */
    public static void sortIntegers(int[] arr) {
        int tmp;
        if (arr[0] < arr[1]) {
            tmp = arr[0];
            arr[0] = arr[1];
            arr[1] = tmp;
        }
        if (arr[1] < arr[2]) {
            tmp = arr[1];
            arr[1] = arr[2];
            arr[2] = tmp;
        }
    }

    /**
     * Generate the lottery and print the matching result
     * @param input the input number
     */
    public static void lotteryMatch(int input) {
        if (input < 0 || input > 999) {
            System.out.println("Incorrect input");
            System.exit(1);
        }
        // generate the result(0~999) randomly
        int result = (int) (Math.random() * 1000);

        // separate three digits
        int resHundred = result / 100;
        int resTen = (result % 100) / 10;
        int resOne = (result % 10);

        int inputHundred = input / 100;
        int inputTen = (input % 100) / 10;
        int inputOne = (input % 10);

        System.out.println("The result of the lottery is " + String.format("%03d", result));

        // match in the exact order
        if (resHundred == inputHundred && resTen == inputTen && resOne == inputOne) {
            System.out.println("Match in exact order, the award is $12000.");
        }
        // match 
        else {
            int[] res = { resHundred, resTen, resOne };
            int[] inp = { inputHundred, inputTen, inputOne };

            sortIntegers(res);
            sortIntegers(inp);

            int digitLen = 3;
            // the number of number matches
            int match = 0;

            for (int i = 0; i < digitLen; i++) {
                if (res[i] == inp[i]) {
                    match++;
                }
            }

            if (match == 3) {
                System.out.println("Match all digits in the lottery number, the award is $5,000");
            } else if (match != 0) {
                System.out.println("Match a digit in the lottery number, the award is $2,000");
            } else {
                System.out.println("No match");
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a three-digit number:");
        int input = sc.nextInt();
        if (input < 0 || input > 999) {
            System.err.println("Incorrect input");
            sc.close();
            return;
        }

        lotteryMatch(input);

        sc.close();
    }
}
