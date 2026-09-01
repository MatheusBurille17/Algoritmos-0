#include <stdio.h>

int main(void)
{
    int num, pares, contPares;

    printf("Quantos numero pares quer mostra? ");
    scanf("%d", &num);

    do
    {
        printf("%d\t", pares);
        contPares++;

        if(contPares%5==0)
        {
            printf("\n");
        }

        pares += 2;

    }while(contPares<num);

    return 0;
}
