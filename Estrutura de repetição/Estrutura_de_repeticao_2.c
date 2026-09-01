#include <stdio.h>

int main(void)
{
    int i, num;

    for(i=1; i<=5; i++)
    {
        printf("Informe um numero: ");
        scanf("%d", &num);

        if(num%2==0)
        {
            printf("%d eh par\n", num);
        }
        else
        {
            printf("%d eh impar\n", num);
        }
    }

    return 0;
}
