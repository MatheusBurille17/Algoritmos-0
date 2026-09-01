#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main(void)
{
    int i, tamanho, limite;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    printf("Informe o limite de numeros aleatorios do vetor: ");
    scanf("%d", &limite);

    int vetor[tamanho];

    geradorVetorAleatorio(vetor, tamanho, limite);

    printf("\n=== VETORES DESORDENADOS ===\n\n");

    mostraVetor(vetor, tamanho);

    ordenaVetor(vetor, tamanho);

    printf("\n\n=== VETOR ORDENADO ===\n\n");

    mostraVetor(vetor, tamanho);
}
