
int get_int_from_user(void);

int main(void)
{
  int x, y;

  x = get_int_from_user() % 50;
  if(x < 0) x = 0;

  if(x < 12) y = 72;
  if(x > 11) y = 442;

  y += 32;
	       
  return y;
}
