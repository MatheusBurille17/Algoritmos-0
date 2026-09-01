
#include <stdio.h>
#include "../funcoes.h"

int main(void)
{
    char repetir;

    do//Repeticao programa
    {
        char escolha;
        int num, limiteI, limiteS;

        printf("A - Verificar se um numero eh ou nao primo\n");
        printf("B - Exibir os numeros primos entre 1 e 100\n");
        printf("C - Media dos numero primos entre 200 e 100\n");
        printf("Escolha uma opcao: ");
        setbuf(stdin, NULL);
        scanf("%c", &escolha);

        switch(escolha)
        {
            case 'A':
            case 'a':
                do
                {
                    printf("Informe um numero: ");
                    scanf("%d", &num);
                    if(num==0)
                    {
                        printf("Valor invalido!\n");
                    }
                }while(num==0);

                printf("%d -> ", num);

                if(primo(num)==0)
                {
                    printf("eh primo\n");
                }
                else
                {
                    printf("nao eh primo\n");
                }
                break;
            case 'B':
            case 'b':
                limiteI = 1;
                limiteS = 100;
                primosL(limiteI, limiteS);
                break;
            case 'C':
            case 'c':
                printf("Media dos primos entre 200 e 100: %.2f", mediaPrimos());
                break;
            default:
                printf("Escolha invalida!");
        }

        printf("\nDeseja repetir o programa (S/s)? ");
        setbuf(stdin, NULL);
        scanf("%c", &repetir);
    }while(repetir == 'S' || repetir == 's');


    return 0;
}
