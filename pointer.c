#include<stdio.h>
void
main ()
{
  int *ptr;			//declaration of pointer variable
  int a = 10;
  ptr = &a;			//initialization of pointer variable
  printf ("the value of a=%d\n", a);
  printf ("the value of a using pointer=%d\n", *ptr);
  printf ("the address of a=%u\n", ptr);
}

