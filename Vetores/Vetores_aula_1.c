#include <stdio.h>

int main(void)
{
    float nota1[5], nota2[5], media[5];
    int i;

    //Entrada de dados no vetor nota1
    for(i=0; i<5; i++)
    {
        printf("Informe a nota que vai na posicao %d do vetor nota 1: ", i);
        scanf("%f", &nota1[i]);
    }

    //Entrada de dados no vetor nota2
    for(i=0; i<5; i++)
    {
        printf("Informe a nota que vai na posicao %d do vetor nota 2: ", i);
        scanf("%f", &nota2[i]);
    }

    //Calculo da média
    for(i=0; i<5; i++)
    {
        media[i] = (nota1[i] + nota2[i])/2;
    }

    //Imprimir o vetor
    printf("\n=== VETOR NOTA 1 ===\n");
    for(i=0; i<5; i++)
    {
        printf("%.1f  ", nota1[i]);
    }

    printf("\n\n=== VETOR NOTA 2 ===\n");
    for(i=0; i<5; i++)
    {
        printf("%.1f  ", nota2[i]);
    }

    printf("\n\n=== MEDIA ===\n");
    for(i=0; i<5; i++)
    {
        printf("%.1f  ", media[i]);
    }

    return 0;
}
