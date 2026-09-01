#include <stdio.h>

int main(void)
{
    char repetir;
    int num, i, j;

    do
    {
        do
        {
            printf("Informe a quantidade de numero primos que serao mostrados: ");
            scanf("%d", &num);

            if(num<0)
            {
                printf("Valor invalido!\n");
            }
        }while(num<0);

        for(i=1; i<=num; i++)
        {
            if(num%1==0 && num%num==0)
            {
                printf("%d\t", i);
            }
        }

        printf("\nDeseja digitar outro numero (S/s): ");
        setbuf(stdin, NULL);
        scanf("%c", &repetir);
    }while(repetir == 'S' || repetir == 's');


    return 0;
}
