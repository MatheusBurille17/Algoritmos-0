#include <stdio.h>

int main(void)
{
    //Declaração de variaveis
    float salario, reajuste, novoSalario;

    //Entrada de dados
    printf("Informe seu salario: ");
    scanf("%f", &salario);

    //Processamento de Dados
    reajuste = 5;
    novoSalario = salario - (salario * reajuste)/100;

    //Saída de dados
    printf("Seu novo salario: %.2f\n", novoSalario);

    return 0;
}
