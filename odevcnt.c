#include <stdio.h>

int
main ()
{
  int even_count = 0, odd_count = 0, i, num[10], rem;
  printf ("Enter the array elements\n");
  for (i = 0; i < 10; i++)
    scanf ("%d", &num[i]);
  for (i = 0; i < 10; i++)
    {
      rem = (num[i]) % 2;
      if (rem == 0)
	even_count++;
      else
	odd_count++;
    }
  printf ("The Even Count is %d\n", even_count);
  printf ("The Odd Count is %d", odd_count);
  return 0;
}

