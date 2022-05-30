#include<stdio.h>
void
main ()
{
  int a[50], n, i, j, temp, min;
  printf ("Enter number of elements\n");
  scanf ("%d", &n);
  printf ("Enter the elements of array\n");
  for (i = 0; i < n; i++)
    scanf ("%d", &a[i]);
  printf ("The unsorted array\n");
  for (i = 0; i < n; i++)
    printf ("%d\t", a[i]);
  for (i = 0; i < n - 1; i++)
    {
      min = i;
      for (j = i + 1; j < n; j++)
	{
	  if (a[min] > a[j])
	    min = j;
	}
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
    }
  printf ("\nThe sorted array\n");
  for (i = 0; i < n; i++)
    printf ("%d\t", a[i]);
}

