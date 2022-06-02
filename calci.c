#include <stdio.h>

int main()
{
    char operator;
    float a, b, result=0;
    printf("Enter two numbers:\n");
    scanf("%f%f", &a, &b);
    printf("Enter the operator(+,-,*,/): ");
    scanf("%c", &operator);
    switch(operator)
    {
        case'+':
            result=a+b;
            break;        
        case'-':
            result=a-b;
            break;
        case'*':
            result=a*b;
            break;
        case'/':
            result=a/b;
            break;
        default:
            printf("You have entered an invalid operator");
    }
    printf("\nThe result of %f %c %f = %f", a, operator, b, result);
    return 0;
}

