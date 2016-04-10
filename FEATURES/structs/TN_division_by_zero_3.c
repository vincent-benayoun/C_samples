
#include <stddef.h>

typedef struct my_struct {
   int member1;
   int member2;
} my_struct;

int main(void)
{
  my_struct r = {263, 6271};
  int *p;

  p = (char *)&r + (int)offsetof(my_struct, member2);

  r.member1 -= *p / 30;
  r.member1 += 6;
  r.member1 = r.member1 / 6;

  *p = 10;

  r.member1 = r.member1 + *p;

  *p = *p / r.member1;
  
  return *p;
}
