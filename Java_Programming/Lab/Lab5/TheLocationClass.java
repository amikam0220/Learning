package Lab5;

import java.util.Scanner;

public class TheLocationClass {
    public static class Location {
        public int row;
        public int column;
        public double maxValue;

        // default constructor
        public Location() {
        }
        
        // constructor to set row and column
        public Location(int row, int column) {
            this.row = row;
            this.column = column;
        }
    }

    // return the location of the largest element
    public static Location locateLargest(double[][] a) {
        if (a.length == 0 || a[0].length == 0 || a == null || a[0] == null) {
            throw new IllegalArgumentException("Error two-dimensional array.");
        }
        Location ret = new Location();

        int row = a.length;
        int col = a[0].length;
        
        int i = 0, j = 0;
        int maxRow = 0, maxCol = 0;
        double max = a[0][0];
        
        // find the max value
        for (i = 0; i < row; i++) {
            for (j = 0; j < col; j++) {
                if (a[i][j] > max) {
                    max = a[i][j];
                    maxRow = i;
                    maxCol = j;
                }
            }
        }
        
        // assign row, column and maxvalue to 
        ret.row = maxRow;
        ret.column = maxCol;
        ret.maxValue = max;

        return ret;
    }

    public static void main(String[] args) {
        System.out.println("Enter the number of rows and columns in the array");

        Scanner sc = new Scanner(System.in);
        int row = sc.nextInt();
        int column = sc.nextInt();
        double[][] arr = new double[row][column];

        System.out.println("Enter the array:");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                arr[i][j] = sc.nextDouble();
            }
        }

        Location maxLocation = new Location();
        maxLocation = locateLargest(arr);
        System.out.println("The location of the largest element is " + maxLocation.maxValue + " at (" + maxLocation.row
                + ", " + maxLocation.column + ")");
        
        sc.close();
    }
}
