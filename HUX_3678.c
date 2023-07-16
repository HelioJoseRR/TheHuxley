#include <stdio.h>

int main ()
{
    int saque, manju, yakitori, pessoas, copoSaque;
    int saqueTotal, manjuTotal, yakitoriTotal;

    scanf("%d%d%d%d", &saque, &manju, &yakitori, &pessoas);

    copoSaque = (saque * 675)/45;
    
    saqueTotal = 4 * pessoas;
    manjuTotal = 5 * pessoas;
    yakitoriTotal = 3 * pessoas;

    if (copoSaque >= saqueTotal	&& manju >= manjuTotal && yakitori >= yakitoriTotal)
    {
        printf("Partiu Festa do Japa!\n");
    }

    if (copoSaque < saqueTotal	&& manju < manjuTotal && yakitori < yakitoriTotal)
    {
        printf("Partiu Festa do Japa...Japacama\n");
    }

    if ( copoSaque < saqueTotal && manju >= manjuTotal && yakitori >= yakitoriTotal)
    {
        printf("Faltaram %d saques\n", (saqueTotal - copoSaque));
    }

    if ( manju < manjuTotal && copoSaque >= saqueTotal && yakitori >= yakitoriTotal)
    {
        printf("Faltaram %d manjus\n", (manjuTotal - manju));
    }

    if ( yakitori < yakitoriTotal && manju >= manjuTotal && copoSaque >= saqueTotal)
    {
        printf("Faltaram %d saques\n", (yakitoriTotal - yakitori));
    }

    if (copoSaque < saqueTotal && manju < manjuTotal && yakitori >= yakitoriTotal)
    {
        printf("Faltaram %d saques e %d manjus\n", (saqueTotal - copoSaque), (manjuTotal - manju));
    }

    if (copoSaque < saqueTotal && yakitori < yakitoriTotal && manju >= manjuTotal)
    {
        printf("Faltaram %d saques e %d yakitoris\n", (saqueTotal - copoSaque), (yakitoriTotal - yakitori));
    }

    if (manju < manjuTotal && yakitori < yakitoriTotal && copoSaque >= saqueTotal)
    {
        printf("Faltaram %d manjus e %d yakitoris\n", (manjuTotal - manju), (yakitoriTotal - yakitori));
    }

    return 0;
}