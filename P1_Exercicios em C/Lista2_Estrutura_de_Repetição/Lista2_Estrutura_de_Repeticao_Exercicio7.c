#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    float raiz;

    printf("=== DIVISIVEIS POR 3 ===\n");

    for(i=1; i<=100; i++)
    {
        if(i%3==0)
        {
            printf("%d\t", i);
        }
    }

    printf("\n\n=== QUADRADO DOS DIVISIVEIS POR 3 ===\n");

    for(i=1; i<=100; i++)
    {
        if(i%3==0)
        {
            printf("%d\t", i*i);
        }
    }

    printf("\n\n=== DIVISIVEIS POR 5 ou 7 ===\n");

    for(i=1; i<=100; i++)
    {
        if(i%5==0 ||i%7==0)
        {
            printf("%d\t", i);
        }
    }

    printf("\n\n=== RAIZ QUADRADA DOS DIVISIVEIS POR 5 OU 7 ===\n");

    for(i=1; i<=100; i++)
    {
        if(i%5==0 ||i%7==0)
        {
            raiz = sqrt(i);
            printf("%.2f\t", raiz);
        }
    }

    return 0;
}
