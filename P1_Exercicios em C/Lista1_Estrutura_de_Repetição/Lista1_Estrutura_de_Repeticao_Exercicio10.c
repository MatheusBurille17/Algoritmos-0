#include <stdio.h>

int main(void)
{
    int i;

    for(i=0; i<=1000; i++)
    {
        if(i%11==0)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}
