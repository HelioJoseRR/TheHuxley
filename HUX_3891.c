#include <stdio.h>

int main (){
    float notaUm, notaDois, notaTres;
    float mediaPonderadaUm,mediaPonderadaDois, media;

    scanf("%f %f %f", &notaUm, &notaDois, &notaTres);

    media = (notaUm + notaDois + notaTres)/3;
    mediaPonderadaUm = ((notaUm*2)+(notaDois*2)+(notaTres*3))/7 ;
    mediaPonderadaDois = ((notaUm*1)+(notaDois*2)+(notaTres*2))/(5) ;

    printf("%.2f\n%.2f\n%.2f", media, mediaPonderadaUm, mediaPonderadaDois);

    return 0;
}