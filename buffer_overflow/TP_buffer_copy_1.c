
#include <stdio.h>
#include <string.h>

int main(void)
{
  char *s = "hello, how are you?";
  char s2[19];
  strcpy(s2, s);
  printf("%s\n", s);
  printf("%s\n", s2);
}
