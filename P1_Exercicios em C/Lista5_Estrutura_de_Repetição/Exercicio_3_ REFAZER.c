#include <stdio.h>

int main(void)
{
    int num, i, j, k, contDiv, contPrimos;

    do//Validar a entrada
    {
        printf("Informe um numero positivo: ");
        scanf("%d", &num);

        if(num<=0)
        {
            printf("Valor invalido\n");
        }

    }while(num<=0);

    for(i=num; i<=num+10; i++)
    {
        printf("\n%d ==>", i);

        contPrimos=0;
        for(j=0; j<=i; j++)
        {
            contDiv=0;

            for(k=1; k<=j; k++)
            {
                if(j%k==0)
                {
                    contDiv++;
                }
            }

            if(contDiv == 2)
            {
                printf(" %d", j);
                contPrimos++;
            }
        }
        printf(" ==> %d primo(s)", contPrimos);
    }

    return 0;
}
