
#include <stdio.h>

int main(void)
{
  int t[10] = {6};
  t[9] = 123;
  printf("%d\n", t[9]);
}
