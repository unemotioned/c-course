#include <stdbool.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float gpa;
    bool is_full_time;
} Student;

void print_student(Student student);

int main() {

    // struct == A custom container that holds multiple
    //           pieces of related information.
    //           Similar to Objects in other languages.

    Student student1 = {"Spongebob", 30, 2.5, true};
    Student student2 = {"Patrick", 36, 1.0, false};
    Student student3 = {"Squidward", 48, 3.2, false};

    // will use the leftover data from last memory address
    // Student student4;

    // set all the values to 0
    Student student4 = {0};

    // declare and assigns values late
    // strcpy(student4.name, "Sandy"); // strcpy for string values
    strncpy(student4.name, "Sandy",
            5); // strncpy: safely copy specified amount of chars
    student4.age = 27;
    student4.gpa = 4.0;
    student4.is_full_time = true;

    print_student(student1);
    print_student(student2);
    print_student(student3);
    print_student(student4);

    return 0;
}

void print_student(Student student) {
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Full-time: %s\n", (student.is_full_time) ? "Yes" : "No");
    printf("\n");
}
