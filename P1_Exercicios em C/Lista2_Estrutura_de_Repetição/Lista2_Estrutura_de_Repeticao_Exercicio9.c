#include <stdio.h>

int main(void)
{
    int num=0, contM10=0, contImpar=0, contD10=0, contEntre10e100=0,  cont30=0, contDiferente=0;

    do
    {
        printf("Informe um numero (negativo para finalizar): ");
        scanf("%d", &num);

        if(num>=0)
        {
            if(num < 10 || num > 100)
            {
                contM10++;
            }

            if(num%2!=0)
            {
                contImpar++;
            }

            if(num%10==0)
            {
                contD10++;
            }

            if(num > 10 && num < 100)
            {
                contEntre10e100++;
            }

            if(num==30)
            {
                cont30++;
            }

            if(num != 10 && num != 20 && num != 30)
            {
                contDiferente++;
            }
        }

    }while(num>=0);

    printf("\nA quantidade de numeros menores que 10 ou maiores que 100 eh: %d\n", contM10);
    printf("A quantidade de numeros impares eh: %d\n", contImpar);
    printf("A quantidade de numeros divisiveis por 10 eh: %d\n", contD10);
    printf("A quantidade de numeros entre 10 e 100 eh: %d\n", contEntre10e100);
    printf("O numero de vezes que foi informado o numero 30 eh: %d\n", cont30);
    printf("A quantidade de vezes que foi informado um numero diferente de 10,  de 20 e de 30 eh: %d\n", contDiferente);

    return 0;
}
