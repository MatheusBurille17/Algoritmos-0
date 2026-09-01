#include <stdio.h>

int main(void)
{
    int i=0, num, soma1=0, soma2=0, soma3=0, somaTotal=0;

    do
    {
        printf("Informe um numero: ");
        scanf("%d", &num);
        i++;
        if(i>0 && i<=10)
        {
            soma1 = soma1+num;
        }
        if(i>=11 && i<=20)
        {
            soma2 = soma2+num;
        }
        if(i>=21 && i<=30)
        {
            soma3 = soma3+num;
        }
        if(i>0 && i<= 30);
        {
            somaTotal = somaTotal+num;
        }


    }while(i<=30);

    printf("%d\n", soma1);
    printf("%d\n", soma2);
    printf("%d\n", soma3);
    printf("%d\n", somaTotal);

    return 0;
}
