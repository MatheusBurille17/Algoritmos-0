#include <stdio.h>

int main(void)
{
    int ano;

    printf("Informe o ano: ");
    scanf("%d", &ano);

    if(ano%4==0 && ano%100!=0)
    {
        printf("O ano informado eh bissexto");
    }
    else
    {
        printf("O ano informado nao eh bissexto");
    }

    return 0;
}
