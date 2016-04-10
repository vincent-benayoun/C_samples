
#include <stdio.h>

int get_int_from_user(void);

int main(void)
{
  int sum = 0;
  int input;
  int result;
  int i;

  input = get_int_from_user();

  if(input > 1000){
    printf("Cannot compute sum of numbers from 0 to %d.\n", input);
    return 1;
  }
  
  printf("Computing the sum from 0 to %d...\n", input);
  
  for(i = 0, sum = 0; i < input; ++i) {
    sum += i;
  }
  
  printf("Sum[0..%d] = %d\n", input, sum);
  
  return 0;
}
