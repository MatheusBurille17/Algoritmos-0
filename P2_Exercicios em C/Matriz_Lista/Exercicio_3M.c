#include <stdio.h>

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
    int lin = 10, col = 10, i, j;
    int matriz[10][10];

    for(i=0; i<lin; i++)
    {
        for(j=0; j<col; j++)
        {
            matriz[i][j] = 1;
        }
    }

    printf("=== MATRIZ ORIGINAL ===\n");
    mostrarMatriz(lin, col, matriz);

    //DIAGONAL PRIMARIA
    for(i=0; i<lin; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i==j)
            {
                matriz[i][j] = 0;
            }
        }
    }
    //DIAGONAL SECUNDARIA
    j=col-1;
    for(i=0; i<lin; i++)
    {
        matriz[i][j] = 0;
        j--;
    }

    printf("\n\n=== MATRIZ ATUAL ===\n");
    mostrarMatriz(lin, col, matriz);



    return 0;
}
