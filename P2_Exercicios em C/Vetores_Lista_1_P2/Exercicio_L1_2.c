#include <stdio.h>
#include "../vetores.h"
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char repete;

    do
    {
        int tamanhoVetor = 15, limiteMin = 1, limiteMax = 25;
        int vetor[tamanhoVetor];

        geradorVetorAleatorio(vetor, tamanhoVetor, limiteMin, limiteMax);


        printf("\n=== VETOR ===\n");
        mostraVetor(vetor, tamanhoVetor);

        printf("\n\n=== VETOR DE PARES ===\n");
        mostraVetorPares(vetor, tamanhoVetor);

        printf("\n\n=== VETOR DE IMPARES ===\n");
        mostraVetorImpares(vetor, tamanhoVetor);

        printf("\n\nDeseja repetir o programa(S/s)? ");
        setbuf(stdin, NULL);
        scanf("%c", &repete);
    }while(repete == 'S' || repete == 's');

    return 0;
}
