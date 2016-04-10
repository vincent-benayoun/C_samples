
int foo_returns_zero(void)
{
  return 10;
}

int main(void)
{
  int x, y;
  int (*f)(void);

  f = foo_returns_zero;

  x = 123;
  y = f();

  x = x / y;
  
  return x;
}
