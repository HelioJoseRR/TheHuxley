#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ler_linhas(int colunas, int coluna, int linha, int numeros[][colunas])
{
    if (coluna == colunas) return;

    scanf("%d", &numeros[linha][coluna]);

    ler_linhas(colunas, coluna + 1, linha, numeros);
}

void ler_matriz(int linhas, int colunas, int linha, int numeros[][colunas])
{
    if (linha == linhas) return;

    ler_linhas(colunas, 0, linha, numeros);

    ler_matriz(linhas, colunas, linha + 1, numeros);
}

void ler_soma(int colunas, int coluna, int linha, int matrizSoma[][colunas], int matrizUm[][colunas], int matrizDois[][colunas])
{
    if (colunas == coluna) return;

    matrizSoma[linha][coluna] = matrizUm[linha][coluna] + matrizDois[linha][coluna];

    printf("%d\n", matrizSoma[linha][coluna]);

    ler_soma(colunas, coluna + 1, linha, matrizSoma, matrizUm, matrizDois);
}

void soma_matriz(int linhas, int colunas, int linha, int matrizSoma[][colunas], int matrizUm[][colunas], int matrizDois[][colunas])
{
    if (linha == linhas) return;

    ler_soma(colunas, 0, linha, matrizSoma, matrizUm, matrizDois);

    soma_matriz(linhas, colunas, linha + 1, matrizSoma, matrizUm, matrizDois);
}

int main() {
    int tam;

    scanf("%d", &tam);

    if (tam == 0)
    {
        printf("Vazia");
        return 0;
    }

    int matrizUm[tam][tam];
    int matrizDois[tam][tam];

    ler_matriz(tam, tam, 0, matrizUm);
    ler_matriz(tam, tam, 0, matrizDois);

    int matrizSoma[tam][tam];

    soma_matriz(tam, tam, 0, matrizSoma, matrizUm, matrizDois);

    return 0;
}
