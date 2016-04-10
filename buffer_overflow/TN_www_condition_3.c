#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[10];
    int pass = 0;
    int i;

    printf("\n Enter the password : \n");
    i = 0;
    while(i < 9 && (buff[i] = getc(stdin)) != EOF) ++i;
    buff[i] = '\0';

    if(strcmp(buff, "thegeekstuff"))
    {
        printf ("\n Wrong Password \n");
    }
    else
    {
        printf ("\n Correct Password \n");
        pass = 1;
    }

    if(pass)
    {
       /* Now Give root or admin rights to user*/
        printf ("\n Root privileges given to the user \n");
    }

    return 0;
}
