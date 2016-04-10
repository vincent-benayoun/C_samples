
int main(void)
{
  int t[5] = {123, 345, 241, 11, 991};
  int y = 6271;
  int *p;
  
  p = &t[3];
  *p /= t[4] * y;
  *p += 10;
  
  y = -20;

  *p = *p + y;

  y = y / *p;
  
  return y;
}
