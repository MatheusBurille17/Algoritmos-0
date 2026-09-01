#include <stdio.h>
#include "../funcoes.h"

int main(void)
{
    char repetir;

    do
    {
        char escolha;

        printf("A - Fatorial entre 1 e 8\n");
        printf("B - Fatorial de um numero positivo\n");
        printf("Escolha uma opacao: ");
        setbuf(stdin, NULL);
        scanf("%c", &escolha);

        switch(escolha)
        {
            case 'A':
            case 'a':
                fatorial1e8();
                break;
            case 'B':
            case 'b':
                fatorialpositivo();
                break;
            default:
                printf("Opcao invalida!");
        }

        printf("\nDeseja repetir o programa (S/s)? ");
        setbuf(stdin, NULL);
        scanf("%c", &repetir);
    }while(repetir == 'S' || repetir == 's');



    return 0;
}
