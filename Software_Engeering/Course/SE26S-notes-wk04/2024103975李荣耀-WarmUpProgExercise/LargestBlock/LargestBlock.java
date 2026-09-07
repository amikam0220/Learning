import java.util.Scanner;

public class LargestBlock {
    /**
     * 
     * @param a the original matrix 
     * @param n the size of matrix
     */
    public static void findLargestBlock(int[][] a, int n) {
        // return illegal matrix
        if (a == null || a.length == 0 || a[0].length == 0) {
            System.out.println("Error matrix input.");
            return;
        }
        // create another matrix to denote the maximum sub-matrix
        int[][] s = new int[n][n];
        
        // initial the last row and colomn of s
        for (int i = 0; i < n; i++) {
            s[n - 1][i] = a[n - 1][i];
            s[i][n - 1] = a[i][n - 1];
        }

        // dynamic planning to blank from down to up, from right to left
        for (int i = n - 2; i >= 0; i--) {
            for (int j = n - 2; j >= 0; j--) {
                s[i][j] = (a[i][j] == 0) ? 0 : 1 + Integer.min(Integer.min(s[i + 1][j], s[i][j + 1]), s[i + 1][j + 1]);
            }
        }

        // tranverse to find the max element and its position
        int max = s[0][0];
        int imax = 0;
        int jmax = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (s[i][j] > max){
                    max = s[i][j];
                    imax = i;
                    jmax = j;
                }
            }
        }

        System.out.println("The maximum square matrix is at (" + imax + ", " + jmax + ") with size " + max);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows in the matrix:");
        int n = sc.nextInt();

        if (n <= 0) {
            System.out.println("Error size of matrix.");
            sc.close();
            return;
        }

        System.out.println("Enter the matrix row by row:");
        int[][] a = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = sc.nextInt();
            }
        }

        findLargestBlock(a, n);

        sc.close();
    }
}
