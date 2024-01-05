//program to implement an array of structure for student marks for r=each student and pass it to function for various operations.
#include<stdio.h>
void main()
{
    struct student
    {
        int m1, m2, m3;
        int tot;
        float avg;
        char r;
    };
    int n, i;
    printf("Enter no. of students:");
    scanf("%d",&n);
    struct student s[n];
    printf("Enter student marks:");
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&s[i].m1, &s[i].m2, &s[i].m3);
        s[i].tot= s[i].m1 + s[i].m2 + s[i].m3;
        s[i].avg= (float)s[i].tot / 3.0;
        if (s[i].avg>50)
        s[i].r='p';
        else
        s[i].r='f';
    }
    printf("Student marklist\n");
    for(i=0;i<n;i++)
    {
        printf("Sub1=%d\n",s[i].m1);
        printf("Sub2=%d\n",s[i].m2);
        printf("Sub3=%d\n",s[i].m3);
        printf("Toatl=%d\n",s[i].tot);
        printf("Avg=%.2f",s[i].avg);
            
    }
}
