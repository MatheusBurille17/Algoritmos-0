#include <stdio.h>

int main(void)
{
    int num, i, j, k, contDiv, contPrimos;

    do
    {
        printf("Informe um numero positivo: ");
        scanf("%d", &num);

        if(num<0)
        {
            printf("Valor invalido!\n");
        }
    }while(num<0);

    for(i=num; i<=num+10; i++)// Vai imprimir o numero num+10
    {
        printf("%d ==>", i);

        contPrimos=0;
        for(j=0; j<=i; j++)// Repetição para imprimir os primos no intervalo num+10
        {
            contDiv=0;
            for(k=1; k<=j; k++)// Vai contar os divisores do numero do intervalo (ja que um numero primo só pode ter 2 divisores)
            {
                if(j%k==0)
                {
                    contDiv++;
                }
            }
            if(contDiv==2)
            {
                printf(" %d", j);//Imprime os numero primos entre o intervalo
                contPrimos++;
            }
        }

        printf(" ==> %d primo(s)\n", contPrimos);
    }

    return 0;
}
