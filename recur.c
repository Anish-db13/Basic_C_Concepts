#include <stdio.h>
void helloworld(int n);
int main()
{
    int n;
    printf("Enter the value n\nn = ");
    scanf("%d",&n);
    helloworld(n);

    return 0;
}
void helloworld(int n)
{
    if(n==0)
    {
        return;
    }
    printf("Hellow World\t");
    helloworld(n-1);
}

