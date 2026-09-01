#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../vetores.h"

void tabuada(int num)//Funcao Tabuada
{
    int i;

    printf("\n=== TABUADA DE %d ===\n", num);

    for(i=0; i<=10; i++)
    {
        printf("%d * %d = %d\n", num, i, num*i);
    }
}


int main(void)
{
    char repete;
    do
    {

        int vetor[5], i, tamanho = 5, limiteMin = 1, limiteMax = 9;

        geradorSemRepetir(vetor, tamanho, limiteMin, limiteMax);

        printf("=== Vetor ===\n");
        mostraVetor(vetor, tamanho);
        printf("\n");

        for(i=0; i<tamanho; i++)
        {
            tabuada(vetor[i]);
            printf("\n\n");
        }

        printf("Deseja repetir o programa (S/s): ");
        setbuf(stdin, NULL);
        scanf("%c", &repete);
    }while(repete == 'S' || repete == 's');

    return 0;
}
