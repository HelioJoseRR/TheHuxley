#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sort(int numeros[], int tam, int j)
{
    if (j == tam)
        return;

    if (numeros[j] < numeros[j + 1])
    {
        int aux = numeros[j];
        numeros[j] = numeros[j + 1];
        numeros[j + 1] = aux;
    }

    sort(numeros, tam, j + 1);
}

void bolha(int numeros[], int tam)
{
    if (tam < 0)
        return;

    sort(numeros, tam, 0);

    bolha(numeros, tam - 1);
}

int main()
{
    int qtdNumeros;
    int digitoFinal;
    int i;

    scanf("%d %d", &qtdNumeros, &digitoFinal);

    int numeros[qtdNumeros];

    for (i = 0; i < qtdNumeros; i++)
    {
        scanf("%d", &numeros[i]);
    }

    bolha(numeros, qtdNumeros - 1);

    int aux = 4;
    int resultado[5] = {-1, -1, -1, -1, -1};

    for (i = 0; i < qtdNumeros; ++i)
    {
        if (numeros[i] % 10 == digitoFinal)
        {
            resultado[aux] = numeros[i];
            aux--;
        }
    }

    for (i = 0; i < 5; ++i)
    {
        printf("%d\n", resultado[i]);
    }

    return 0;
}