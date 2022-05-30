#include <stdio.h>
int
main ()
{
  int n, r;
  int ans, fact1 = 1, fact2 = 1, fact3 = 1;
  printf ("Enter n and r:\n");
  scanf ("%d%d", &n, &r);
  for (int i = 1; i <= n; i++)
    fact1 = fact1 * i;
  for (int i = 1; i <= r; i++)
    fact2 = fact2 * i;
  for (int i = 1; i <= n - r; i++)
    fact3 = fact3 * i;
  ans = fact1 / (fact2 * fact3);
  printf ("%d C %d is: %d", n, r, ans);

}
