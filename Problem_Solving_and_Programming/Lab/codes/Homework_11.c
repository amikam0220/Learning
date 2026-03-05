#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 30
struct Student
{
    char name[MAX_NAME_LENGTH];
    float gpa;
};
void printStudent(struct Student* students, int numStudents);
void sortgpa(struct Student *students, int numStudents);
void sortname(struct Student *students, int numStudents);
int main()
{
    struct Student students[MAX_STUDENTS];
    int numStudents;
    printf("Please enter the number of students.\n");
    scanf("%d", &numStudents);
    for (int i = 0; i < numStudents; i++)
    {
        printf("Please enter the name of student %d.\n", i);
        scanf("%s", students[i].name);
        printf("Please enter the gpa of student %d.\n", i);
        scanf("%f", &students[i].gpa);
    }
    sortgpa(students, numStudents);
    printStudent(students, numStudents);
    sortname(students, numStudents);
    printStudent(students, numStudents);
    return 0;
}
void printStudent(struct Student* students, int numStudents){
    for (int i = 0; i < numStudents; i++){
        printf("The name of student %d is %s, and the gpa is %.2f\n", i, students[i].name, students[i].gpa);
    }
}
void sortgpa(struct Student *students, int numStudents){
    while (numStudents --){
    for (int i = 0; i < numStudents; i++){
            if (students[i].gpa < students[i + 1].gpa){
                struct Student temp = students[i];
                students[i] = students[i + 1];
                students[i + 1] = temp;
            }
        }
    }
}
void sortname(struct Student *students, int numStudents){
    while (numStudents --){
        for (int i = 0; i < numStudents; i++){
            if (strcmp(students[i].name, students[i + 1].name) < 0){
                struct Student temp = students[i];
                students[i] = students[i + 1];
                students[i + 1] = temp;
            }
        }
    }
}