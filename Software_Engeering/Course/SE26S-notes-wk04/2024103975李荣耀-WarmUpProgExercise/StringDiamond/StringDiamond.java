public class StringDiamond {
    // default string diamond
    public static String diamond() {
        return diamond(8, '*');
    }

    /**
     * overloading method: print self-defined string diamond
     * @param n size of half diamond
     * @param color the first is body character, the second is blank character
     * @return string of diamond
     */
    public static String diamond(int n, char... color) {
        if (n <= 0) {
            System.out.println("Error n input.");
            return null;
        }

        if (color.length == 0 || color.length > 2) {
            System.out.println("Error color input.");
            return null;
        }

        StringBuilder ret = new StringBuilder();
        char blank = (color.length > 1) ? (color[1]) : ' ';
        char body = color[0];

        // print the upper half diamond
        StringBuilder upperHalf = new StringBuilder();
        for (int i = 0; i < n - 1; i++) {
            StringBuilder blankPart = new StringBuilder();
            blankPart.repeat(blank, n - 1 - i);

            StringBuilder bodyPart = new StringBuilder();
            bodyPart.append(body);
            if (i > 0) {
                bodyPart.repeat(blank, i - 1);
                bodyPart.append(body);
                bodyPart.repeat(blank, i - 1);
                bodyPart.append(body);
            }

            upperHalf.append(blankPart.toString() + bodyPart.toString() + '\n');
        }

        // print the middle line
        StringBuilder midLine = new StringBuilder();
        midLine.repeat(body, 2 * n - 1);
        midLine.append('\n');

        // print the lower half diamond
        StringBuilder lowerHalf = new StringBuilder();
        for (int i = n - 2; i >= 0; i--) {
            StringBuilder blankPart = new StringBuilder();
            blankPart.repeat(blank, n - 1 - i);

            StringBuilder bodyPart = new StringBuilder();
            bodyPart.repeat(body, i);
            if (i == 0) {
                bodyPart.append(body);
            } else {
                bodyPart.append(blank);
            }
            bodyPart.repeat(body, i);

            lowerHalf.append(blankPart.toString() + bodyPart.toString() + '\n');
        }

        ret.append(upperHalf.toString() + midLine.toString() + lowerHalf.toString());

        return ret.toString();
    }
        
    public static void main(String[] args) {
        System.out.print(diamond());
        System.out.print(diamond(7, '$'));
        System.out.print(diamond(6, '@', '.'));
    }
}
