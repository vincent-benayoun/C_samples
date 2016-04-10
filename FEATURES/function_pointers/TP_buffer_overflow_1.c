
int foo_returns_zero(void)
{
  return 0;
}

int main(void)
{
  int tb[3] = {9, 4, 2};
  int x, y;
  int (*f)(void);

  f = foo_returns_zero;

  x = 123;
  y = f();

  tb[123 * (int)!y] = 1;
 
  return tb[0];
}
