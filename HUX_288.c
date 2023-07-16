#include <stdio.h>

int main () {
    
    /*
        interface gráfica OU inteligencia
        Encapsulamento E identação
        structs
    */

    int interfaceGrafica;
    int inteligenciaArtificial;
    int encapsulamento;
    int indentacao;
    int structs;

    scanf("%d %d %d %d %d", &interfaceGrafica, &inteligenciaArtificial, &encapsulamento, &indentacao, &structs);

    if ((interfaceGrafica == 1 || inteligenciaArtificial == 1) && ( encapsulamento == 1 && indentacao == 1) && structs == 1){
        printf("AVALIADO");
    } else {
        printf("0");
    }


    return 0;
}