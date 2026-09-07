package Lab4;

import java.util.Scanner;

public class AddTwoMatrices {
    /**
     * add two matrices
     * @param a the first matrix
     * @param b the second matrix
     * @return the result matrix
     */
    public static double[][] addMatrix(double[][] a, double[][] b) {
        // check whether two matrices have the same DIMensions
        if (a.length != b.length) {
            throw new IllegalArgumentException("Different DIMentions for matrices.");
        }

        // check whether the matrix is empty
        if (a == null || b == null || a.length == 0 || b.length == 0 || a[0] ==null || b[0] == null || a[0].length == 0 || b[0].length == 0) {
            throw new IllegalArgumentException("Invalid matrix.");
        }

        // obtain the row and col length
        int row = a.length;
        int col = a[0].length;

        double[][] res = new double[row][col];

        // add two matrices
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                res[i][j] = a[i][j] + b[i][j];
            }
        }

        return res;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        final int DIM = 2;
        double[][] matrix1 = new double[DIM][DIM];
        double[][] matrix2 = new double[DIM][DIM];

        // scan two matrices
        System.out.println("Enter matrix1 (2x2):");
        for (int i = 0; i < DIM; i++) {
            for (int j = 0; j < DIM; j++) {
                matrix1[i][j] = sc.nextDouble();
            }
        }

        System.out.println("Enter matrix2 (2x2):");
        for (int i = 0; i < DIM; i++) {
            for (int j = 0; j < DIM; j++) {
                matrix2[i][j] = sc.nextDouble();
            }
        }

        double[][] res = addMatrix(matrix1, matrix2);

        System.out.println("The matrices are added as follows");
        for (int i = 0; i < DIM; i++) {
            // print the same row of each matrix
            for (int j = 0; j < DIM; j++) {
                System.out.printf("%4.1f", matrix1[i][j]);
            }

            if (i == DIM - 1) {
                System.out.print("  + ");
            } else {
                System.out.print(" ".repeat(4));
            }

            for (int j = 0; j < DIM; j++) {
                System.out.printf("%4.1f", matrix2[i][j]);
            }

            if (i == DIM - 1) {
                System.out.print("  = ");
            } else {
                System.out.print(" ".repeat(4));
            }

            for (int j = 0; j < DIM; j++) {
                System.out.printf("%4.1f", res[i][j]);
            }

            System.out.println();
        }

        sc.close();
    }
}