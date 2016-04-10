
int an_external_function(void);

void f(int *a, int b)
{
  *a -= b / 30;
  *a += 6;

  *a = *a / 6;
  
  switch(an_external_function()){
    case 1: *a = -*a; break;
    case 2: *a = -*a + 10; break;
    case 3: *a = -*a + 15; break;
    case 4: *a = -*a + 25; break;
    default: *a = -*a; break;
  }
}

int main(void)
{
  int x = 263;
  int y = 6271;

  f(&x, y);

  y = -10;

  x = x + y;

  y = y / x;
  
  return y;
}
