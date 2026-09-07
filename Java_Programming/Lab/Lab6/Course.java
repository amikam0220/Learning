package Lab6;

public class Course {
    private String courseName;
    private String[] students = new String[100];
    private int numberOfStudents;

    public Course(String courseName) {
        this.courseName = courseName;
    }

    public void addStudent(String student) {
        int len = students.length;
        if (numberOfStudents >= len) {
            String[] newStudents = new String[2 * len];
            for (int i = 0; i < len; i++) {
                newStudents[i] = students[i];
            }

            students = newStudents;
        }

        students[numberOfStudents] = student;
        numberOfStudents++;
    }

    public String[] getStudents() {
        int length = numberOfStudents;
        String[] students = new String[length];

        for (int i = 0; i < length; i++) {
            students[i] = this.students[i];
        }

        return students;
    }

    public int getNumberOfStudents() {
        return numberOfStudents;
    }

    public String getCourseName() {
        return courseName;
    }

    public void dropStudent(String student) {
        int index = -1;
        for (int i = 0; i < numberOfStudents; i++) {
            if (student.equals(students[i])) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            System.out.println(student + "does not exist");
            return;
        }

        for (int i = index; i < numberOfStudents - 1; i++) {
            students[i] = students[i + 1];
        }

        students[numberOfStudents - 1] = null;
        numberOfStudents--;
    }

    public void clear() {
        for (int i = 0; i < numberOfStudents; i++) {
            students[i] = null;
        }

        numberOfStudents = 0;
    }
}


