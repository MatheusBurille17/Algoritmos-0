#include <stdio.h>

int main(void)
{
    char ch;
    do
    {
        int num, i=1, j, contDiv, contPrimos=0;

        do
        {
            printf("Informe a quantidade de numero primos que serao mostrados: ");
            scanf("%d", &num);
            if(num < 0)
            {
                printf("Valor invalido!\n");
            }
        }while(num < 0);


        do
        {
            contDiv=0;
            for(j=1; j<=i; j++)
            {
                if(i%j==0)
                {
                    contDiv++;
                }
            }
            if(contDiv==2)
            {
                printf("%d\t", i);
                contPrimos++;
            }
            i++;
        }while(contPrimos<num);

        printf("\nDeseja digitar outro numero (S/s): ");
        setbuf(stdin, NULL);
        scanf("%c", &ch);
    }while(ch=='S' || ch=='s');

    return 0;
}
