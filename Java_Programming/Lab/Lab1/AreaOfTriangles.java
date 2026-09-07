import java.util.Scanner;

public class AreaOfTriangles {
    public static class TrianglesAreaCalculator {
        private double side1, side2, side3;
        private double area;

        // initialize sides by passing x and y coordinates of each vertex
        public TrianglesAreaCalculator(double x1, double y1, double x2, double y2, double x3, double y3) {
            side1 = Math.sqrt(Math.pow(x2 - x1, 2) + Math.pow(y2 - y1, 2));
            side2 = Math.sqrt(Math.pow(x3 - x2, 2) + Math.pow(y3 - y2, 2));
            side3 = Math.sqrt(Math.pow(x1 - x3, 2) + Math.pow(y1 - y3, 2));
        }

        // get area of the triangle
        public double getArea() {
            return area;
        }

        // calculate the area of the triangle
        public void calculateArea() {
            double s = (side1 + side2 + side3) / 2;
            area = Math.sqrt(s * (s - side1) * (s - side2) * (s - side3));
        }
    }
    
    public static void main(String[] args) {
        // create a scanner object to read input
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the coordinates of three points separated by spaces\r\n" +
                            "like x1 y1 x2 y2 x3 y3:");
        double x1 = input.nextDouble();
        double y1 = input.nextDouble();
        double x2 = input.nextDouble();
        double y2 = input.nextDouble();
        double x3 = input.nextDouble();
        double y3 = input.nextDouble();

        // calculate the area of the triangle
        TrianglesAreaCalculator result = new TrianglesAreaCalculator(x1, y1, x2, y2, x3, y3);
        result.calculateArea();
        System.out.printf("The area of the triangle is: %.1f", result.getArea());

        input.close();
    }
}
