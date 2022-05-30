#include <stdio.h>
void swap (int *a, int *b);
void
main ()
{
  int a, b;
  printf ("Enter the value of A\nA=");
  scanf ("%d", &a);
  printf ("Enter the value of B\nB=");
  scanf ("%d", &b);
  swap (&a, &b);
  printf ("Swapped output:\nA=%d\nB=%d", a, b);
}

void
swap (int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}
