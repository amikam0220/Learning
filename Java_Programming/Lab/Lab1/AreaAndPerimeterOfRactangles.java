public class AreaAndPerimeterOfRactangles {
    // class of ractangle
    public static class Ractangle {
        // members of ractangle
        private double height;
        private double width;

        // constructor to initiaize height and width
        public Ractangle(double height, double width) {
            this.height = height;
            this.width = width;
        }

        // compute area
        public double computeArea() {
            return height * width;
        }

        // compute perimeter
        public double computePerimeter() {
            return 2.0 * (height + width);
        }
    }

    public static void main(String[] args) {
        // calcultate the area and perimeter of a certain ractangle
        Ractangle rac = new Ractangle(8.6, 5.3);
        System.out.println("Area: " + rac.computeArea());
        System.out.println("Perimeter: " + rac.computePerimeter());
    }
}
