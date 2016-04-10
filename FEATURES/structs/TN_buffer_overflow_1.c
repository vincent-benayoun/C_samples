
typedef struct my_struct {
   int member1;
   int member2;
} my_struct;

int main(void)
{
  int tb[3] = {9, 4, 2};
  my_struct r = {263, 6271};

  r.member1 -= r.member2 / 30;
  r.member1 += 6;
  r.member1 = r.member1 / 6;

  r.member2 = -20;

  r.member1 = r.member1 + r.member2;

  tb[123 * (int)!r.member1] = 1;
 
  return tb[0];
}
