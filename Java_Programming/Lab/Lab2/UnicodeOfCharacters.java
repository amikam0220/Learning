package Lab2;

import java.util.Scanner;

public class UnicodeOfCharacters {
    /**
     * print the unicode of a character
     * @param ch the character
     */
    public static void printUnicode(char ch) {
        //force type cast
        int Unicode = (int) ch;
        System.out.println("The Unicode for the character " + ch + " is " + Unicode);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a character:");
        char ch = sc.next().charAt(0);
        printUnicode(ch);

        sc.close();
    }
}
