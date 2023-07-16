#include <stdio.h>

int main ()
{
    // P = M.A 
    double pesoTerra, massa;
    
    scanf("%lf", &pesoTerra);

    massa = pesoTerra / 9.8;

    printf("%.2lf\n", (massa * 273.42));
    printf("%.2lf\n", (massa * 3.78));
    printf("%.2lf\n", (massa * 8.6));
    printf("%.2lf\n", (massa * 9.8));
    printf("%.2lf\n", (massa * 3.72));
    printf("%.2lf\n", (massa * 24.8));
    printf("%.2lf\n", (massa * 10.5));
    printf("%.2lf\n", (massa * 8.5));
    printf("%.2lf\n", (massa * 10.8));
    printf("%.2lf\n", (massa * 5.88));
    printf("%.2lf\n", (massa * 1.67));

    return 0;
}