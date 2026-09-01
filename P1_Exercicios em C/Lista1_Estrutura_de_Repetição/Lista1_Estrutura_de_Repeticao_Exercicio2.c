/*2) Apresentar os múltiplos de 5, entre 5 e 50 separados por tabulação.*/
#include <stdio.h>

int main(void)
{
    int i;

    for(i=5; i<=50; i++)
    {
        if(i%5==0)
        printf("%d\t", i);
    }
}
