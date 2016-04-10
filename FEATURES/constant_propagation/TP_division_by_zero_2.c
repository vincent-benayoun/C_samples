
int an_external_function(void);

int main(void)
{
  int x = 263;
  int y = 6271;

  x -= y / 30;
  x += 6;
  x = x / 6;

  y = -10;

  switch(an_external_function()){
    case 1: x = -x; break;
    case 2: x = -x + 10; break;
    case 3: x = -x + 15; break;
    case 4: x = -x + 20; break;
    default: x = -x; break;
  }

  x = x + y;

  y = y / x;
  
  return y;
}
