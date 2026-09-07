package Lab4;

public class LockerPuzzle {
    /**
     * solve the locker puzzle
     * @param lockers the array to denote the situation of lockers, false is close and true is open
     */
    public static void solveLockerPuzzle(boolean[] lockers){
        int len = lockers.length;
        // i represents i+1-th student
        for (int i = 0; i < len; i++) {
            for (int j = i; j < len; j++) {
                // reverse the situation if satisfying the condition
                if ((j + 1) % (i + 1) == 0) {
                    lockers[j] = !lockers[j];
                }
            }
        }
    }

    public static void main(String[] args) {
        // initialize 100 lockers as false
        final int SIZE = 100;
        boolean[] lockers = new boolean[SIZE];

        solveLockerPuzzle(lockers);
        System.out.println("All indices of open lockers are:");

        int len = lockers.length;
        for (int i = 0; i < len; i++) {
            if (lockers[i]) {
                System.out.print(i + 1 + " ");
            }
        }
    }
}
