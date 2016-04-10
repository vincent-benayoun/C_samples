
#include <stddef.h>
#include <stdlib.h>

int main(void)
{
  int x;
  int *p = calloc(5, sizeof(int));
  
  x = *p;
  
  return x;
}
