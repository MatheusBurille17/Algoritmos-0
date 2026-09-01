#include <stdio.h>

int main(void)
{
    int num, i, fat=1;

    do
    {
         printf("Informe um numero: ");
         scanf("%d", &num);

        if(num<1 || num>20)
        {
            printf("Valor invalido!");
        }
    }while(num<1 || num>20);

    printf("%d!=", num);

    for(i=num; i>=2; i--)
    {
        fat = fat*i;
        printf("%d * ", i);
    }

    printf("1= %d\n", fat);


    return 0;
}
