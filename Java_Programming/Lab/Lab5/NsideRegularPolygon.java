package Lab5;

public class NsideRegularPolygon {
    public static class RegularPolygon {
        private int n = 3;
        private double side = 1;
        private double x = 0;
        private double y = 0;

        // no-arg constructor
        public RegularPolygon() {
        }

        // constructor to create a regular polygon with specified n, side and default x, y
        public RegularPolygon(int n, double side) {
            this.n = n;
            this.side = side;
        }

        // constructor to create a regular polygon with specified n, side, x and y
        public RegularPolygon(int n, double side, double x, double y) {
            this.n = n;
            this.side = side;
            this.x = x;
            this.y = y;
        }

        // accessors and mutators for all data fields
        public int getN() {
            return n;
        }

        public double getSide() {
            return side;
        }

        public double getX() {
            return x;
        }

        public double getY() {
            return y;
        }

        public void setN(int n) {
            this.n = n;
        }

        public void setSide(double side) {
            this.side = side;
        }

        public void setX(double x) {
            this.x = x;
        }

        public void setY(double y) {
            this.y = y;
        }

        // return the perimeter of the polygon
        public double getPerimeter() {
            return n * side;
        }

        // return the area of the polygon
        public double getArea() {
            return (n * side * side) / (4 * Math.tan(Math.PI / n));
        }
    }
    
    public static void main(String[] args) {
        RegularPolygon obj1 = new RegularPolygon();
        RegularPolygon obj2 = new RegularPolygon(6, 4);
        RegularPolygon obj3 = new RegularPolygon(10, 4, 5.6, 7.8);

        System.out.println("The parimeter and area of the first regular polygon");
        System.out.printf("Perimeter: %.2f; Area: %.3f\n", obj1.getPerimeter(), obj1.getArea());

        System.out.println("The parimeter and area of the second regular polygon");
        System.out.printf("Perimeter: %.2f; Area: %.3f\n", obj2.getPerimeter(), obj2.getArea());

        System.out.println("The parimeter and area of the third regular polygon");
        System.out.printf("Perimeter: %.2f; Area: %.3f\n", obj3.getPerimeter(), obj3.getArea());
    }
}
