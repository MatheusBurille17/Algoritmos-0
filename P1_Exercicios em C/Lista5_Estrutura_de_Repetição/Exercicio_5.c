#include <stdio.h>

int main(void)
{
    int limiteI, limiteS, n, i, j;

    do
    {
        printf("Informe o valor do limite inferior do intervalo: ");
        scanf("%d", &limiteI);


        printf("Informe o valor do limite superior do intervalo: ");
        scanf("%d", &limiteS);

        printf("Informe quantos numeros deseja imprimir por linha: ");
        scanf("%d", &n);


    }while(n < 0 || limiteI <= 1 || limiteS < limiteI);

    printf("BAHHH");

    return 0;
}
