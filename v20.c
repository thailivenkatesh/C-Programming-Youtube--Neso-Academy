#include <stdio.h>

// int main()
// {
//   int var = 0x43FF;  // Any avlue with 0x or 0X in front is treated as Hexadecimal value
//   printf("%d", var); // 15*16^0 + 15*16^1 + 3*16^2 + 4*16^3 = 17407
//   return 0;
// }

// ----------------------------------

// int main()
// {
//   int var = 0x43FF;  // Any avlue with 0x in front is treated as Hexadecimal value
//   printf("%x", var); // placeholder x is used for Hexadecimal values --> 43ff
//   return 0;
// }

// ----------------------------------

// int main()
// {
//   int var = 0x43FF;  // Any avlue with 0x in front is treated as Hexadecimal value
//   printf("%X", var); // placeholder x is used for Hexadecimal values --> 43FF
//   return 0;
// }

// ----------------------------------

static int i;
static int i = 27;
static int i;
int main()
{
  static int i;
  printf("%d", i);
  return 0;
}