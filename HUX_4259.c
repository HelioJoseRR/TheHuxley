#include <stdio.h>

int main ()
{
    double ham, che, fri, ref, mil;
    double total;

    scanf("%lf%lf%lf%lf%lf", &ham, &che, &fri, &ref, &mil);

    ham *= 3;
    che *= 2.5;
    fri *= 2.5;
    ref *= 1;
    mil *= 3;

    total = ham + che + fri + ref + mil;

    printf("conta final: %.1lf", total);
    
    return 0;
}