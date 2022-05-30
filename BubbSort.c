#include <stdio.h>

int
main ()
{
  int i, j, a[100], temp, n;
  printf ("Enter the value of n\n");
  scanf ("%d", &n);
  printf ("Enter the elements of array in unsorted way\n");
  for (i = 0; i < n; i++)
    scanf ("%d", &a[i]);
  printf ("The original elements are:\n");
  for (i = 0; i < n; i++)
    printf ("%d\t", a[i]);
  for (i = 0; i < n - 1; i++)
    {
      for (j = 0; j < n - 1; j++)
	{
	  if (a[j] > a[j + 1])
	    {
	      temp = a[j];
	      a[j] = a[j + 1];
	      a[j + 1] = temp;
	    }
	}
    }
  printf ("\nThe sorted way of array is:\n");
  for (i = 0; i < n; i++)
    printf ("%d\t", a[i]);
  return 0;
}
