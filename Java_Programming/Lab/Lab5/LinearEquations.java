package Lab5;

import java.util.Scanner;

public class LinearEquations {
    public static class LinearEquation {
        private double a, b, c, d, e, f;
        
        // constructor with arguments
        public LinearEquation(double a, double b, double c, double d, double e, double f) {
            this.a = a;
            this.b = b;
            this.c = c;
            this.d = d;
            this.e = e;
            this.f = f;
        }

        // getter methods
        public double getA() {
            return a;
        }

        public double getB() {
            return b;
        }

        public double getC() {
            return c;
        }

        public double getD() {
            return d;
        }

        public double getE() {
            return e;
        }

        public double getF() {
            return f;
        }

        // return true if ad-bc is not 0
        public boolean isSolvable() {
            return (a * d - b * c != 0);
        }

        // get x if it is solvable
        public double getX() {
            if (isSolvable()) {
                return (e * d - b * f) / (a * d - b * c);
            } else {
                throw new ArithmeticException("The equation has no solution.");
            }
        }

        // get y if it is solvable
        public double getY() {
            if (isSolvable()) {
                return (a * f - e * c) / (a * d - b * c);
            } else {
                throw new ArithmeticException("The equation has no solution.");
            }
        }
    }
    public static void main(String[] args) {
        System.out.println("Please enter the parameters of 2x2 system of linear equations.");
        Scanner sc = new Scanner(System.in);

        double a = sc.nextDouble();
        double b = sc.nextDouble();
        double c = sc.nextDouble();
        double d = sc.nextDouble();
        double e = sc.nextDouble();
        double f = sc.nextDouble();

        LinearEquation obj = new LinearEquation(a, b, c, d, e, f);

        System.out.println("The solution of the linear equations:");
        System.out.println("x: " + obj.getX());
        System.out.println("y: " + obj.getY());

        sc.close();
    }
}
