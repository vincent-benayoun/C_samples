
int is_this_needed(void);

int main(void)
{
  int t[5] = {123, 345, 241, 11, 991};
  int y = 6271;
  int *p;

  p = &t[0];
  *p -= t[2] / 2;

  p = &t[3];
  *p /= t[4] * y;
  
  p = &t[1];
  *p -= t[2] + t[0];
  
  p = &t[3];
  *p += 10;
  
  y = -30;

  *p = *p + y;

  y = y / *p;
  
  return y;
}
