package Lab8;

public class Fraction {
    private int numerator;
    private int denominator;

    public Fraction(int numerator, int denominator) throws NullDenominatorException {
        if (denominator == 0) {
            throw new NullDenominatorException("The denominator cannot be zero.");
        }

        this.numerator = numerator;
        this.denominator = denominator;

    }
    
    // accessor methods
    public int getNumerator() {
        return numerator;
    }

    public int getDenominator() {
        return denominator;
    }

    // mutator methods
    public void setNumerator(int numerator) {
        this.numerator = numerator;
    }

    public void setDenominator(int denominator) throws NullDenominatorException {
        if (denominator == 0){
            throw new NullDenominatorException("The denominator cannot be zero.");
        }

        this.denominator = denominator;
    }


    public class NullDenominatorException extends Exception {
        public NullDenominatorException() {
            super();
        }

        public NullDenominatorException(String message) {
            super(message);
        }
    }
}
