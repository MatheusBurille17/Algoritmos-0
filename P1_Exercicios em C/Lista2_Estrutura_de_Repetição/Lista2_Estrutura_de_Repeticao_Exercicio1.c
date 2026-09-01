#include <stdio.h>

int main(void)
{
    int num, i, pares=0, produto=1;
    float media, contTodos, somaTodos;

    do
    {

        printf("Informe um numero: ");
        scanf("%d", &num);

    }while(num<=2);

    for(i=2; i<=num; i++)
    {
        if(i%2==0)
        {
            printf("%d\n", i);

            pares += i;
        }
        else
        {
            if(i%9==0)
            {
                produto = produto*i;
            }
        }

        somaTodos = somaTodos+i;
        contTodos++;
    }

    media = somaTodos/contTodos;


    printf("soma pares: %d\n", pares);
    printf("Produto dos impares divisiveis por 9: %d\n", produto);
    printf("Media: %.2f", media);

    return 0;
}
