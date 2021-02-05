#include <stdio.h>

#define STRING "%s\n"
#define NESO "Welcome to NESO Academy!"

// int main()
// {
//   int var = 052; // Any avlue with 0 in front is treated as Octal value
//   printf("%d", var); // 5*8 + 2*1 = 42
//   return 0;
// }

// ----------------------------------

// int main()
// {
//   int var = 052;     // Any avlue with 0 in front is treated as Octal value
//   printf("%o", var); // placeholder o is used for Octal values --> 52
//   return 0;
// }

// ----------------------------------

int main()
{
  printf(STRING, NESO); // Welcome to NESO Academy!
  return 0;
}