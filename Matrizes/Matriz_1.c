#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geraMatrizInteiroDe0aLimite(int lin, int col, int matriz[lin][col], int limite)
{
    int i, j;
    srand(time(NULL));

    for(i=0; i<lin; i++)
    {
        for(j=0; j<col; j++)
        {
            matriz[i][j] = rand() % (limite+1);
        }
    }
}

void imprimeMatriz(int lin, int col, int matriz[lin][col])
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
    int i, j, lin, col, limite;

    printf("Informe a quantide de linhas da matriz: ");
    scanf("%d", &lin);

    printf("Informe a quantide de colunas da matriz: ");
    scanf("%d", &col);

    printf("Informe o limite da matriz: ");
    scanf("%d", &limite);

    int matriz[lin][col];

    //Inserindo valores rand�micos na matriz
    geraMatrizInteiroDe0aLimite(lin, col, matriz, limite);

    //Imprime matriz
    printf("\n===== MATRIZ ====\n");
    imprimeMatriz(lin, col, matriz);



    return 0;
}
