#include <stdio.h>

int main(void)
{
    int i=0, limiteI, limiteS, incremento;
    float impares, contTodos, media;
        printf("Informe o valor inicial do intervalo: ");
        scanf("%d", &limiteI);
    do
    {
        printf("Informe o valor final do intervalo: ");
        scanf("%d", &limiteS);
        if(limiteS == limiteI)
        {
            printf("Valor invalido!");
        }
    }while(limiteS == limiteI);

    if(limiteS < limiteI)
    {
        limiteS = i;
        limiteS = limiteI;
        limiteI = i;
    }

    printf("Informe o incremento: ");
    scanf("%d", &incremento);

    i=limiteI;

    while(i<=limiteS)
    {
        printf("%d\n", i);
        i= i+incremento;

        if(i%2!=0)
        {
            if(i%35==0)
            {
                impares = impares+i;
                contTodos++;
            }
        }
    }

    media = impares/contTodos;

    printf("Media: %.2f", media);4

    return 0;
}
