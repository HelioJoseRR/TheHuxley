#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ehPrimo(int numero, int aux)
{
    if (numero <= 1)
    {
        return 0;
    }

    if (numero == aux)
    {
        return 1;
    }

    if (numero % aux == 0)
    {
        return 0;
    }

    return ehPrimo(numero, aux + 1);
}

int mdc(int numeroUm, int numeroDois)
{
    if (numeroDois == 0)
    {
        return numeroUm;
    }

    return mdc(numeroDois, numeroUm % numeroDois);
}

int batalha(int h1, int a1, int v1, int h2, int a2, int v2, int rounds)
{
    int roundPrimo = ehPrimo(rounds, 2);

    switch (h1)
    {
    case 1:
        if (roundPrimo)
        {
            v2 -= a1;
        }
        break;
    case 2:
        if (mdc(v1, v2) == 1)
        {
            a1 += 25;
        }
        break;
    case 3:
        if (ehPrimo(v1, 2) || ehPrimo(a1, 2))
        {
            a1 += 10;
        }
        break;
    default:
        break;
    }

    v2 -= a1;

    if (v2 <= 0)
    {
        return 1;
    }

    switch (h2)
    {
    case 1:
        if (roundPrimo)
        {
            v1 -= a2;
        }
        break;
    case 2:
        if (mdc(v2, v1) == 1)
        {
            a2 += 25;
        }
        break;
    case 3:
        if (ehPrimo(v2, 2) || ehPrimo(a2, 2))
        {
            a2 += 10;
        }
        break;
    default:
        break;
    }

    v1 -= a2;

    if (v1 <= 0)
    {
        return 2;
    }

    return batalha(h1, a1, v1, h2, a2, v2, rounds + 1);
}

void loop(int rodadas, int will, int gabriel)
{
    int quemComeca;

    scanf("%d", &quemComeca);

    int habilidadeWill, ataqueWill, vidaWill;
    int habilidadeGabriel, ataqueGabriel, vidaGabriel;

    scanf("%d%d%d", &habilidadeWill, &ataqueWill, &vidaWill);
    scanf("%d%d%d", &habilidadeGabriel, &ataqueGabriel, &vidaGabriel);

    int res = 0;

    if (quemComeca == 1)
    {
        res = batalha(habilidadeWill, ataqueWill, vidaWill, habilidadeGabriel, ataqueGabriel, vidaGabriel, 1);

        if (res == 1)
        {
            will++;
        }
        else
        {
            gabriel++;
        }
    }
    else
    {
        res = batalha(habilidadeGabriel, ataqueGabriel, vidaGabriel, habilidadeWill, ataqueWill, vidaWill, 1);

        if (res == 1)
        {
            gabriel++;
        }
        else
        {
            will++;
        }
    }

    if (rodadas == 1)
    {
        printf("Will ganhou %d rodadas\n", will);
        printf("Gabriel ganhou %d rodadas", gabriel);
        return;
    }

    loop(rodadas - 1, will, gabriel);
}

int main()
{
    int rodadas;

    scanf("%d", &rodadas);

    loop(rodadas, 0, 0);

    return 0;
}