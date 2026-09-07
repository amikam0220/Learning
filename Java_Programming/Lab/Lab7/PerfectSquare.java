package Lab7;

import java.util.ArrayList;
import java.util.Scanner;

public class PerfectSquare {
    public static int findPerfectSquare(int m) {
        ArrayList<Integer> factors = new ArrayList<Integer>();

        // store all smallest factors of m in factors array list
        for (int i = 2; i * i <= m; i++) {
            while (m % i == 0) {
                factors.add(i);
                m /= i;
            }
        }

        if (m > 1) {
            factors.add(m);
        }

        // find all factors appearing in odd numbers
        factors.sort(null);
        int len = factors.size();
        int n = 1;
        int cnt = 1;
        for (int i = 0; i < len; i++) {
            if (i + 1 < len && factors.get(i) == factors.get(i + 1)) {
                cnt++;
            } else {
                if (cnt % 2 == 1) {
                    n *= factors.get(i);
                }

                cnt = 1;
            }
        }

        return n;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter an integer m: ");
        int m = sc.nextInt();
        int n = findPerfectSquare(m);
        System.out.println("The smallest number n for m * n to be a perfect square is " + n);
        System.out.println("m * n is " + m * n);

        sc.close();
    }
}
