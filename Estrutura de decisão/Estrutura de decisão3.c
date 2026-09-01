#include <stdio.h>

int main(void)
{
    int opcao, num1, num2;

    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if(opcao>=1 && opcao<=4)
    {
        printf("Informe um numero: ");
        scanf("%d", &num1);
        printf("Informe outro numero: ");
        scanf("%d", &num2);
    }

    switch(opcao)
    {
        case 1:
            printf("%d + %d = %d\n", num1, num2, num1+num2);
            break;
        case 2:
            printf("%d - %d = %d\n", num1, num2, num1-num2);
            break;
        case 3:
            printf("%d * %d = %d\n", num1, num2, num1*num2);
            break;
        case 4:
            if(num2!=0)
            {
            printf("%d / %d = %d\n", num1, num2, num1/num2);
            }
            else
            {
                printf("Nao eh possivel dividir por zero\n");
            }
            break;

        default:
            printf("Opcao invalida\n");
    }


    return 0;
}
