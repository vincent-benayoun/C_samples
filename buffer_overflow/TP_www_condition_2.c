
#include <stdio.h>
#include <string.h>

int main(void)
{
  char password[25];
  unsigned char is_authorized = 0;
  
  //printf("\n &password: %p\n &is_authorized: %p\n", &password, &is_authorized);
  
  printf("Enter your password:\n");
  scanf("%255s", password);

  if(!strcmp(password, "SecretPassword"))
    is_authorized = 1;

  printf(" input: %s\n is_authorized: %d\n", password, is_authorized);

  if(is_authorized){
    printf("You are authorized.\n");
  }else{
    printf("Wrong password! You are NOT authorized.\n");
  }
}
