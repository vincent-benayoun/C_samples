
#include <stdlib.h>

int main(void)
{
  int x = 123;
  int y = rand() % 256 + 32;
  y /= 5;
  x += 613;
  y -= 5;
  return x / y;
}
