

int main(void)
{
  int tb[3] = {9, 4, 2};
  int t[10];
  int i;
  int *p;
  int res;

  for(i=0; i<10; ++i){
    t[i] = i*i;
  }

  p = &t[4];

  tb[123 * (int)!(*p - 26)] = 1;
 
  return tb[0];
}
