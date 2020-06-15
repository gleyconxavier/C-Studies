#include <stdio.h>

/*
    Some string manipulation, buffer clearing,
    also reading strings with whitespaces
*/

int main()
{
    char firstString[120];
    char temp;
    char secondString[120];

    printf("Insira uma frase\n");
    scanf("%[A-Z a-z]", &firstString[0]);
    printf("\nInsira uma outra frase\n");
    scanf("%c", &temp);
    scanf("%[A-Z a-z]", &secondString[0]);
    printf("\nFrases inseridas: \n");
    printf("\nPrimeira: %s", firstString);
    printf("\nSegunda: %s", secondString);
    return(0);
}