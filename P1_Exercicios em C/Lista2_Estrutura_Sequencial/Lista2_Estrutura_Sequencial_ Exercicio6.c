/*6) Fazer um programa que leia um valor que representa o salário de uma pessoa. Apresente separadamente
os reais (parte inteira) e os centavos (parte decimal).*/

#include <stdio.h>

int main(void)
{
    float salario;
    int parteInt, centavos;

    printf("Informe o valor do seu salario: ");
    scanf("%f", &salario);

    parteInt = (int)salario;
    centavos = (salario-parteInt)*100;

    printf("Salario informado: R$ %.2f\n", salario);
    printf("Reais: %d\n", parteInt);
    printf("Centavos: %d\n", centavos);

    return 0;
}
