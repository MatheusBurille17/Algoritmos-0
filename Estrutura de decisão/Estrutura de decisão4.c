#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int num;

    srand(time(NULL));

    num = rand()%(10+1);
    printf("Valor de num: %d\n", num);

    return 0;
}
