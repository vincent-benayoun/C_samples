
typedef struct my_struct {
   int member1;
   int member2;
} my_struct;

int main(void)
{
  my_struct r = {263, 6271};

  r.member1 -= r.member2 / 30;
  r.member1 += 6;
  r.member1 = r.member1 / 6;

  r.member2 = -20;

  r.member1 = r.member1 + r.member2;

  r.member2 = r.member2 / r.member1;
  
  return r.member2;
}
