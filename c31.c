#include <stdio.h>
#include <string.h>
struct student
{
int roll_no;
char name[20], grade;
float collg_fee;
struct date
{
int day,month,year;
}dob;
};
void main()
{
int i,n,found=0;
struct student s[10];
char sname[20];
printf("Enter the number of student details n=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the %d student details:\n",i+1);
printf("Enter the Roll number:\n");
scanf("%d",&s[i].rollno);
printf("Enter the student name:\n");
scanf("%s",s[i].name);
printf("Enter the marks:\n");
scanf("%d",&s[i].marks);
printf("Enter the grade:\n");
scanf("%c",&s[i].grade);
}
printf("\n Student details are:\n");
printf("\nRollno\t\tName\t\tMarks\t\tGrade\n");for(i=0;i<n;i++)
{
printf("%d\t\t%s\t\t%d\t\t%c\n",s[i].rollno,s[i].name,s[i].marks,s[i].grade);
}
printf("Enter the student name to print the marks:");
scanf("%s",sname);
for(i=0;i<n;i++)
{
if(strcmp(s[i].name,sname)==0)
{
printf("Marks of the student is:%d",s[i].marks);//s[1].marks
found=1;
}
}
if(found==0)
printf("Given student name not found\n");
}