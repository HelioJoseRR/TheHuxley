#include <stdio.h>

void loop(int maior)
{
    int numero;
    
    scanf("%d", &numero);
    
    if (numero == 0)
    {
        printf("%d", maior);
        return;
    }

    if (numero > maior)
    {
        maior = numero;
    }

    loop(maior);
}

int main() {
    
    loop(0);

	return 0;
}