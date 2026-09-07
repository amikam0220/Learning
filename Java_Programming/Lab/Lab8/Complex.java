package Lab8;

public class Complex implements Cloneable, Comparable<Complex>{
    private double a;
    private double b;

    // constructors
    public Complex(double a, double b) {
        this.a = a;
        this.b = b;
    }

    public Complex(double a) {
        this(a, 0);
    }

    public Complex() {
        this(0, 0);
    }

    // Getter methods
    public double getRealPart() {
        return a;
    }

    public double getImaginaryPart() {
        return b;
    }

    // Arithmetic operations
    public Complex add(Complex other) {
        return new Complex(this.a + other.a, this.b + other.b);
    }

    public Complex subtract(Complex other) {
        return new Complex(this.a - other.a, this.b - other.b);
    }

    public Complex multiply(Complex other) {
        double real = this.a * other.a - this.b * other.b;
        double imag = this.b * other.a + this.a * other.b;
        return new Complex(real, imag);
    }

    public Complex divide(Complex other) {
        double denom = other.a * other.a + other.b * other.b;
        if (denom == 0)
            throw new ArithmeticException("Division by zero");
        double real = (this.a * other.a + this.b * other.b) / denom;
        double imag = (this.b * other.a - this.a * other.b) / denom;
        return new Complex(real, imag);
    }

    public double abs() {
        return Math.sqrt(a * a + b * b);
    }

    @Override
    public String toString() {
        if (b == 0) {
            return Double.toString(a);
        }

        return "(" + a + " + " + b + "i)";
    }

    // implement Cloneable
    @Override
    public Complex clone() {
        try {
            return (Complex) super.clone();
        } catch (CloneNotSupportedException e) {
            return new Complex(this.a, this.b);
        }
    }
    
    // implement Comparable
    @Override
    public int compareTo(Complex other) {
        return Double.compare(this.abs(), other.abs());
    }
}
