#include <stdio.h>

// int main()
// {
//   int var = (3, 4, 5);
//   printf("%d", var);
//   return 0;
// }

// ----------------------------------

// int main()
// {
//   int var;
//   var = 3, 4, 5;

//   printf("%d", var);
//   // Output is 3, because precedence of assignment operator (=)
//   // is higher than comma operator (,) and therefore expression
//   // (var = 3, 4, 5) === ((var = 3), 4, 5)
//   return 0;
// }

// ----------------------------------

// int main()
// {
//   int var = (printf("%s\n", "HELLO!"), 5);
//   printf("%d", var);
//   return 0;
// }

// ----------------------------------

int main()
{
  int var, num;
  num = (var = 15, var + 35);
  printf("%d", num);
  return 0;
}