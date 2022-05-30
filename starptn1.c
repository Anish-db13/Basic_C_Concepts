#include <stdio.h>

int main()
{
    /*
    Pattern 1
    *
    **
    ***
    ****
    */
    int n,i,j;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        //print i+1 stars
        for(j=0;j<i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
