public class DragonCurve {

    /**
     * 
     * @param n the order of the Dragon Curve
     * @return the string of instructions
     */
    public static String solveDragonCurve(int n) {
        // error case and base case
        if (n < 0)
            return null;
        if (n == 0)
            return "F";

        String iniString = solveDragonCurve(n - 1);
        // generate reverse string for the problem
        String reverseString;
        reverseString = reverseOrder(iniString);
        // recursively get the solution of Dragon Curve in order n
        return iniString + "L" + reverseString;
    }

    // method to reverse the string and replace corresponding instructions
    public static String reverseOrder(String str) {
        // reverse the string str
        StringBuilder ret = new StringBuilder(str).reverse();

        // replace L and R
        int len = str.length();
        for (int i = 0; i < len; i++) {
            char tmp = ret.charAt(i);
            if (tmp == 'R') {
                ret.setCharAt(i, 'L');
            } else if (tmp == 'L') {
                ret.setCharAt(i, 'R');
            }
        }

        return ret.toString();
    }

    public static void main(String[] args) {
        // check arguments in command line
        if (args.length == 0) {
            System.out.println("Please enter the order of dragon curve.");
            return;
        }

        try {
            int n = Integer.parseInt(args[0]);
            if (n < 0) {
                System.out.println("The order should be larger than 0.");
                return;
            }

            // generate the instructions
            String result = solveDragonCurve(n);
            System.out.println("The instructions to draw the dragon curve are:");
            System.out.println(result);
        } catch (NumberFormatException e) {
            System.out.println("Please enter valid integer.");
        }
    }
}