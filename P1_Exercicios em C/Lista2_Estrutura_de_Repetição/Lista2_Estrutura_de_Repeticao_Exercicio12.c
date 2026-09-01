#include <stdio.h>

int main(void)
{
    int i, contTodosD3e5, somaTodosD3e5;
    float media;

    for(i=200; i>=1; i--)
    {
        if(i%2!=0 && i%5!=0)
        {
            printf("%d\t", i);
        }

        if(i%3==0 && i%5==0)
        {
            contTodosD3e5++;
            somaTodosD3e5 += i;
        }
    }

    media = (float)somaTodosD3e5/contTodosD3e5;

    printf("\nA media nos numeros divisiveis por 3 e por 5 eh: %.1f", media);


    return 0;
}
