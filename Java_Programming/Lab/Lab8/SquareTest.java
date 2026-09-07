package Lab8;

import java.util.Scanner;

public class SquareTest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        GeometricObject[] objects = new GeometricObject[5];
        int len = 5;

        for (int i = 0; i < len; i++) {
            System.out.println("Enter the type of object (square/triangle): ");
            String type = sc.nextLine();
            if (type.equals("square")) {
                System.out.println("Enter the side of the square: ");
                double side = sc.nextDouble();
                sc.nextLine();

                System.out.println("Enter the color of the square: ");
                String color = sc.next();
                sc.nextLine();

                System.out.println("Enter whether the square is filled or not (true/false): ");
                boolean filled = sc.nextBoolean();
                sc.nextLine();

                objects[i] = new Square(color, filled, side);
            } else {
                System.out.println("Enter three sides of the triangle: ");
                double side1 = sc.nextDouble();
                double side2 = sc.nextDouble();
                double side3 = sc.nextDouble();
                sc.nextLine();

                System.out.println("Enter the color of the triangle: ");
                String color = sc.next();
                sc.nextLine();

                System.out.println("Enter whether the triangle is filled or not (true/false): ");
                boolean filled = sc.nextBoolean();
                sc.nextLine();

                objects[i] = new Triangle(side1, side2, side3, color, filled);
            }
        }

        for (GeometricObject obj : objects) {
            System.out.println(obj.toString());
            if (obj instanceof Colorable) {
                System.out.println("How to color the object: ");
                ((Colorable) obj).howToColor();
            }
            System.out.println();
        }

        sc.close();
    }
}
