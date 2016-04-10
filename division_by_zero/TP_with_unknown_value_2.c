
#include <stdlib.h>

int divisor(int param1, int param2, int param3)
{
  int res = 0;
  int r1 = rand() % 256;
  int r2 = rand() % 128;
  int r3 = rand() % 365;

  return r1 * param1 + r2 * param2 + r3 * param3;
}

int main(void)
{
  int x = 123;
  int y = divisor(123, -321, 7);
  return x / y;
}
