package Lab6;

public class RationalTest {
    public static void main(String[] args) {
        System.out.println("1. Test constructors and normalization");
        Rational r1 = new Rational(4, 8);
        System.out.println("Original: " + r1.getNumerator() + "/" + r1.getDenominator());
        System.out.println("Normalized: " + r1.normalize().getNumerator() + "/" + r1.normalize().getDenominator());
        // test positive
        Rational r2 = new Rational(-2, -3);
        System.out.println("Original: " + r2.getNumerator() + "/" + r2.getDenominator());
        System.out.println("Normalized: " + r2.normalize().getNumerator() + "/" + r2.normalize().getDenominator());

        System.out.println("2. Test isWhole() and isDecimal()");
        Rational r3 = new Rational(6, 3);
        System.out.println(r1.isWhole() ? "r1 is whole." : "r1 is decimal.");
        System.out.println(r3.isDecimal() ? "r3 is decimal." : "r3 is whole.");

        System.out.println("3. Test equal()");
        Rational r4 = new Rational(2, 4);
        System.out.println(r4.equals(r1) ? "r4 are equal to r1" : "r4 are not equal to r1");
        System.out.println(r4.equals(3, 4) ? "r4 are equal to 3/4" : "r4 are not equal to 3/4");

        System.out.println("4. Test parseRational()");
        char[] nume = { '1', '2' };
        char[] deno = { '6' };
        Rational r5 = Rational.parseRational(nume, deno);
        System.out.println("r5: " + r5.getNumerator() + '/' + r5.getDenominator());
        Rational r6 = Rational.parseRational("8/31");
        System.out.println("r6: " + r6.getNumerator() + '/' + r6.getDenominator());
    }
}
