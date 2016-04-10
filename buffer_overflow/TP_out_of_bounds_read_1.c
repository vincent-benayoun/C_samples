
#include <stdio.h>

int sum(int t[15])
{
  int res = 0;
  int i;
  for(i=0; i<15; i++){
    res += t[i];
  }
  return res;
}

int main(void)
{
  int t[10] = {6};
  int s;
  s = sum(t);
  printf("%d\n", s);
}
