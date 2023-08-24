#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void robo(int numero)
{
    if(numero == 0)
    {
        return;
    }

    int resto = numero % 10;

    if(resto % 2 == 0)
    {
        printf(".");
        robo(numero / 10);
    }
    else
    {
        printf("-");
        robo(numero / 10);
    }
}

void loop(int numeros)
{
    int num;

    scanf("%d", &num);

    robo(num);

    printf("\n");

    if(numeros == 1)
    {
        return;
    }

    loop(numeros - 1);    
}

int main()
{
    loop(10);

    return 0;
}