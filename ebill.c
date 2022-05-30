#include <stdio.h>

int
main ()
{
  float a, b;
  int min = 100;
  char username[20];
  printf ("Enter the username: ");
  scanf ("%s", username);
  printf ("Enter the no. of units consumed= ");
  scanf ("%f", &a);
  if (a <= 200)
    b = min + (a * 0.8);
  else if (a >= 201 && a <= 300)
    b = min + (200 * 0.8) + ((a - 200) * 0.9);
  else
    b = min + (200 * 0.8) + (a - 300);
  if (a > 400)
    b = b + (b * 0.15);
  printf ("Mr. %s,\nYou need to pay Rs.%f/- for electricity", username, b);
  return 0;
}

