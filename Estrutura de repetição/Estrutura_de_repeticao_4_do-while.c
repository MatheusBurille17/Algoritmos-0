#include <stdio.h>

int main(void)
{
    int num;

    //Validação de um numero
    do
    {
        printf("Informe um numero com 4 digitos: ");
        scanf("%d", &num);

        if(num<1000 || num>9999)
        {
            printf("Valor invalido\n");
        }

    }while(num<1000 || num>9999);

    return 0;
}
