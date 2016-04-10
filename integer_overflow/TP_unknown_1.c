
int get_int_from_user(void);

int compute(int x, int y)
{
  int result;
  result = (x * 5 - 37) / 12;
  result = (y + 127) / (3 * y * y + 17);
  return result;
}

int main(void)
{
  int x;
  int y;
  int z;

  x = get_int_from_user();
  y = get_int_from_user();

  z = compute(x, y);
  
  return z;
}
