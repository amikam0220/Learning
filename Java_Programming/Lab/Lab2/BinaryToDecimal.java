package Lab2;

import java.util.Scanner;

public class BinaryToDecimal {
    /**
     * transform the binary to decimal(unsigned)
     * @param bitString binary string
     * @return decimal of binary string
     */
    public static int B2U(String bitString) {
        int len = bitString.length();
        // check illegal length
        if (len > 4) {
            System.out.println("Error length of bit string");
            System.exit(1);
        }
        
        int decimal = 0;
        int mul = 1;

        // multiple corresponding digit and add to result
        for (int i = len - 1; i >= 0; i--) {
            char ch = bitString.charAt(i);
            if (ch != '0' && ch != '1') {
                System.out.println("Incorrect input of binary string");
                System.exit(1);;
            }
            decimal += (ch - '0') * mul;
            mul *= 2;
        }

        return decimal;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter binary digits (0000 to 1111):");
        String bitString = sc.next();

        System.out.println("The decimal value is " + B2U(bitString));
        
        sc.close();
    }
}
