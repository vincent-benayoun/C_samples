

int main(void)
{
  int t[10];
  int i;
  int *p;
  int res;

  for(i=0; i<10; ++i){
    t[i] = i*i;
  }

  p = &t[4];

  p += 20 / 3;
  p = &t[0] + (p - &t[0]) / 2;

  res = 12 / (*p - 26);

  return res;
}
