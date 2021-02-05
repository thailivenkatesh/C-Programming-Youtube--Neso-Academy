#include <stdio.h>

// int main()
// {
//   printf("%d ", printf("%s", "Hello World!"));
//   return 0;
// }

// ----------------------------------

// int main()
// {
//   printf("%s\n", "Hello");
//   printf("%10s", "Hello");
//   return 0;
// }

// ----------------------------------

// int main()
// {
//   char c = 65;
//   c = c + 10;
//   printf("%d", c);
//   return 0;
// }

// ----------------------------------

// int main()
// {
//   signed int i1;
//   signed i2;   // Compiler implicitly assume int Data-type
//   unsigned i3; // Compiler implicitly assume int Data-type
//   long i4;     // Equivalent to `long int i`
//   long int i5;
//   long long i6; // Equivalent to `long long int i`
// }

// ----------------------------------

// int main()
// {
//   unsigned i = 1;
//   int j = -4;
//   printf("%u", i + j);
//   return 0;
// }

/* This program prints 4294967293, as internally integers
are stored in 2's complement form, therefore,
-3 === 11111111 11111111 11111111 11111101 and
when this number is printed as an unsigned integer
it is directly converted to its decimal equivalent.*/

// ----------------------------------

int main()
{
  unsigned i = 1;
  int j = -4;
  printf("%d", i + j); //prints -3
  return 0;
}

/*This program has '%d" placeholder, which means
value will be printed after converting back from
2's complement.*/