#include <stdio.h>

int main(void)
{
    char nome[35];
    int escolha;

    printf("1 - Cadastro\n");
    printf("2 - Lista\n");
    printf("3 - Sair\n");

    printf("Opcao: ");
    scanf("%d", &escolha);

    switch(escolha)
    {
        case 1:
            printf("Informe o seu nome: ");
            gets(nome);
            break;
        case 2:
        printf(cadastros)
        printf("O nome eh: %s\n", nome);


    }

    return 0;
 }
