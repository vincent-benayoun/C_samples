
int foo_returns_zero(void)
{
  return 0;
}

int foo_returns_positive(void)
{
  return 613;
}

int get_f_id(void);

typedef int (*return_int)(void);

int main(void)
{
  int x, y;
  int f_id;
  return_int t[2];
  int (*f)(void);

  t[0] = foo_returns_zero;
  t[1] = foo_returns_positive;

  f_id = get_f_id();
  if(f_id > 0 && f_id < 2){
    f = t[f_id];
  }else{
    return 0;
  }

  x = 123;
  y = f();

  x = x / y;
  
  return x;
}
