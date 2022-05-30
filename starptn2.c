#include <stdio.h>
/*

Star Pattern 2
    *
   **
  ***
 ****
*****

*/

int main()
{
    int i,j,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if(i+j>=n-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
