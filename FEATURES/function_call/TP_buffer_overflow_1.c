
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
  int tb[3] = {9, 4, 2};
  int x = 263;
  int y = 6271;

  x = f(x, y);

  y = -10;

  x = x + y;

  tb[123 * (int)!x] = 1;
 
  return tb[0];
}
