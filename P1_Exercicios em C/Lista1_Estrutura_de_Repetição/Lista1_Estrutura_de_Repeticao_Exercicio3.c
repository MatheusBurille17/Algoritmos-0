#include <stdio.h>

int main(void)
{
    float i;

    for(i=0; i<=4; i += 0.25)
    {
        printf("%.2f\t", i);
    }

    return 0;
}
