#include <stdio.h>
#include "funcoes.h"

int main(void)
{
    int escolha, num1, num2;

    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("Escolha uma das opcoes: ");
    scanf("%d", &escolha);

    switch(escolha)
    {
        case 1:
            printf("Informe o primeiro numero: ");
            scanf("%d", &num1);
            printf("Informe o segundo numero: ");
            scanf("%d", &num2);
            printf("Soma: %d\n", soma(num1, num2));
            break;
        case 2:
            printf("Subtracao: %d\n", subtracao());
            break;
        case 3:
            multiplicacao();
            break;
        case 4:
            printf("Informe o primeiro numero: ");
            scanf("%d", &num1);

            //Validar se num2 para que nao seja zero.
            do
            {
                printf("Informe o segundo numero: ");
                scanf("%d", &num2);
                if(num2==0)
                {
                    printf("Valor invalido!\n");
                }
            }while(num2==0);

            divisao(num1, num2);
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}
