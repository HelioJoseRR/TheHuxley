#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void loop(int leituras, int capacidadeMax, int pessoasElevador)
{
    if (leituras == 0)
    {
        printf("N");
        return;
    }

    int saiu, entrou;

    scanf("%d%d", &saiu, &entrou);

    pessoasElevador -= saiu;
    pessoasElevador += entrou;

    if (pessoasElevador > capacidadeMax)
    {
        printf("S");
        return;
    }

    loop(leituras - 1, capacidadeMax, pessoasElevador);
}

int main()
{
    int leituras, capacidadeMax;

    scanf("%d%d", &leituras, &capacidadeMax);

    loop(leituras, capacidadeMax, 0);

    return 0;
}