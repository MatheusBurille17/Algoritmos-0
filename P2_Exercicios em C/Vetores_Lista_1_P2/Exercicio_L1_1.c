#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../vetores.h"

int main(void)
{
    int tamanho, limiteMin = 0, limiteMax;

    do
    {
        printf("Informe o tamanho do vetor: ");
        scanf("%d", &tamanho);
        if(tamanho==0)
        {
            printf("Valor invalido!");
        }
    }while(tamanho==0);

    int vetor[tamanho];

    do
    {
        printf("Informe o limite do vetor: ");
        scanf("%d", &limiteMax);
        if(tamanho==0)
        {
            printf("Valor invalido!");
        }
    }while(tamanho==0);

    geradorVetorAleatorio(vetor, tamanho, limiteMin, limiteMax);
    mostraVetor(vetor, tamanho);
    menorNumVetor(vetor, tamanho);
    mediaVetor(vetor, tamanho);


    return 0;
}
