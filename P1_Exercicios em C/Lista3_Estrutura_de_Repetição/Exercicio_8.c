#include <stdio.h>

int main(void)
{
    int num, soma, centena, dezena, unidade;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num>=0)
        {
            centena = num/100;
            dezena = num%100/10;
            unidade = num%10;

            soma = centena + dezena + unidade;

            printf("A soma dos digitos eh: %d\n", soma);
            printf("centena %d\n", centena);
            printf("dezena %d\n", dezena);
            printf("unidade %d\n", unidade);
        }
    }while(num>=0);



    return 0;
}
