#include <stdio.h>

int main (void){

    int A, B, C ;
    int maior, medio, menor;

    scanf("%d %d %d", &A, &B, &C);

    if (A>=B && A>=C){
        maior = A;
        if(B>=C){
            menor = C;
            medio = B;
        } else{
            menor = B;
            medio = C;
        }
    } else if (B >= A && B>=C){
        maior = B;
        if(A>=C){
            menor = C;
            medio = A;
        } else{
            menor = A;
            medio = C;
        }
    } else if (C >= A && C>=B) {
        maior = C;
         if(B>=A){
            menor = A;
            medio = B;
        } else{
            menor = B;
            medio = A;
        }
    }

    printf("%d\n%d\n%d", menor, medio, maior);

    return 0;
}