#include <stdio.h>
#include <string.h>

struct student
{
    int roll_no;
    char name[20];
    int marks;
    char grade;
};

int main()
{
    int i, n, found = 0;
    struct student s[10];
    char sname[20];

    printf("Enter the number of student details n = ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter the %d student details:\n", i + 1);

        printf("Enter the Roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter the student name: ");
        scanf("%s", s[i].name);

        printf("Enter the marks: ");
        scanf("%d", &s[i].marks);

        printf("Enter the grade: ");
        scanf(" %c", &s[i].grade);   // space avoids newline issue
    }

    printf("\nRollNo\tName\tMarks\tGrade\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\t%c\n",
               s[i].roll_no, s[i].name, s[i].marks, s[i].grade);
    }

    printf("\nEnter the student name to print the marks: ");
    scanf("%s", sname);

    for(i = 0; i < n; i++)
    {
        if(strcmp(s[i].name, sname) == 0)
        {
            printf("Marks of the student is: %d\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Given student name not found\n");

    return 0;
}
