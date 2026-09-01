#include <stdio.h>

int main(void)
{
    int i, pares=0, media, j=0;

    for(i=0; i<=100; i+=2)
    {
        printf("%d\t", i);
        pares++;
        j+=i; //j = j+i;

        media = j/pares;
    }

    printf("\nMedia: %d", media);

    return 0;
}
