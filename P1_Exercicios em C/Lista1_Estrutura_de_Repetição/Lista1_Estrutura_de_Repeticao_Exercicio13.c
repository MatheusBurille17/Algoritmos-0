#include <stdio.h>

int main(void)
{
    int i=0, num, pares=0, impares=0, divisivelpor7=0;

    do
    {
        printf("Informe um numero: ");
        scanf("%d", &num);

        if(i%2==0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
        if(i%7==0)
        {
            divisivelpor7++;
        }

        i++;

    }while(i<=10);

    printf("%d\n", pares);
    printf("%d\n", impares);
    printf("%d\n", divisivelpor7);

    return 0;
}
