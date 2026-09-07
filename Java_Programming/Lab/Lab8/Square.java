package Lab8;

public class Square extends GeometricObject implements Colorable {
    private double side;

    // constructor
    public Square() {
        this(0);
    }

    public Square(double side) {
        super();
        this.side = side;
    }

    public Square(String color, boolean filled, double side) {
        super(color, filled);
        this.side = side;
    }

    // setter
    public void setSide(double side) {
        this.side = side;
    }

    // getter
    public double getSide() {
        return side;
    }

    @Override
    public void howToColor() {
        System.out.println("Color all four sides");
    }

    public double getArea() {
        return side * side;
    }

    public double getPerimeter() {
        return 4 * side;
    }

    @Override
    public String toString() {
        return "Square: side = " + side + ", area = " + getArea() + ", perimeter = " + getPerimeter() + "\n"
                + super.toString();
    }

}
