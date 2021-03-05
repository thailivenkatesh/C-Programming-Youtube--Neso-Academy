#include <stdio.h>

int main()
{
  int a = 1, b = 1;
  int c = ++a || b++;
  int d = b-- && --a;
  printf("%d %d %d %d", d, c, b, a);
  // Output is "5 4" and not "6 4" because here (i++) operand
  // of sizeof() operator is not a variable length array type,
  // thus will not be evaluated.
  return 0;
}