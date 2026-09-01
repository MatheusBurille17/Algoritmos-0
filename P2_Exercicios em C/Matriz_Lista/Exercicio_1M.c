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
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int somaDeTodosOsElementos(int lin, int col, int matriz[lin][col])
{
    int i, j, soma=0;

    for(i=0; i<lin; i++)
    {
        for(j=0; j<col; j++)
        {
            soma = soma + matriz[i][j];
        }
    }

    return(soma);
}

int somaDiagonalPrincilpal(int lin, int col, int matriz[lin][col])
{
    int i, j, soma=0;

    for(i=0; i<lin; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i==j)
            {
                soma = soma + matriz[i][j];
            }
        }
    }
    return(soma);
}

int somaDiagonalSecundaria(int lin, int col, int matriz[lin][col])
{
    int i, j, soma=0;

    j=col-1;

    for(i=0; i<lin; i++)
    {
        soma = soma + matriz[i][j];
        j--;
    }
    return(soma);
}

int main(void)
{
    int lin=3, col=3, limite=10;
    int matriz[lin][col];

    geradorMatriz(lin, col, matriz, limite);

    printf("=== MATRIZ ===\n");
    mostrarMatriz(lin, col, matriz);

    printf("\nSoma dos elementos da diagonal secundaria: %d", somaDiagonalSecundaria(lin, col, matriz));
    printf("\nSoma dos elementos da diagonal principal: %d", somaDiagonalPrincilpal(lin, col, matriz));
    printf("\nSoma de todos os elementos: %d", somaDeTodosOsElementos(lin, col, matriz));

    return 0;
}
