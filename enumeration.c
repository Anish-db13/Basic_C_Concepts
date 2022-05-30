
enum week
{ Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int
main ()
{
  // creating today variable of enum week type
  enum week today;
  today = Friday;
  printf ("Day %d", today + 1);
  return 0;
}
