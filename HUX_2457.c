#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int numero;
    scanf("%d", &numero);
    
    for (int i = 1; i <= numero; ++i){
         for (int j = 1; j <= i; ++j){
            if(j != 1){
                printf(" %d", j);
            } else {
                printf("%d", j);
            }
         }
         printf("\n");
    }
             
	return 0;
}