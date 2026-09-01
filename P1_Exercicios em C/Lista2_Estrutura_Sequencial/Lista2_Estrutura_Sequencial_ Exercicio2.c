/*2) Considerando que para um consórcio sabe-se o número total de prestações, a quantidade de prestações
pagas e o valor de cada prestação (que é fixo). Escreva um programa que determine o valor total já pago pelo
consorciado e o saldo devedor.*/

#include <stdio.h>

int main(void)
{
    int prestacoes, prestacoesPagas;
    float valorPrestacao, valorTotal, saldoDevedor;

    printf("Informe a quantidade total de pretacoes: ");
    scanf("%d", &prestacoes);
    printf("Informe a quantidade de pretacoes pagas: ");
    scanf("%d", &prestacoesPagas);
    printf("Informe o valor (fixo) da pretacoes: R$ ");
    scanf("%f", &valorPrestacao);

    //Processamento de dados
    valorTotal = prestacoesPagas * valorPrestacao ;
    saldoDevedor = ((float)prestacoes - prestacoesPagas)* valorPrestacao;

    //Saida de dados
    printf("Valor total ja pago: R$ %.2f\n", valorTotal);
    printf("Saldo devedor: R$ %.2f", saldoDevedor);

    return 0;
}

