//program to store information of a student using union.
#include<stdio.h>
void main()
{
union student
{
int rollno;
char name[50];
float avg;
};
union student s1;
printf("Enter the student roll no:\n");
printf("Enter the Student name:\n");
scanf("%s",s.name);
printf("Enetr student av:\n");
scanf("%f",&s.avg);
printf("Student avg: %.2f\n", s.avg);
}
