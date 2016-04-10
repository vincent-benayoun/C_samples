
#include <stdlib.h>

int main(void)
{
  int *p;
  int i;
  p = malloc(10 * sizeof(int));
  for(i = 0; i < 3; i++) p[i] = 12;
  for(i = 3; i < 10; i++) *(p+i) = 4321;
  return p[5] * 17;
}
