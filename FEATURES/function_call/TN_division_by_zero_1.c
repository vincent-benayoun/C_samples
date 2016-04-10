
int f(int a, int b)
{
  int r;
  
  a -= b / 30;
  a += 6;

  r = a / 6;
  return r;
}

int main(void)
{
  int x = 263;
  int y = 6271;

  x = f(x, y);

  y = -20;

  x = x + y;

  y = y / x;
  
  return y;
}
