#include <stdio.h>

int main(void)
{
    char nome[35];
    printf("Informe o seu nome: ");
    gets(nome);
    printf("O nome eh: %s\n", nome);
    puts(nome);//imprime a string e pula uma linha

    return 0;
}
