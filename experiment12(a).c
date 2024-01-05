//program to store the information of student marks using structures and find total marks of individual students.
#include<stdio.h>
struct student
{
int m1, m2, m3;
int tot;
float avg;
char r;
};
void main()
{
  struct student s1;
int n;
printf("Enter student marks:");
scanf("%d%d%d",&s1.m1, &s1.m2, &s1.m3);
s1.tot=s1.m1 + s1.m2 + s1.m3;
s1.avg= (float)s1.tot/3.0;
printf("Student mark list:\n");
printf("sub1=%d",s1.m1);
printf("sub2=%d",s1.m2);
printf("sub3=%d",s1.m3);
printf("Total=%d",s1.tot);
printf("Avg=%d",s1.avg);
}
