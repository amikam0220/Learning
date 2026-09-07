package Lab8;

import Lab8.Fraction.NullDenominatorException;

public class FractionTest {
    public static void main(String[] args) {
        try{
            Fraction f = new Fraction(2, 0);
        } catch (NullDenominatorException e) {
            System.out.println(e.getMessage());
        }

    }
}
