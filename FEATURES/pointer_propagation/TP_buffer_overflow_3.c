
int is_this_needed(void);

int main(void)
{
  int tb[3] = {9, 4, 2};
  int t[5] = {123, 345, 241, 11, 991};
  int y = 6271;
  int *p;

  p = &t[0];
  *p -= t[2] / 2;

  if(is_this_needed()){
    p = &t[3];
    *p /= t[4] * y;
  }
  
  p = &t[1];
  *p -= t[2] + t[0];
  
  p = &t[3];
  *p += 10;
  
  y = -10;

  *p = *p + y;

  tb[123 * (int)!*p] = 1;
  
  return y;
}
