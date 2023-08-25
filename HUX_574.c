#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double cotacaoDolar, aliquotaICMS, valorProduto, valorFrete;

    scanf("%lf %lf %lf %lf", &cotacaoDolar, &aliquotaICMS, &valorProduto, &valorFrete);

    if (valorProduto >= 2500)
    {
        aliquotaICMS = aliquotaICMS / 100;

        double valorProdutoReal = valorProduto * cotacaoDolar;
        double valorFreteReal = valorFrete * cotacaoDolar;
        double valorTotal = valorProdutoReal + valorFreteReal;
        double impostoImportacao = valorProdutoReal * 0.6;

        double valorFinal = (valorProdutoReal + impostoImportacao) / (1 - aliquotaICMS);
        double valorICMS = aliquotaICMS * valorFinal;

        double totalImpostos = valorICMS + impostoImportacao;

        double totalPagar = valorTotal + totalImpostos + valorFreteReal;  

        printf("%.2lf\n", cotacaoDolar);
        printf("%.2lf\n", valorProdutoReal);
        printf("%.2lf\n", valorFreteReal);
        printf("%.2lf\n", valorTotal);
        printf("%.2lf\n", impostoImportacao);
        printf("%.2lf\n", valorICMS);
        printf("%.2lf\n", totalImpostos);
        printf("%.2lf\n", totalPagar - valorFreteReal);
        printf("Impostos calculados sem o frete\n");
    }
    else
    {
        aliquotaICMS = aliquotaICMS / 100;

        double valorProdutoReal = valorProduto * cotacaoDolar;
        double valorFreteReal = valorFrete * cotacaoDolar;
        double valorTotal = valorProdutoReal + valorFreteReal;
        double impostoImportacao = valorTotal * 0.6;

        double valorFinal = (valorProdutoReal + valorFreteReal + impostoImportacao) / (1 - aliquotaICMS);
        double valorICMS = valorFinal * aliquotaICMS;

        double totalImpostos = valorICMS + impostoImportacao;

        double totalPagar = valorTotal + totalImpostos;

        printf("%.2lf\n", cotacaoDolar);
        printf("%.2lf\n", valorProdutoReal);
        printf("%.2lf\n", valorFreteReal);
        printf("%.2lf\n", valorTotal);
        printf("%.2lf\n", impostoImportacao);
        printf("%.2lf\n", valorICMS);
        printf("%.2lf\n", totalImpostos);
        printf("%.2lf\n", totalPagar);
        printf("Impostos calculados com o frete\n");
    }

    return 0;
}
