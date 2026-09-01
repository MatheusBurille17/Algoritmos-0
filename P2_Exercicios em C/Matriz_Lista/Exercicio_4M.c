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


void potenciaMatriz(int lin, int col, int matriz[lin][col], int resultado[])
{
    int i, j, k, base=0, expoente=0, potenciacao;

    for(i=0; i<lin; i++)
    {
        base = 0;
        expoente = 0;
        potenciacao = 1;
        for(j=0; j<col; j++)
        {
            if(j==0)
            {
                base = matriz[i][j];
            }
            else if(j==1)
            {
                expoente = matriz[i][j];
            }
        }
        for(k=0; k<expoente; k++)
        {
            potenciacao = potenciacao * base;
        }

        resultado[i] = potenciacao;
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

void mostrarCalculo(int lin, int col, int matriz[lin][col], int vetor[])
{
    int i, j;

    for(i=0; i<lin; i++)
    {
        for(j=0; j<col; j++)
        {
            printf(" %d\t", matriz[i][j]);
        }
        printf("\t%d", vetor[i]);
        printf("\n");
    }
}

int main(void)
{
    char repete;

    do
    {
        int lin = 10, col = 2, limite = 6;
        int matriz[lin][col], resultado[lin];

        geradorMatriz(lin, col, matriz, limite);
        potenciaMatriz(lin,col, matriz, resultado);

        printf("\n=== MATRIZ ===\n");
        mostrarMatriz(lin, col, matriz);

        printf("\n=== CALCULO DA POTENCIA ===\n");

        printf("\nBASE    EXPOENTE\tRESULTADO\n");
        mostrarCalculo(lin, col, matriz, resultado);

        printf("\n\nDeseja repetir o programa (S/s)? ");
        setbuf(stdin, NULL);
        scanf("%c", &repete);
    }while(repete == 'S' || repete == 's');

    return 0;
}
