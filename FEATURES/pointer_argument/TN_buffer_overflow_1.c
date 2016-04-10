
void f(int *a, int b)
{
  *a -= b / 30;
  *a += 6;

  *a = *a / 6;
}

int main(void)
{
  int tb[3] = {9, 4, 2};
  int x = 263;
  int y = 6271;

  f(&x, y);

  y = -20;

  x = x + y;

  tb[123 * (int)!x] = 1;
 
  return tb[0];
}
