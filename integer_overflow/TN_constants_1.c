
#include <limits.h>

int main(void)
{
  int x = INT_MAX - 60;
  int y;
  y = ((unsigned int)x + 125) / 2;
  return y;
}
