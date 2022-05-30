#include <stdio.h>

int main()
{
    int a[10][10],transpose[10][10],r,c;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&r,&c);
    printf("Enter the matrix elements:\n");
    for(int m=0;m<r;++m)
        for(int n=0;n<c;++n)
        {
            printf("Enter the element a%d%d:",m+1,n+1);
            scanf("%d",&a[m][n]);
        }
    printf("Entered Matrix:\n");
    for(int m=0;m<r;++m)
        for(int n=0;n<c;++n)
        {
            printf("%d  ",a[m][n]);
            if(n==c-1)
                printf("\n");
        }
    for(int m=0;m<r;++m)
        for(int n=0;n<c;++n)
        {
            transpose[n][m]=a[m][n];
        }
    printf("Transpose of Matrix:\n");
    for(int m=0;m<r;++m)
        for(int n=0;n<c;++n)
        {
            printf("%d  ",transpose[m][n]);
            if(n==c-1)
                printf("\n");
        }

    return 0;
}

