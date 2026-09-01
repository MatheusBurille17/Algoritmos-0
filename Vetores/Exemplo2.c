#include <stdio.h>

int main(void)
{
    int vetorA[10], i, soma, pares;
    float media;


    for(i=0; i<10; i++)
    {
        printf("Informe o numero da posicao %d no vetor A: ", i);
        scanf("%d", &vetorA[i]);
    }

    printf("\n=== VALORES MENORES QUE 7 ===\n");
    for(i=0; i<10; i++)
    {
        soma += vetorA[i];

        if(vetorA[i]<7)
        {
            printf("%d\t", vetorA[i]);
        }
    }

    media = soma/10.0;

    printf("\n\nMedia dos numeros: %.1f\n", media);

    printf("\n=== VALORES PARES ===\n");
    for(i=0; i<10; i++)
    {
        if(vetorA[i]%2==0)
        {
            printf("%d\t", vetorA[i]);
        }
    }


    return 0;
}

