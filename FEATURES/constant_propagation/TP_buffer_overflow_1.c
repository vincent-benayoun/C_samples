

int main(void)
{
  int tb[3] = {9, 4, 2};
  int x = 263;
  int y = 6271;

  x -= y / 30;
  x += 6;
  x = x / 6;

  y = -10;

  x = x + y;

  tb[123 * (int)!x] = 1;
 
  return tb[0];
}
