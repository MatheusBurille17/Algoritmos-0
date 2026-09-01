/*5) Calcular o valor do salário líquido de uma pessoa. Sobre o salário bruto incidem descontos de INSS e
imposto de renda */

#include <stdio.h>

int main(void)
{
    float salario_liquido, salario_bruto, inss, ir;

    printf("Informe o valor do salario bruto: R$ ");
    scanf("%f", &salario_bruto);
    printf("Informe o percentual do INSS: ");
    scanf("%f", &inss);
    printf("Informe o percentual de IR: ");
    scanf("%f", &ir);

    //Processamento
    salario_liquido = (salario_bruto -(salario_bruto*inss/100))-(salario_bruto*ir/100);

    printf("Salario Liquido: R$ %.2f", salario_liquido);


    return 0;
}
