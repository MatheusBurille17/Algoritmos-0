#include <stdio.h>

int main(void)
{
    //Declaração de variaveis
    int num1, num2, divisao;

    //Entrada de dados
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    //Processamento de dados
    divisao = num1/ num2;

    //Saída de dados
    printf("Resultado: %d\n", divisao);

    return 0;
}
