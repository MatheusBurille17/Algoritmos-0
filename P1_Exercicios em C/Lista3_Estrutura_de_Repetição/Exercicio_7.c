#include <stdio.h>

int main(void)
{
    int base, expoente, i, j, resultado=1;

    printf("Informe o valor da base: ");
    scanf("%d", &base);

    printf("Informe o valor do expoente: ");
    scanf("%d", &expoente);

    for(j=1; j<=expoente; j++)
    {
        resultado = resultado*base;
    }

    for(i=1; i<=expoente; i++)
    {
        printf("%d ", base);

        if(i<expoente)
        {
            printf("* ");
        }
    }

    printf("= %d", resultado);

    return 0;
}
