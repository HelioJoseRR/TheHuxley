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

    return sequencia(num1, contagem + 1);
}

void contar(int num1, int num2, int *resultado)
{
    if (num1 > num2)
        return;

    int novoResultado = sequencia(num1, 0);

    if (novoResultado > *resultado)
    {
        *resultado = novoResultado;
    }

    contar(num1 + 1, num2, resultado);
}

void loop()
{
    int num1, num2;

    if (scanf("%d %d", &num1, &num2) == EOF)
    {
        return;
    }
    else
    {
        int salvar1 = num1;
        int salvar2 = num2;

        if (num1 > num2)
        {
            int aux = num1;
            num1 = num2;
            num2 = aux;
        }

        int resultado = 1;

        contar(num1, num2, &resultado);

        printf("%d %d %d\n", salvar1, salvar2, resultado);

        loop();
    }
}

int main()
{
    loop();

    return 0;
}
