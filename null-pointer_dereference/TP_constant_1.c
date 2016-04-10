
#include <stddef.h>

int main(void)
{
  int x;

  x = *(int*)NULL;
  
  return x;
}
