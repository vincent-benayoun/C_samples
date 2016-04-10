
int an_external_function(void);

int f(int a, int b)
{
  int r;
  
  a -= b / 30;
  a += 6;

  r = a / 6;
  switch(an_external_function()){
    case 1: return -r;
    case 2: return -r + 10;
    case 3: return -r + 15;
    case 4: return -r + 20;
    default: return -r;
  }
}

int main(void)
{
  int x = 263;
  int y = 6271;

  x = f(x, y);

  y = -15;

  x = x + y;

  y = y / x;
  
  return y;
}
