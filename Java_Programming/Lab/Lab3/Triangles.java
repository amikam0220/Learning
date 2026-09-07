import java.util.Scanner;

public class Triangles {
    /**
     * Return true if the sum of every two sides greater than the third side.
     * @param side1
     * @param side2
     * @param side3
     * @return true or false
     */
    public static boolean isValid(double side1, double side2, double side3) {
        return (side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2);
    }

    /**
     * Return the area of the triangle.
     * @param side1
     * @param side2
     * @param side3
     * @return the area of the triangle
     */
    public static double area(double side1, double side2, double side3) {
        if (!isValid(side1, side2, side3)) {
            System.out.println("The input is invalid.");
            return 0;
        }

        double s = (side1 + side2 + side3) / 2;
        return Math.sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Please enter the sides of the triangle, separate by space:");
        double side1 = sc.nextDouble();
        double side2 = sc.nextDouble();
        double side3 = sc.nextDouble();

        if (!isValid(side1, side2, side3)) {
            System.out.println("Invalid input");
            sc.close();
            return;
        }

        System.out.printf("The area of the triangle is: %.2f\n", area(side1, side2, side3));

        sc.close();
    }
}
