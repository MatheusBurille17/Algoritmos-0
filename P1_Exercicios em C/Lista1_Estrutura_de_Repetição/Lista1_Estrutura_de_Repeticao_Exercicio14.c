#include <stdio.h>

int main(void)
{
    int i, pares=0, imparesNpor3=0, divisivelpor5=0, media=0;

    for(i=100; i<=200; i++)
    {
        printf("%d\t", i);


        if(i%2==0)
        {
            pares++;
        }
        if(i%2!=0 && i%3!=0)
        {
            imparesNpor3++;
        }
        if(i%5==0)
        {
            divisivelpor5++;
        }

        media = (pares+divisivelpor5)/2;
    }
    printf("\nResultado:\n");
    printf("Impares nao dividiveis por 3: %d\n", imparesNpor3);
    printf("Media dos pares e divisiveis por 5: %d\n", media);

    return 0;
}
