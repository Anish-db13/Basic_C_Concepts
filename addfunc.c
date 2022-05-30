#include <stdio.h>

int sum (int a, int b);

int
main ()
{
  int a, b, s;
  printf ("Enter the value of a:\n a = ");
  scanf ("%d", &a);
  printf ("Enter the value of b:\n b = ");
  scanf ("%d", &b);
  s = sum (a, b);
  printf ("\nSum = %d", s);

  return 0;
}
