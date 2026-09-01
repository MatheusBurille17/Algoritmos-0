#include <stdio.h>

int main(void)
{
    int i;

    for(i=200; i>=10; i--)
    {
        if(i%3==0)
        {
            printf("%d\n", i);
        }
    }


    return 0;
}
