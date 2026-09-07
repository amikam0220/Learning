package Lab6;

public class MyRectangle2D {
    private double x;
    private double y;
    private double width;
    private double height;

    // getters
    public double getWidth() {
        return width;
    }

    public double getHeight() {
        return height;
    }

    // setters
    public void setWidth(double width) {
        this.width = width;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    // no-arg constructor
    public MyRectangle2D() {
        x = 0;
        y = 0;
        width = 1;
        height = 1;
    }

    // specified constructor
    public MyRectangle2D(double x, double y, double width, double height) {
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
    }

    // return the area
    public double getArea() {
        return width * height;
    }

    // return the parimeter
    public double getParimeter() {
        return 2 * (width + height);
    }

    public boolean contains(double x, double y) {
        double dx = width / 2;
        double dy = height / 2;

        double thisLeftLimit = x - dx;
        double thisRightLimit = x + dx;
        double thisDownLimit = y - dy;
        double thisUpLimit = y + dy;

        return (x < thisRightLimit && x > thisLeftLimit && y < thisUpLimit + dy && y > thisDownLimit);
    }

    public boolean contains(MyRectangle2D r) {
        double xRightLimit = r.x + r.width /
                2;
        double xLeftLimit = r.x - r.width / 2;
        double yRightLimit = r.y + r.height / 2;
        double yLeftLimit = r.y - r.height / 2;

        double dx = this.width / 2;
        double dy = this.height / 2;

        double thisLeftLimit = x - dx;
        double thisRightLimit = x + dx;
        double thisDownLimit = y - dy;
        double thisUpLimit = y + dy;

        return (xRightLimit < thisRightLimit && xLeftLimit > thisLeftLimit && yRightLimit < thisUpLimit
                && yLeftLimit > thisDownLimit);
    }

    public boolean overlaps(MyRectangle2D r) {
        double xRightLimit = r.x + r.width /
                2;
        double xLeftLimit = r.x - r.width / 2;
        double yRightLimit = r.y + r.height / 2;
        double yLeftLimit = r.y - r.height / 2;

        double dx = this.width / 2;
        double dy = this.height / 2;

        double thisLeftLimit = x - dx;
        double thisRightLimit = x + dx;
        double thisDownLimit = y - dy;
        double thisUpLimit = y + dy;

        boolean noOverlap = (thisRightLimit < xLeftLimit) || (thisLeftLimit > xRightLimit) || (thisUpLimit < yLeftLimit)
                || (thisDownLimit > yRightLimit);

        return !noOverlap;
    }
}
