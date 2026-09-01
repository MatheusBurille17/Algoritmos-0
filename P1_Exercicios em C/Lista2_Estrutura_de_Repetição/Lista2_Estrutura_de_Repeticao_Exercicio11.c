#include <stdio.h>

int main(void)
{
    int num;
    float i, soma;

    do
    {
        printf("Informe um numero: ");
        scanf("%d", &num);
    }while(num==0);

    printf("Soma = ");

    for(i=1; i<=num; i++)
    {
        soma = soma + 1/i;

        printf("+ 1/%.0f ", i);
    }

    printf("= %.2f", soma);

    return 0;
}
