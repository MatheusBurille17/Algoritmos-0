#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void geradorMatriz(int lin, int col, int matriz[lin][col], int limite)
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
            printf("%d   ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int lin = 5, col = 5, limite = 5, i, j;
    int matriz[lin][col], somaLinhas[lin], somaColunas[col];

    geradorMatriz(lin, col, matriz, limite);

    printf("\n=== MATRIZ ===\n");
    mostrarMatriz(lin, col, matriz);

    for(i=0; i<lin; i++)
    {
        for (j=0; j<col; j++)
        {
            somaLinhas[i] += matriz[i][j];
            somaColunas[j] += matriz[i][j];
        }
    }

    printf("\n==== SOMA DAS LINHAS ====\n");
    for (i=0; i<lin; i++)
    {
        printf("%d  ", somaLinhas[i]);
    }
    printf("\n\n==== SOMA DAS COLUNAS ====\n");
    for (j=0; j<col; j++)
    {
        printf("%d  ", somaColunas[j]);
    }

    return 0;
}
