#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, contPositivos=0, contNegativoPar=0, contD3=0, somaD3, numPositivo;
    float media;

    do
    {
        printf("Informe um numero: ");
        scanf("%d", &num);

        if(num!=0)
        {
            if(num>0)
            {
                contPositivos++;
            }

            if(num<0 && num%2==0)
            {
                contNegativoPar++;
            }

            if(num%3==0)
            {
                contD3++;
                numPositivo = abs(num);
                somaD3 = somaD3 + numPositivo;

            }
        }
    }while(num!=0);

    if(contD3!=0)
    {
        media = (float)somaD3/contD3;
    }


    printf("\nNumeros positivos: %d\n", contPositivos);
    printf("\nNumeros negativos que sao pares: %d\n", contNegativoPar);
    printf("\nA media dos numeros divisiveis por 3 eh: %.1f", media);

    return 0;
}
