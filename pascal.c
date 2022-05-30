#include <stdio.h>
int
main ()
{
  int x, y, z, s, n, a;
  printf ("Enter limit\n");
  scanf ("%d", &n);
  s = n;
  for (x = 0; x <= n; x++)
    {
      a = 1;
      for (z = 0; z <= s; z++)
	printf (" ");
      s--;
      for (y = 0; y <= n; y++)
	{
	  if (a != 0)
	    {
	      printf ("%d", a);
	      a = (a * (x - y) / (y + 1));
	    }

	}

      printf ("\n");
    }
  return 0;
}

