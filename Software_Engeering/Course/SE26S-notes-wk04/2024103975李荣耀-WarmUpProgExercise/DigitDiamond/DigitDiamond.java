public class DigitDiamond {
    /**
     * method to print the diamond
     * @param lineNum the number of the lines of the diamond
     */
    public static void printDiamond(int lineNum) {
        int midLine = lineNum / 2;

        // print the upper half diamond
        for (int i = 0; i <= midLine; i++) {
            printLine(i, midLine);
        }

        // print the lower half diamond
        for (int i = midLine - 1; i >= 0; i--) {
            printLine(i, midLine);
        }
    }
    
    // method to print single line in the diamond
    public static void printLine(int row, int midLine) {
        // construct the former space
        StringBuilder space = new StringBuilder();
        space.repeat(' ', 2 * (midLine - row));
        
        StringBuilder num = new StringBuilder();

        // construct the number before the middle column
        for (int i = midLine - row; i <= midLine; i++) {
            if (num.length() > 0) {
                num.append(" ");
            }
            num.append(midLine - i);
        }

        // construct the number after the middle column
        for (int i = midLine + 1; i <= midLine + row; i++) {
            num.append(" ");
            num.append(i - midLine);
        }

        System.out.println(space.toString() + num.toString());
    }
    public static void main(String[] args) {
        printDiamond(19);
    }
}
