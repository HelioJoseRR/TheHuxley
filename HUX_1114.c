#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double calcular_soma(int posicao, int auxPosicao, double soma)
{
    if (auxPosicao > posicao) return soma;

    if (auxPosicao % 2 == 0)
    {
        soma += pow(2, auxPosicao - 1) / ((auxPosicao / 2) * 3);
    }
    else
    {
        soma += auxPosicao / pow(2, auxPosicao - 1);
    }

    return calcular_soma(posicao, auxPosicao + 1, soma);
}

int main()
{
    int posicao;

    scanf("%d", &posicao);

    double soma = calcular_soma(posicao, 1, 0);

    printf("S: %.2lf", soma);

    return 0;
}