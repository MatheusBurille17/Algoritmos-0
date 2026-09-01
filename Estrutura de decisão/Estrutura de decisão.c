#include <stdio.h>

int main(void)
{
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    //num >= 0 ? printf("Positivo") : printf("Negativo");

    if(num > 10)
    {
        printf("%d eh maior que 10\n", num);
    }
    else if(num < 10)
    {
        printf("%d eh menor que 10\n", num);
    }
    else
    {
            printf("%d eh igual a 10\n", num);
    }


    return 0;
}
