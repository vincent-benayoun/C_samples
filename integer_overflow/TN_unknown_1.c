
#include <stdio.h>
#include <limits.h>

int get_int_from_user(void);

int compute(int x, int y)
{
  int result;
  if(sizeof(long long) < 2 * sizeof(int)){
    printf("sorry");
    return 0;
  }
  if(y > INT_MAX / 31 * 10 || y < INT_MIN / 31 * 10){
    printf("sorry, y too big");
    return 0;
  }
  result = ((long long)x * 5 - 37) / 12;
  result = ((long long)y + 127) / ((long long)3 * y * y + 17);
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
