package Lab5;

public class TheRectangleClass {
    public static class Rectangle {
        private double width = 1;
        private double height = 1;

        // no-arg constructor to create a default rectangle
        public Rectangle() { 
        };

        // constructor with specified width and height
        public Rectangle(double width, double height) {
            this.width = width;
            this.height = height;
        }

        public void setWidth(double width) {
            this.width = width;
        }

        public void setHeight(double height) {
            this.height = height;
        }

        public double getWidth() {
            return width;
        }

        public double getHeight() {
            return height;
        }

        // method to get area
        public double getArea() {
            return width * height;
        }

        // method to get perimeter
        public double getPerimeter() {
            return 2 * (width + height);
        }

    }
    public static void main(String[] args) {
        Rectangle rec1 = new Rectangle(4, 40);
        Rectangle rec2 = new Rectangle(3.5, 35.9);

        System.out.println("The width, height, area, and perimeter"
                + "of the first rectangle are "
                + rec1.getWidth() + " "
                + rec1.getHeight() + " "
                + rec1.getArea() + " "
                + rec1.getPerimeter());

        System.out.println("The width, height, area, and perimeter"
                + "of the first rectangle are"
                + rec2.getWidth() + " "
                + rec2.getHeight() + " "
                + rec2.getArea() + " "
                + rec2.getPerimeter());
    }
}
