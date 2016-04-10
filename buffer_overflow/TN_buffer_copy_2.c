
#include <stdio.h>
#include <string.h>

int main(void)
{
  char s[20] = "hello, how are you?";
  char s2[20];
  strcpy(s2, s);
  printf("%s\n", s);
  printf("%s\n", s2);
}
