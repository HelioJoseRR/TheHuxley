#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sequencia(int num1, int contagem)
{
    if (num1 == 1)
    {
        contagem++;

        return contagem;
    }

    if (num1 % 2 == 0)
    {
        num1 = num1 / 2;
    }
    else
    {
        num1 = (num1 * 3) + 1;
    }

    contagem++;

    return sequencia(num1, contagem);
}

void contar(int num1, int num2, int *resultado)
{
    if (num1 > num2)
    {
        return;
    }

    int novoResultado = sequencia(num1, 0);

    if (novoResultado > *resultado)
    {
        *resultado = novoResultado;
    }

    num1 += 1;

    contar(num1, num2, resultado);
}

void loop()
{
    int num1, num2;

    int scanUm = scanf("%d", &num1);
    int scanDois = scanf("%d", &num2);

    int salvar1 = num1;
    int salvar2 = num2;

    if (num1 > num2)
    {
        int aux = num1;
        num1 = num2;
        num2 = aux;
    }

    if (scanUm == 1 && scanDois == 1)
    {
        int resultado = 1;

        contar(num1, num2, &resultado);

        printf("%d %d %d\n", salvar1, salvar2, resultado);
    }
    else
    {
        return;
    }

    loop();
}

int main()
{
    loop();

    return 0;
}
