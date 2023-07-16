#include <stdio.h>

int main (){

    int A, B;

    scanf("%d %d", &A, &B);

    if (A > B){
        printf("%d\n", B);
        printf("%d", A);
    } else {
       printf("%d\n", A);
        printf("%d", B);

    }

    return 0; 
}