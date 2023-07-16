#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
   /*
            ValorDiaria = 90 * dia
            ValorKm = (km - dia * 100) * 12 --> 12*km - 1200 * dia
            entrada --> dias e km --> duas casas decimais
            gasto --> valorkm + valor diaria
   
   */

    int valorDiaria = 0;
    int valorKm = 0;
    int km, dia;
    double gasto = 0;

    scanf("%d %d", &dia, &km);

    if ( dia * km > dia * 100){

    valorKm = (12 * km) - 1200 * dia;
    valorDiaria = 90 * dia;
    gasto = valorDiaria + valorKm;
   
    } else {
        valorKm = 0;
        valorDiaria = 90* dia;
        gasto = valorDiaria + valorKm;
    }

    printf("%.2lf\n", gasto);

	return 0;
}