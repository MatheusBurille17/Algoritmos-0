#include <stdio.h>

int main(void)
{
    int num1, num2, num3, soma, media, produto, maior, menor;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    printf("Informe o terceiro numero: ");
    scanf("%d", &num3);

    if( num1 != num2 && num1 != num3 && num2 != num3)
    {
        soma = num1+num2+num3;
        media = soma/3;
        produto = num1*num2*num3;

        if((num1 < num2 && num1 < num3) && num2 > num3)
        {
            menor = num1;
            maior = num2;
        }
        else if((num2 < num1 && num2 < num3) && num1 > num3)
        {
            menor = num2;
            maior = num1;
        }
        else if(num1 > num2)
        {
            menor = num3;
            maior = num1;
        }
        else
        {
            menor = num3;
            maior = num1;
        }

        printf("A soma eh %d\n", soma);
        printf("A media eh %d\n", media);
        printf("O produto eh %d\n", produto);
        printf("O menor eh %d\n", menor);
        printf("O maior eh %d\n", maior);
    }
    else
    {
        printf("O programa nao suporta numeros iguais!");
    }

    return 0;
}
