

int main(void)
{
  int tb[3] = {9, 4, 2};
  int t[10];
  int i;
  int *p;

  for(i=0; i<10; ++i){
    t[i] = i*i;
  }

  p = &t[4];

  p += 20 / 3;
  p = &t[0] + (p - &t[0]) / 2;

  tb[123 * (int)!(*p - 25)] = 1;

  return tb[0];
}
