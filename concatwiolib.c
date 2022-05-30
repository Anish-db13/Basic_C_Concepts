#include <stdio.h>
#include <string.h>

int
main ()
{
  char str1[50], str2[25];
  int i = 0, j = 0;
  printf ("Enter the first string\n");
  scanf ("%s", &str1);
  printf ("Enter the second string\n");
  scanf ("%s", &str2);
  while (str1[i] != '\0')
    {
      i++;
    }
  while (str2 != '\0')
    {
      str1[i] = str2[j];
      i++;
      j++;
    }
  str1[i] = '\0';
  printf ("Concatenation of strings 1 & 2 is %s", str1);
  return 0;
}

