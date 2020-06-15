#include <stdio.h>

// Simple for implementation with a condition

int main()
{
    int count;

    for(count=1;count<=3000;count=count+1)
    {
        printf("\nNumero atual: %d", count);
        if(count==3000)
        {
            printf("\nI Love You 3000 S2\n");
        }
    }
    return(0);
}