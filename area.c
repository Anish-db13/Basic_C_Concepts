#include <stdio.h>
void table (int n);

int
main ()
{
  int n;
  printf ("Enter the valiue of n\n n = ");
  scanf ("%d", &n);
  printf ("The %d Table is as follows\n", n);

  table (n);//arugument / actual parameter

  return 0;
}

void
table (int n)// parameter / formal parameter
{
  for (int i = 1; i <= 10; i++)
    {
      printf ("%d * %d = %d\n", n, i, i * n);
    }
}

