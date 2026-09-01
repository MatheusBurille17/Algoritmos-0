#include <stdio.h>

int main(void)
{
    int num1, num2, num3, menor, meio, maior;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    printf("Informe o terceiro numero: ");
    scanf("%d", &num3);

    if(num1 != num2 && num1 != num3 && num2 != num3)
    {
        //Achar o menor numero
        if(num1 < num2 && num1 < num3)
        {
            menor = num1;
        }
        else if(num2 < num1 && num2 < num3)
        {
            menor = num2;
        }
        else
        {
            menor = num3;
        }
        //Achar o numero maior
        if(num1 > num2 && num1 > num3)
        {
            maior = num1;
        }
        else if(num2 > num1 && num2 > num3)
        {
            maior = num2;
        }
        else
        {
            maior = num3;
        }
        //Achar numero do meio
        if(num1 < maior && num1 > menor)
        {
            meio = num1;
        }
        else if(num2 < maior && num2 > menor)
        {
            meio = num2;
        }
        else
        {
            meio = num3;
        }

        printf("Menor: %d\n", menor);
        printf("Meio: %d\n", meio);
        printf("Maior: %d\n", maior);
    }
    else
    {
        printf("O programa nao suporta numeros iguais!");
    }


    return 0;
}
