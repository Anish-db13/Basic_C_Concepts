#include <stdio.h>
/*

Star Pattern 3
      * 
     ***
    *****
   *******
  ********* 

*/

int
main ()
{
  int i, j, n;
  printf ("Enter the value of n\n");
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < 2 * n; j++)
	{
	  if (j >= n - 1 - i && j <= n - 1 + i)
	    {
	      printf ("*");
	    }
	  else
	    {
	      printf (" ");
	    }
	}
      printf ("\n");
    }
  return 0;
}
