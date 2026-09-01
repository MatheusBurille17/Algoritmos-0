#include <stdio.h>

int main(void)
{
    int num=0;

    //Validação de entrada
    while(num<=0)
    {
        printf("Informe um numero positivo: ");
        scanf("%d", &num);

        if(num<=0)
        {
            printf("Valor invalido\n");
        }
    }

    return 0;
}
