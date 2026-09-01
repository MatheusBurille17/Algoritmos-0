/*2) Escreva um programa que leia o valor de uma prestação e da taxa de juros cobrada pelo atraso da
prestação e forneça o valor atualizado. */

#include <stdio.h>

int main(void)
{
    //Declaração de variaveis
    float prestacao, taxa, total;

    //Entrada de dados
    printf("Informe o valor da prestacao: ");
    scanf("%f", &prestacao);
    printf("Informe o valor da taxa: ");
    scanf("%f", &taxa);

    //Processaemnto de dados
    total = (prestacao * taxa / 100 ) + prestacao;

    //Saída de dados
    printf("Valor total: %.2f", total);


    return 0;
}
