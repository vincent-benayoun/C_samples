
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
  int tb[3] = {9, 4, 2};
  int x, y;
  int (*f)(void);

  if(is_zero_wanted() && 0){
    f = foo_returns_zero;
  }else{
    f = foo_returns_positive;
  }
  
  x = 123;
  y = f();

  tb[123 * (int)!y] = 1;
 
  return tb[0];
}
