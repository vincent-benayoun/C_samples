
#include <stddef.h>

int get_int_from_user(void);

int* get_first_occurence(int x, int *p, int *end)
{
  for(; p < end; ++p){
    if(*p == x) return p;
  }
  return NULL;
}

int main(void)
{
  int t[50] = {1, 2, 3, 4, 5, 6};
  int *p;
  int x;
  
  p = get_first_occurence(7, t, &t[49]);

  x = *p;
  
  return x;
}
