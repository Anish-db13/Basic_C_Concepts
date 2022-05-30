#include <stdio.h>
#include <math.h>
#define PI 3.142
int
main ()
{
  int i, n;
  float sum = 0, term = 0, deg, x;
  printf ("Enter number of terms\n");
  scanf ("%d", &n);
  printf ("Enter the degree\n");
  scanf ("%f", &deg);
  x = (deg * PI) / 180;
  term = x;
  sum = term;
  for (i = 0; i < n; i++)
    {
      term = -(term * x * x) / (i * (i - 1));
      sum = sum + term;
    }
  printf ("Using built-in function Sin(%f)=%f\n", deg, sin (x));
  printf ("Using user-defined function Sin(%f)=%f\n", deg, sum);
  return 0;
}

