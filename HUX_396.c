#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    double valor = 0;
    int contarCasas = 0;
    
    while (1) {
        scanf("%d", &a);
        if (a == 999) {
            break;
        }
        
        if (a > 2) {
            valor = valor + (a - 2) * 12.89;
            ++contarCasas;
        }
    }
    
    printf("%.2lf\n%d", valor, contarCasas);
    
    return 0;
}
