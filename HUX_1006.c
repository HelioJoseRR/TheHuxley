#include <stdio.h>
#include <math.h>

int main ()
{
    
    while (1){
        int numero;
        scanf("%d", &numero);

        if (numero == 0){
            break;
        }
        
        int x = ((numero - 1) / 2);
        int xMaisum = x + 1;

        printf("%d - %d\n", (int)pow(xMaisum, 2), (int)pow(x, 2));
    }
    return 0;
} 
