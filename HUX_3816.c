#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int proximoPrimo(int numero)
{
    numero++;

    if(ehPrimo(numero, 2) == 1)
    {
        return numero;
    }
    else
    {
        return proximoPrimo(numero);
    }
}

int ehPrimo(int numero, int aux)
{
    if(numero <= 1)
    {
        return 0;
    }

    if (numero == aux)
    {
        return 1;
    }
    
    if(numero % aux == 0)
    {
        return 0;
    }

    return ehPrimo(numero, aux + 1);
}

int fatorial(int numero)
{
    if (numero == 0)
    {
        return 1;
    }
    else
    {
        return numero * fatorial(numero - 1);
    }
}

int soma(int numero)
{
    if (numero == 0)
    {
        return 0;
    }

    return numero % 10 + soma(numero / 10);
}

void loop(int tamanho, int aux, int *menorSoma, int *maiorSoma)
{
    int numero;

    scanf("%d", &numero);

    int somaDigitos = soma(numero);

    if (somaDigitos > *maiorSoma)
    {
        *maiorSoma = somaDigitos;
    }

    if (tamanho == aux)
    {
        *menorSoma = numero;
    }

    if (somaDigitos < *menorSoma)
    {
        *menorSoma = somaDigitos;
    }

    printf("N: %d - Soma: %d\n", numero, somaDigitos);

    if (tamanho == 1)
    {
        printf("\n");
        return;
    }

    loop(tamanho - 1, aux, menorSoma, maiorSoma);
}

int main()
{
    int tamanhoLoop;

    scanf("%d", &tamanhoLoop);

    int maiorSoma = 0;
    int menorSoma = 0;

    loop(tamanhoLoop, tamanhoLoop, &menorSoma, &maiorSoma);

    printf("Maior soma: %d\n", maiorSoma);
    printf("Menor soma: %d\n", menorSoma);

    double y = (double)(fatorial(menorSoma) + proximoPrimo(menorSoma)) / maiorSoma;

    printf("Valor Y: %.2lf", y);

    return 0;
}