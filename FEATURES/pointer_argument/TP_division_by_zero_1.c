
void f(int *a, int b)
{
  *a -= b / 30;
  *a += 6;

  *a = *a / 6;
}

int main(void)
{
  int x = 263;
  int y = 6271;

  f(&x, y);

  y = -10;

  x = x + y;

  y = y / x;
  
  return y;
}
