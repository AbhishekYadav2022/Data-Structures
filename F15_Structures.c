#include <stdio.h>
int main()
{
    struct studentDetails
    {
        char name[30];
        char fName[30];
        char course[30];
        int rollNo;
        char mobile[11];
        float fees;
    } std;

    printf("Enter student's name: ");
    scanf("%c", std.name);

    printf("Enter student's father's name: ");
    scanf("%s", std.fName);

    printf("Enter student's course name: ");
    scanf("%s", std.course);

    printf("Enter student's roll no: ");
    scanf("%d", &std.rollNo);

    printf("Enter student's mobile no: ");
    scanf("%s", std.mobile);

    printf("Enter student's fees: ");
    scanf("%f", &std.fees);

    printf("\nStudent's Name: %s\n", std.name);
    printf("Student's Father's Name: %s\n", std.fName);
    printf("Student's Course: %s\n", std.course);
    printf("Student's Roll No.: %d\n", std.rollNo);
    printf("Student's Mobile No.: %s\n", std.mobile);
    printf("Student's Fees: %f\n", std.fees);

    return 0;
}