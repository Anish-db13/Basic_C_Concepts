#include <stdio.h>
#include<string.h>
struct student
{
    int rollno,m1,m2,m3;
    char name[20];
    int avg;
};
int main()
{
    int i,n, found=0;
    struct student s[10];
    printf("Enter the number of students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the student details\n");
        printf("Enter Name, Roll no, Marks1, Marks2, Marks3\n");
        scanf("%s%d%d%d%d", s[i].name, &s[i].rollno, &s[i].m1, &s[i].m2, &s[i].m3);
    }
    for(i=0;i<n;i++)
        s[i].avg=(s[i].m1+s[i].m2+s[i].m3)/3;
    printf("The students below average are:\n");
    for(i=0;i<n;i++)
    {
        if(s[i].avg<15)
        {
            printf("%s\t%d\n",s[i].name,s[i].rollno);
            found=1;
        }
    }
    if(found==0)
        printf("No student scored below average\n");
        for(i=0;i<n;i++)
        s[i].avg=(s[i].m1+s[i].m2+s[i].m3)/3;
    printf("The students above average are:\n");
    for(i=0;i<n;i++)
    {
        if(s[i].avg>15)
        {
            printf("%s\t%d\n",s[i].name,s[i].rollno);
            found=1;
        }
    }
    if(found==0)
        printf("No student scored above average\n");
    return 0;
}
