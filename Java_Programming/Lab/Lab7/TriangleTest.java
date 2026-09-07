package Lab7;

import java.util.Scanner;

public class TriangleTest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Triangle t = new Triangle();

        System.out.println(
                "Please enter three sides, a color and a Boolean value to indicate whether the triangle is filled.");
        
        double side1 = sc.nextDouble();
        double side2 = sc.nextDouble();
        double side3 = sc.nextDouble();

        if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
            System.out.println("Invalid input. Please enter positive values for all sides.");
            sc.close();
            return;
        }

        String color = sc.next();
        boolean filled = sc.nextBoolean();

        
        t.setSide1(side1);
        t.setSide2(side2);
        t.setSide3(side3);
        t.setColor(color);
        t.setFilled(filled);

        System.out.println("Area: " + t.getArea());
        System.out.println("Perimeter: " + t.getPerimeter());
        System.out.println("Color: " + t.getColor());
        System.out.println("Filled: " + t.isFilled());

        sc.close();
    }
}
