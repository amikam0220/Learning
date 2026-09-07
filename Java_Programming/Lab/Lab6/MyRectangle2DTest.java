package Lab6;

public class MyRectangle2DTest {
    public static void main(String[] args) {
        MyRectangle2D r1 = new MyRectangle2D(2, 2, 5.5, 4.9);
        System.out.println("The area of r1: " + r1.getArea());
        System.out.println("The parimeter of r1: " + r1.getParimeter());

        System.out.println(r1.contains(3, 3)
            ? "r1 contains (3,3)"
            : "r1 does not contain (3,3)");
        System.out.println(r1.contains(new MyRectangle2D(4, 5, 10.5, 3.2))
            ? "r1 contains rectangle with 10.5 width and 3.2 height, centered (4,5)"
                : "r1 does not contain rectangle with 10.5 width and 3.2 height, centered (4,5)");
            
        System.out.println(r1.overlaps(new MyRectangle2D(3, 5, 2.3, 5.4))
            ? "r1 overlaps rectangle with 2.3 width and 5.4 height, centered (3,5)"
            : "r1 does not overlap rectangle with 2.3 width and 5.4 height, centered (3,5)");
    }
}
