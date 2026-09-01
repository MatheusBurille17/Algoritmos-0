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
    char repete;

    do
    {
        int lin = 3, col = 3, limite = 100, maior=0, i, j, coluna, linha;
        int matriz[lin][col];

        geradorMatriz(lin, col, matriz, limite);

        for(i=0; i<lin; i++)
        {
            for(j=0; j<col; j++)
            {
                if(matriz[i][j] >= maior)
                {
                    maior = matriz[i][j];
                    coluna = j+1;
                    linha = i+1;
                }
            }
        }

        printf("=== MATRIZ ===\n");
        mostrarMatriz(lin, col, matriz);

        printf("\nO maior elemento da matriz eh %d e se encontra na coluna %d da linha %d", maior, coluna, linha);



        printf("\n\nDeseja repetir o programa (S/s)? ");
        setbuf(stdin, NULL);
        scanf("%c", &repete);
    }while(repete == 'S' || repete == 's');

    return 0;
}
