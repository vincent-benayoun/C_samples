
typedef struct my_struct {
   int member1;
   int member2;
} my_struct;

int an_external_function(void);

int main(void)
{
  my_struct r = {263, 6271};

  r.member1 -= r.member2 / 30;
  r.member1 += 6;
  r.member1 = r.member1 / 6;

  r.member2 = -10;

  switch(an_external_function()){
    case 1: r.member1 = -r.member1; break;
    case 2: r.member1 = -r.member1 + 10; break;
    case 3: r.member1 = -r.member1 + 15; break;
    case 4: r.member1 = -r.member1 + 20; break;
    default: r.member1 = -r.member1; break;
  }

  r.member1 = r.member1 + r.member2;

  r.member2 = r.member2 / r.member1;
  
  return r.member2;
}
