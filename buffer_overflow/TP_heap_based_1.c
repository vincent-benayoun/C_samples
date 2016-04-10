
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *p;
  p = calloc(20, sizeof(int));
  p[25] = 123;
  printf("%d\n", p[25]);
}
