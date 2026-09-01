#include <stdio.h>
#include "funcoes_exemplo.h"

int main(void)
{
    int opcao, num;

    printf("1 - Gera a tabuada\n");
    printf("2 - Verifica primo\n");
    printf("3 - Calcula o IMC\n");
    printf("4 - Gera Fibonacci\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            printf("Escolha o numero da tabuada: ");
            scanf("%d", &num);
            tabuada(num);
            break;
        case 2:
            printf("Digite um numero e veja se ele eh primo: ");
            scanf("%d", &num);
            printf("%c", primo(num));
            break;
        case 3:
            printf("Seu IMC eh: %2.f", imc());
            break;
        case 4:
            fibonacci();
            break;
    }

    return 0;
}
