package Lab4;

import java.util.Scanner;
import java.util.ArrayList;

public class ColumnSorting {
    /**
     * sort the columns of a matrix
     * @param m
     * @return sorted matrix
     */
    public static double[][] sortColumns(double[][] m) {
        if (m == null || m.length == 0 || m[0] == null || m[0].length == 0) {
            throw new IllegalArgumentException("Invalid matrix.");
        }

        // obtain row and column length
        int row = m.length;
        int col = m[0].length;
        double[][] res = new double[row][col];

        for (int j = 0; j < col; j++) {
            // create ArrayList to easily sort
            ArrayList<Double> elements = new ArrayList<Double>();
            for (int i = 0; i < row; i++) {
                elements.add(m[i][j]);
            }

            // sort increasingly
            elements.sort(null);

            // set value to res[i][j]
            for (int i = 0; i < row; i++) {
                res[i][j] = elements.get(i);
            }
        }

        return res;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        final int DIM = 4;
        double[][] matrix = new double[DIM][DIM];

        // scan the matrix
        System.out.println("Enter a 4-by-4 matrix row by row:");
        for (int i = 0; i < DIM; i++) {
            for (int j = 0; j < DIM; j++) {
                matrix[i][j] = sc.nextDouble();
            }
        }

        double[][] res = sortColumns(matrix);

        // output the sorted matrix
        System.out.println("The column-sorted array is");
        for (int i = 0; i < DIM; i++) {
            for (int j = 0; j < DIM; j++) {
                System.out.print(res[i][j] + " ");
            }
            System.out.println();
        }

        sc.close();
    }
}
