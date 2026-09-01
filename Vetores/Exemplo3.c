#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insereVetorInteiro(int vetorA[], int tamanho, int limite)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {
        vetorA[i] = rand() % (limite + 1);
    }
}

void mostraVetorInteiro(int vetorA[], int tamanho)
{
    int i;

    for(i=0; i<tamanho; i++)
    {
        printf("%d  ", vetorA[i]);
    }
}

int main(void)
{
    int vetorA[10], i;

    insereVetorInteiro(vetorA, 10, 5);


    /*for(i=0; i<10; i++)
    {
        printf("Informe o valor na posicao %d do vetor A: ", i);
        scanf("%d", &vetorA[i]);
    }*/

    mostraVetorInteiro(vetorA, 10);


    return 0;
}

