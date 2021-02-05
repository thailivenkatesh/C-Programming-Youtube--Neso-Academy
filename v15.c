#include <stdio.h>
#include <stdlib.h>

// int increment()
// {
//   int count = 0;
//   count = count + 1;
//   return count; // Returns 1 everytime this method is called.
// }

int increment()
{
  static int count = 2; // Still retains its value and its scope to this method only.

  // int var = 2;
  // static int count = var;
  /* Can only assign constant literal(or value) to a static variable.*/

  count = count + 1;
  return count; // Returns `count` after incrementing it with each invacation.
  // Therefore, no need for defining global variables for same result.
}

int main()
{
  int val;
  val = increment();
  val = increment();
  val = increment();

  printf("%d", val);
  return 0;
}