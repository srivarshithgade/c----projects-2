/*Project 1 — Student Performance Analyzer

Time: ~45 min | Difficulty: 2 

 Goal

Build a C program that takes a student's marks and generates a performance report.

Your program should:

1. Take input

Student name
Roll number
Marks in 5 subjects

2. Calculate

Total marks
Percentage

3. Determine grade
Use if / else if / else:

Percentage	Grade
90–100	A+
80–89	A
70–79	B
60–69	C
50–59	D
<50	F

4. Determine pass/fail

If any subject < 40 → Fail
Otherwise → Pass

5. Use a loop
Ask:

Do you want to analyze another student? (1 = Yes, 0 = No)

If 1, repeat the entire process.*/

#include <stdio.h>

int main() {


    char name[50];
    int rollno;

    int sci;
    int math;
    int social;
    int eng;
    int tel;
    int choice;

    for (;;) // keep repeating 
    {

        printf("\n====== STUDENT MARKS ANALYZER ======\n");

       

       printf("Enter the student name: \n");
       scanf("%s", name);

        printf("Enter the roll no:\n");
        scanf("%d", &rollno);

        printf("Enter science marks: \n");
        scanf("%d", &sci);

        printf("Enter math marks: \n");
        scanf("%d", &math);

        printf("Enter social marks:\n ");
        scanf("%d", &social);

        printf("Enter english marks: \n");
        scanf("%d", &eng);

        printf("Enter telugu marks: \n");
        scanf("%d", &tel);

        int tm = sci + math + social + eng + tel;

        printf("The total marks: %d\n", tm);

        float percentage = (float)tm / 5;

        printf("The percentage is %.2f\n", percentage);

        if (sci < 40 || math < 40 || social < 40 || eng < 40 || tel < 40) {
            printf("The student is FAILED\n");
        }
        else {
            printf("The student is PASSED\n");
        }

        if (percentage >= 90) {
            printf("The grade is: A+\n");
        }
        else if (percentage >= 80) {
            printf("The grade is: A\n");
        }
        else if (percentage >= 70) {
            printf("The grade is: B\n");
        }
        else if (percentage >= 60) {
            printf("The grade is: C\n");
        }
        else if (percentage >= 50) {
            printf("The grade is: D\n");
        }
        else {
            printf("The grade is: F\n");
        }

        printf("\nDo you want to analyze another student?\n");
        printf("Enter 1 for YES, 0 for NO: ");
        scanf("%d", &choice);

        if (choice == 0) {
            break;
        }
    }

    printf("\nProgram ended.\n");

    return 0;
}