#include <stdio.h>

int main(void)
{
    int i=0, num, contPares;

    do
    {
        printf("Informe um numero: ");
        scanf("%d", &num);

        if(num<=0)
        {
            printf("Valor invalido!");
        }

    }while(num<=0);

    do
    {
        printf("%d\t", i);
        contPares++;

        if(contPares%5==0)
        {
            printf("\n");
        }

        i = i + 2;
    }while(contPares<num);

    return 0;
}
