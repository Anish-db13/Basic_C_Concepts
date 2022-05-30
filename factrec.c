#include <stdio.h>
int factorial (int n);


int
main ()
{
  int n;
  printf ("Enter the value of n\nn = ");
  scanf ("%d", &n);
  printf ("Factorial of %d = %d", n, factorial (n));
  return 0;
}

int factorial (int n)
{
  if (n == 1)
    {
      return 1;
    }
  int factorialNm1 = factorial (n - 1);
  int factorialN = factorialNm1 * n;
  return factorialN;
}

