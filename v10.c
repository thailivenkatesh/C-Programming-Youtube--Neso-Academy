#include <stdio.h>

// int main()
// {
//   float var1 = 3.1415926535897932;
//   double var2 = 3.1415926535897932;
//   long double var3 = 3.141592653589793213456;

//   printf("%d\n", sizeof(float));
//   printf("%d\n", sizeof(double));
//   printf("%d\n", sizeof(long double));
//   printf("%.16f\n", var1);
//   printf("%.16lf\n", var2);
//   printf("%.21Lf\n", var3);
// }

// ----------------------------------

int main()
{
  int var = 4 / 9;
  printf("%2d\n", var);

  float var1 = 4 / 9;
  printf("%.2f\n", var1);

  float var2 = 4.0 / 9.0;
  printf("%.2f\n", var2);

  printf("%.4f", var2);
}