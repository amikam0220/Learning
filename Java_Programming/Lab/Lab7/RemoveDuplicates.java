package Lab7;

import java.util.Scanner;
import java.util.ArrayList;

public class RemoveDuplicates {
    public static void removeDuplicate(ArrayList<Integer> list) {
        int len = list.size();
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                if (list.get(i) == list.get(j)) {
                    list.remove(j);
                    len--;
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> list = new ArrayList<Integer>();
        System.out.println("Enter 10 integers: ");
        int len = 10;
        for (int i = 0; i < len; i++) {
            list.add(sc.nextInt());
        }

        removeDuplicate(list);
        len = list.size();
        System.out.println("The distinct integers are: ");
        for (int i = 0; i < len; i++) {
            System.out.print(list.get(i) + " ");
        }

        sc.close();
    }
}
