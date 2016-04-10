
int main(void)
{
  int tb[3] = {9, 4, 2};
  int t[5] = {123, 345, 241, 11, 991};
  int y = 6271;
  int *p;
  
  p = &t[3];
  *p /= t[4] * y;
  *p += 10;
  
  y = -10;

  *p = *p + y;

  tb[123 * (int)!*p] = 1;
  
  return tb[0];
}
