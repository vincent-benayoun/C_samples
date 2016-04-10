

int main(void)
{
  int x = 263;
  int y = 6271;

  x -= y / 30;
  x += 6;
  x = x / 6;

  y = -10;

  x = x + y;

  y = y / x;
  
  return y;
}
