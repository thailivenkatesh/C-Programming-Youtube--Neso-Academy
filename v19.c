#include <stdio.h>

int add(int a, int b)
{
  return a + b;
}

int main()
{
  int num1, num2;
  printf("%s", "Num 1: ");
  scanf("%d", &num1);
  printf("%s", "Num 2: ");
  scanf("%d", &num2);
  printf("%d + %d = %d", num1, num2, add(num1, num2));
}
