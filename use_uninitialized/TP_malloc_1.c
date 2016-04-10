
#include <stdlib.h>

int main(void)
{
  int *p;
  p = malloc(10 * sizeof(int));
  return p[5] * 17;
}
