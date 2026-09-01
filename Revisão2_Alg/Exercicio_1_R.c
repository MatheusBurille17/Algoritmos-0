#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geradorVetor(int vetor[], int tamanho, int limite)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {
        vetor[i] = rand() % (limite + 1);
    }
}

void mostrarVetor(int vetor[], int tamanho)
{
    int i;

    for(i=0; i<tamanho; i++)
    {
        printf("%d   ", vetor[i]);
    }
}


int primos(int elemento)
{
    int i, contDiv;

    contDiv = 0;
    for(i=1; i<=elemento; i++)
    {
        if(elemento % i == 0)
        {
            contDiv++;
        }
    }

    if(contDiv == 2)
    {
        return(0);
    }
    else
    {
        return(1);
    }
}

void mostraMatriz(int tamanho, int col, int matriz[tamanho][col])
{
    int i, j;

    for(i=0; i<tamanho; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d\t ", matriz[i][j]);
        }
        printf("\n");
    }
}
int main(void)
{
    char repete;
    int tamanho = 10, limite = 50, col = 3, i;
    int vetor[tamanho], matriz[tamanho][col];

    do//Repete o codigo
    {
        geradorVetor(vetor, tamanho, limite);

        for(i=0; i<tamanho; i++)
        {
            matriz[i][0] = i;
            matriz[i][1] = vetor[i];
            matriz[i][2] = primos(vetor[i]);
        }

        //Imprime o vetor
        printf("=== VETOR ===\n");
        mostrarVetor(vetor, tamanho);

        //Imprime a matriz
        printf("\n\nINDICE  NUMERO  PRIMO\n");
        mostraMatriz(tamanho, col, matriz);


        printf("\n\nDeseja repetir o codigo(S/s)? ");
        setbuf(stdin, NULL);
        scanf("%c", &repete);
    }while(repete == 'S' && repete == 's');

    return 0;
}
