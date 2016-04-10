

int main(void)
{
  int x = 3;
  int *p = &x;
  
  x = *p;
  
  return x;
}
