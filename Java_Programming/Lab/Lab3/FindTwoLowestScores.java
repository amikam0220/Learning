import java.util.Scanner;

public class FindTwoLowestScores {
    // class of a single student
    public static class Student {
        private String name;
        private double score;

        public Student(String name, double score) {
            this.name = name;
            this.score = score;
        }

        public String getName() {
            return name;
        }

        public double getScore() {
            return score;
        }

        public void setName(String name) {
            this.name = name;
        }

        public void setScore(double score) {
            this.score = score;
        }
    }

    /**
     * find two lowest scores and print them and corresponding name
     * @param s the array of students
     */
    public static void printTwoLowestScores(Student[] s, int num) {
        double[] scores = new double[num];
        int idx1 = 0, idx2 = 0;
        for (int i = 0; i < num; i++) {
            scores[i] = s[i].getScore();
        }

        // find the lowest score
        for (int i = 0; i < num; i++) {
            if (scores[i] < scores[idx1]) {
                idx1 = i;
            }
        }

        // find the second lowest score
        for (int i = 0; i < num; i++) {
            if (scores[i] < scores[idx2] && i != idx1) {
                idx2 = i;
            }
        }

        // print the two lowest scores and corresponding name
        System.out.println("The lowest student: " + s[idx1].getName() + "; Score: " + scores[idx1]);
        System.out.println("The second lowest student: " + s[idx2].getName() + "; Score: " + scores[idx2]);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Please enter the number of students.");
        int num = sc.nextInt();

        System.out.println("Please enter the name and score of each student. Like \"Leon 11037\"");
        Student[] s = new Student[num];
        for (int i = 0; i < num; i++) {
            String name = sc.next();
            double score = sc.nextDouble();
            s[i] = new Student(name, score);
        }

        printTwoLowestScores(s, num);
        sc.close();
    }
}
