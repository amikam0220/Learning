package Lab6;

public class Rational {
    private int numerator;
    private int denominator;

    // constructor
    public Rational(int numerator, int denominator) {
        if (denominator == 0) {
            throw new IllegalArgumentException("Denomitor cannot be zero.");
        }
        this.numerator = numerator;
        this.denominator = denominator;
    }

    // getters
    public int getNumerator() {
        return numerator;
    }

    public int getDenominator() {
        return denominator;
    }

    // return rational object after reduction of a fraction
    public Rational normalize() {
        int gcd = findGCD(numerator, denominator);
        int newDeno = denominator / gcd;
        int newNume = numerator / gcd;

        // put the minus on the numerator
        if (newDeno < 0) {
            newNume *= -1;
            newDeno *= -1;
        }

        return new Rational(newNume, newDeno);
    }

    // auxiliary method to find the gcd
    private static int findGCD(int a, int b) {
        a = Math.abs(a);
        b = Math.abs(b);

        while (b != 0) {
            int tmp = b;
            b = a % b;
            a = tmp;
        }

        return a;
    }

    // judge whether it is integer
    public boolean isWhole() {
        Rational newRational = this.normalize();
        return newRational.getDenominator() == 1;
    }

    // judge whether it is decimal
    public boolean isDecimal() {
        return !isWhole();
    }

    // judge whether two rationals are equivalent
    public boolean equals(int numerator, int denominator) {
        Rational newRat = new Rational(numerator, denominator).normalize();

        Rational thisRat = this.normalize();

        return newRat.numerator == thisRat.numerator && newRat.denominator == thisRat.denominator;
    }

    // override: receive the object
    public boolean equals(Rational r) {
        return equals(r.numerator, r.denominator);
    }

    // convert two arrays of numeric characters to a Rational object
    public static Rational parseRational(char[] numerator, char[] denominator) {
        int nume = Integer.parseInt(new String(numerator));
        int deno = Integer.parseInt(new String(denominator));

        return new Rational(nume, deno);
    }
    
    // override: receive string seperated by '/' to a Rational object
    public static Rational parseRational(String r) {
        String[] s = r.split("/");
        int nume = Integer.parseInt(s[0].trim());
        int deno = Integer.parseInt(s[1].trim());

        return new Rational(nume, deno);
    }
}
