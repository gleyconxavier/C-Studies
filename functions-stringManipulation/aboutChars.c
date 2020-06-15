#include <stdio.h>

// char declares a vector of characters with a number of positions.
// gets() should not be used instead we can use fgets(buf, MAX, stdin);
// %s should be used for strings ex. "algo" and %c for characters ex. 'D'

char stringManipulation()
{
    char str[10] = "João";
    printf("\n\n String: %s", str);
    printf("\n Segunda letra: %c", str[1]);
    str[1]='U';
    printf("\nAgora a segunda letra é: %c", str[1]);
    printf("\nString resultante: %s", str);
    return(0);
}

int main()
{
    stringManipulation();
    char string[100];
    printf("Digite uma string: ");
    fgets( string,100, stdin);
    printf("\n\n Você digitou %s", string);
    return(0);
}