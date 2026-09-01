#include <stdio.h>

int main(void)
{
    int limiteI, limiteS, x, y, i;

    printf("Informe o valor para o limite inferior de um intervalo: ");
    scanf("%d", &limiteI);

    do
    {
        printf("Informe o valor para o limite superior de um intervalo: ");
        scanf("%d", &limiteS);

        if(limiteS == limiteI)
        {
            printf("Valor invalido\n");
        }
    }while(limiteS == limiteI);

    if(limiteS < limiteI)
    {
        i = limiteS;
        limiteS = limiteI;
        limiteI = i;
    }

    printf("Informe um valor para x: ");
    scanf("%d", &x);
    printf("Informe um valor para y: ");
    scanf("%d", &y);

    for(i=limiteI; i<=limiteS; i++)
    {
        if(i%x==0 && i%y!=0)
        {
            printf("%d\t", i);
        }
    }


    return 0;
}
