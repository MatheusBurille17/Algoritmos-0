#include <stdio.h>

int main(void)
{
    int vetorA[5], vetorB[5], i;

    for(i=0; i<5; i++)
    {
        printf("Informe o valor na posicao %d do vetor A: ", i);
        scanf("%d", &vetorA[i]);
    }

    for(i=0; i<5; i++)
    {
       vetorB[i] = 2*vetorA[i];
       printf("%d\t", vetorB[i]);
    }

    return 0;
}
