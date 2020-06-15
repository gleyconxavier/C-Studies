#include <stdio.h>
#include <locale.h>

/*
    First function, a simple one
    just return the sum of two values
*/

int sumValues(int param1, int param2)
{
    return (param1+param2);
}

int main()
{
    int value1;
    int value2;
    int total;
    printf("Insira o primeiro valor: ");
    scanf("%d", &value1);
    printf("Insira o segundo valor: ");
    scanf("%d", &value2);
    total = sumValues(value1, value2);
    printf("Total: %d.", total);
    return(0);
}