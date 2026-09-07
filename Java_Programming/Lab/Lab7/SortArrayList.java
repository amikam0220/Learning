package Lab7;

import java.util.ArrayList;
import java.util.Scanner;

public class SortArrayList {
    public static void sort(ArrayList<Integer> list) {
        // sort the list by increasing order
        list.sort(null);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> numbers = new ArrayList<Integer>();

        System.out.println("Please enter five numbers, separated by space:");
        int cnt = 5;
        while (cnt > 0) {
            numbers.add(sc.nextInt());
            cnt--;
        }

        sort(numbers);

        System.out.println("Sorted list:");
        for (int num : numbers) {
            System.out.print(num + " ");
        }

        System.out.println();

        sc.close();
    }
}
