#include <stdio.h>

// This function only gets and print a character

char main()
{
    char userChr;
    printf("Insira um único caracter: ");
    scanf("%c", &userChr);
    printf("Caracter inserido %c", userChr);
    return(0);
}