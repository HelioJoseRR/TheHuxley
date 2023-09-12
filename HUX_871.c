#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ler_colunas(int i, int colunas, int j, int numeros[][colunas])
{
    if (colunas == j) return;
    
    scanf("%d", &numeros[i][j]);
    
    ler_colunas(i, colunas, j + 1, numeros);
}

void ler(int linhas, int colunas, int i, int numeros[linhas][colunas], int *somaD1, int *somaD2, int aux)
{
    if (linhas == i) return;
    
    ler_colunas(i, colunas, 0 , numeros);
    
    *somaD1 += numeros[i][i];
    *somaD2 += numeros[i][aux];
    
    ler(linhas, colunas, i + 1, numeros, somaD1, somaD2, aux - 1);
}

void relacaoZeroColunas(int i, int colunas, int j, int numeros[i][colunas], int *menorZero, int *maiorZero)
{
    if (colunas == j) return;

    if (numeros[i][j] > 0) *maiorZero += 1;
    else if (numeros[i][j] < 0) *menorZero += 1;

    relacaoZeroColunas(i, colunas, j + 1, numeros, menorZero, maiorZero);
}   

void relacaoZero(int linhas, int colunas, int i, int numeros[linhas][colunas], int *menorZero, int *maiorZero)
{
    if (linhas == i) return;

    relacaoZeroColunas(i, colunas, 0, numeros, menorZero, maiorZero);

    relacaoZero(linhas, colunas, i + 1, numeros, menorZero, maiorZero);
}

void imprimirColunas(int i, int colunas, int numeros[i][colunas], int j)
{
    if (j == colunas) return;
    
    if (j != colunas - 1) printf("%d ", numeros[i][j]);
    else printf("%d", numeros[i][j]);

    imprimirColunas(i, colunas, numeros, j + 1);
}

void imprimir(int linhas, int colunas, int numeros[linhas][colunas], int i)
{
    if (i == linhas) return;

    imprimirColunas(i, colunas, numeros, 0);

    printf("\n");

    imprimir(linhas, colunas, numeros, i + 1);
}

int main() {
    int linhas, colunas;
    int somaD1 = 0, somaD2 = 0;
    
    scanf("%d%d", &linhas, &colunas);
    
    int numeros[linhas][colunas];
    
    ler(linhas, colunas, 0, numeros, &somaD1, &somaD2, colunas - 1);

    int menorZero = 0;
    int maiorZero = 0;
    
    relacaoZero(linhas, colunas, 0, numeros, &menorZero, &maiorZero);
    
    printf("Matriz formada:\n");

    imprimir(linhas, colunas ,numeros, 0);

    if (linhas == colunas)
    {
        printf("A diagonal principal e secundaria tem valor(es) %d e %d respectivamente.\n", somaD1, somaD2);
    }
    else
    {
        printf("A diagonal principal e secundaria nao pode ser obtida.\n");
    }
	
    printf("A matriz possui %d numero(s) menor(es) que zero.\n", menorZero);

    printf("A matriz possui %d numero(s) maior(es) que zero.\n", maiorZero);

    return 0;
}