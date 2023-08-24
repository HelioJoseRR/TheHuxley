#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int octeto(int aux)
{
    if (aux < 0)
    {
        return 0;
    }

    int numero;

    scanf("%d", &numero);

    if (numero == 1)
    {
        return pow(2, aux) + octeto(aux - 1);
    }
    else
    {
        return 0 + octeto(aux - 1);
    }
}

int main()
{

    int res1 = octeto(7);

    int res2 = octeto(7);

    int res3 = octeto(7);

    int res4 = octeto(7);

    printf("%d.%d.%d.%d", res1, res2, res3, res4);

    return 0;
}