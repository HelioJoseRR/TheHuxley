#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void decrescente(double *numA, double *numB, double *numC, double *numD)
{
    double aux = *numA;

    if (*numA > *numB)
    {
        *numA = *numB;
        *numB = aux;
        aux = *numA;
    }

    if (*numA > *numC)
    {
        *numA = *numC;
        *numC = aux;
        aux = *numA;
    }

    if (*numA > *numD)
    {
        *numA = *numD;
        *numD = aux;
        aux = *numA;
    }

    return;
}

int main()
{
    double num1, num2, num3, num4;

    scanf("%lf%lf%lf%lf", &num1, &num2, &num3, &num4);

    decrescente(&num1, &num2, &num3, &num4);

    decrescente(&num2, &num1, &num3, &num4);

    decrescente(&num3, &num1, &num2, &num4);

    decrescente(&num4, &num1, &num2, &num3);

    printf("%.2lf\n", num4);
    printf("%.2lf\n", num2);
    printf("%.2lf\n", num1);
    printf("%.2lf\n", num3);

    return 0;
}