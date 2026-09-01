#include <stdio.h>

int main(void)
{

    int num=1, maior=0, menor=0, primeiro=0;

    while(num != 0)
    {

        printf("Informe um numero: ");
        scanf("%d", &num);

        if(num != 0)
        {
            if(primeiro == 0)
            {
                maior = num;
                menor = num;
                primeiro = 1;
            }
            else
            {
                if(num > maior)
                {
                    maior = num;
                }
                else if(num < menor)
                {
                    menor = num;
                }
            }

        }
    }
        printf("\nMaior: %d\nMenor: %d", maior, menor);

    return 0;
}

