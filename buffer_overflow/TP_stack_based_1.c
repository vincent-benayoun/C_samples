
#include <stdio.h>

int main(void)
{
  int t[10] = {6};
  t[12] = 123;
  printf("%d\n", t[12]);
}
