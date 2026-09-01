#include <stdio.h>
#include "../vetores.h"
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char repete;

    do
    {
        int tamanho = 10, limiteMin = 1, limiteMax = 10;
        int vetorA[tamanho], vetorB[tamanho];

        geradorVetorAleatorio(vetorA, tamanho, limiteMin, limiteMax);

        printf("\n=== VETOR A ===\n");
        mostraVetor(vetorA, tamanho);

        inverterVetor(vetorA, vetorB, tamanho);

        printf("\n=== VETOR B ===\n");
        mostraVetor(vetorB, tamanho);

        printf("\n\nDeseja repetir o programa(S/s)? ");
        setbuf(stdin, NULL);
        scanf("%c", &repete);
    }while(repete == 'S' || repete == 's');

    return 0;
}
