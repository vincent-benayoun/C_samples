
#include <stdio.h>
#include <string.h>

int main(void)
{
  char password[25];
  unsigned char is_authorized = 0;
  int i;
  
  //printf("\n &password: %p\n &is_authorized: %p\n", &password, &is_authorized);
  
  printf("Enter your password:\n");
  i = 0;
  while(i < 24 && (password[i] = getc(stdin)) != EOF) ++i;
  password[i] = '\0';

  if(!strcmp(password, "SecretPassword"))
    is_authorized = 1;

  printf(" input: %s\n is_authorized: %d\n", password, is_authorized);

  if(is_authorized){
    printf("You are authorized.\n");
  }else{
    printf("Wrong password! You are NOT authorized.\n");
  }
}
