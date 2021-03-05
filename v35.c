#include <stdio.h>

int main()
{
  int i = 5;
  int var = sizeof(i++);
  printf("%d %d", i, var);
  // Output is "5 4" and not "6 4" because here (i++) operand
  // of sizeof() operator is not a variable length array type,
  // thus will not be evaluated.
  return 0;
}