#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void loop( double *soma, int aux)
{
    if(aux > 3)
    {
        return; 
    }

    double preco, qtd;

    scanf("%lf%lf", &qtd, &preco);

    *soma += qtd * preco;

    loop(soma, aux + 1);
}

int main() {
    int valorArvore;

    scanf("%d", &valorArvore);

    double soma = valorArvore;

    loop(&soma, 1);

    printf("%.2lf\n", soma);
    printf("%.2lf", soma / 21);

	return 0;
}