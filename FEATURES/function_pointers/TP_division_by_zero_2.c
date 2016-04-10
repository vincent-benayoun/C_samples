
int foo_returns_zero(void)
{
  return 0;
}

int foo_returns_positive(void)
{
  return 613;
}

int is_zero_wanted(void);

int main(void)
{
  int x, y;
  int (*f)(void);

  if(is_zero_wanted()){
    f = foo_returns_zero;
  }else{
    f = foo_returns_positive;
  }
  
  x = 123;
  y = f();

  x = x / y;
  
  return x;
}
