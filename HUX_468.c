#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int loop(int aux, int soma)
{
    if (aux > 5)
    {
        return soma;
    }
    
    double num1, num2;

    scanf("%lf%lf", &num1, &num2);

    double div = (num1 - num2) / num1;

    if(div >= 0.2)
    {
        soma += 1;
    }

    return loop(aux + 1, soma);
}

int main() {

    int res = loop(1, 0);

    printf("%d", res);

	return 0;
}