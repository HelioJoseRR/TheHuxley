#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double valor_tres_anos(int dificuldade, double precoatual, int aux)
{
	if (aux == 0)
	{
		return precoatual;
	}

	double reduzir;

	switch (dificuldade)
	{
	case 0:
		reduzir = 0.25;
		break;
	case 1:
		reduzir = 0.20;
		break;
	case 2:
		reduzir = 0.18;
		break;
	case 3:
		reduzir = 0.15;
		break;
	case 4:
		reduzir = 0.12;
		break;
	case 5:
		reduzir = 0.1;
		break;
	default:
		break;
	}

	reduzir = precoatual * reduzir;

	if (precoatual <= 100)
	{
		reduzir = reduzir / 2;
	}

	if (precoatual >= 45)
	{
		if ((precoatual - reduzir) <= 45)
		{
			precoatual = 45;
		}
		else
		{
			precoatual -= reduzir;
		}
	}

	aux -= 1;

	return valor_tres_anos(dificuldade, precoatual, aux);
}

void loop(int qtdJogos, int numeroJogo)
{
	if (qtdJogos == 0)
	{
		return;
	}

	int dificuldade;
	double precoAtual;

	scanf("%d%lf", &dificuldade, &precoAtual);

	double res = valor_tres_anos(dificuldade, precoAtual, 3);

	printf("Jogo[%d] = R$%.2lf\n", numeroJogo, res);

	qtdJogos -= 1;
	numeroJogo += 1;

	loop(qtdJogos, numeroJogo);
}

int main()
{
	int qtdJogos;

	scanf("%d", &qtdJogos);

	loop(qtdJogos, 0);

	return 0;
}
