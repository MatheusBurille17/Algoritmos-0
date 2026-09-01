#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geraMatrizInteiroDe1aLimite(int lin, int col, int matriz[lin][col], int limite)
{
    int i, j;
    srand(time(NULL));

    for(i=0; i<lin; i++)
    {
        for(j=0; j<col; j++)
        {
            matriz[i][j] = rand() % limite + 1;
        }
    }
}

void mostrarMatriz(int lin, int col, int matriz[lin][col])
{
    int i, j;

    for(i=0; i<lin; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int lin=5, col=5, limite=5, soma=0, i, j, k=0, l=0;
    int matriz[lin][col];
    int vetorSomaLinhas[k], vetorSomaColunas[l];

    geraMatrizInteiroDe1aLimite(lin, col, matriz, limite);

    printf("\n===== MATRIZ ====\n");
    mostrarMatriz(lin, col, matriz);

    for(i=0; i<lin; i++)
    {
        vetorSomaLinhas[k] += matriz[i][j];
        k++;
    }


    //IMPRESSAO
    printf("\n=== SOMA DAS Colunas ===\n");
    for(i=0; i<k; i++)
    {
        printf("%d  ", vetorSomaLinhas[i]);
    }
    printf("\n=== SOMA DAS linhas ===\n");
    for(i=0; i<l; i++)
    {
        printf("%d  ", vetorSomaColunas[i]);
    }

    return 0;
}
