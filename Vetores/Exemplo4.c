#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

void ordenaVetor(int vetor[], int tam)
{
    int aux, i, j;

    for(j=tam-1; j>0; j--)
    {
        for(i=0; i<j; i++)
        {
            if(vetor[i] > vetor[i+1])
            {
                aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
            }
        }
    }
}


int main(void)
{
    int vetor[10], i;

    for(i=0; i<10; i++)
    {
        printf("Informe um valor para a posicao %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\n=== VETORES DESORDENADOS ===\n");

    for(i=0; i<10; i++)
    {
        printf("%d  ", vetor[i]);
    }

    ordenaVetor(vetor, 10);

    printf("\n=== VETOR ORDENADO ===\n\n");

    for(i=0; i<10; i++)
    {
        printf("%d  ", vetor[i]);
    }
}

