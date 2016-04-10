
#include <stdio.h>

int get_int_from_user(void);

int main(void)
{
  int product = 0;
  int input;
  signed char result;
  int i;

  input = get_int_from_user();
  
  if(input > 15){
    printf("Cannot compute product of numbers from 1 to %d.\n", input);
    return 1;
  }

  printf("Computing the product from 1 to %d...\n", input);
  
  for(i = 1, product = 1; i < input; ++i) {
    product *= i;
  }
  
  printf("Product[0..%d] = %d\n", input, product);
  
  return 0;
}
