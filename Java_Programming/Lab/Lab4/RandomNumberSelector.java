package Lab4;

public class RandomNumberSelector {
    /**
     * return a random number from a list of numbers
     * @param numbers
     * @return a random number in a list of numbers
     */
    public static int getRandom(int... numbers) {
        // handle argument exception
        if (numbers == null || numbers.length == 0) {
            throw new IllegalArgumentException("Empty array.");
        }
        // generate random index
        int idx = (int) (Math.random() * numbers.length);
        return numbers[idx];
    }

    public static void main(String[] args) {
        int[] numbers = { 34, 13, 78, 29, 91, 114, 514, 1919, 810, 11037 };
        System.out.println("The elements in the array are:");
        for (int ele : numbers) {
            System.out.print(ele + " ");
        }
        System.out.println();

        System.out.println("A random number from the array:");
        System.out.println(getRandom(numbers));
    }
}
