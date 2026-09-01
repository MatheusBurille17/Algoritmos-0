#include <stdio.h>

int main(void)
{
    int i, contador;

    for(i=1000; i>=0; i-=10)
    {
        printf("%d\t", i);

        contador++;

        if(contador%8==0)
        {
            printf("\n");
        }
    }

    return 0;
}
