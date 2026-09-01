/*7) Fazer um programa para ler o salário de uma pessoa, o percentual de aumento e o percentual de
descontos. Os descontos incidem sobre o salário com aumento. Calcular o novo salário e mostrá-lo como no
exemplo a seguir.
Observações:
a) Orientar o usuário na forma como deve ser informado o percentual (por exemplo, 10 para 10% ou 0.1 para
10%), ou seja, como o programa espera que o valor seja informado. Isso é importante para definir o cálculo a
ser utilizado;
b) Cálculos de percentual podem ser realizados por meio de regras de três simples.
*/

#include <stdio.h>

int main(void)
{
    float salario, aumento, desconto, novoSalario, salarioLiquido;
    int reais, centavos;

    //Entrada de dados

    printf("Informe seu salario: R$ ");
    scanf("%f", &salario);
    printf("Informe o percentual de aumento (Ex: 10 para 10%): ");
    scanf("%f", &aumento);
    printf("Informe o percentual de desconto (Ex: 5 para 5%): ");
    scanf("%f", &desconto);

    //Processamento de dados

    novoSalario = (salario * aumento / 100) + salario;
    salarioLiquido = novoSalario - (novoSalario*desconto/100);
    reais = (int)salarioLiquido;
    centavos = (salarioLiquido - reais)*100;

    //Saída de dados

    printf("Salario aumentado: %.2f\n", novoSalario);
    printf("Salario Liquido: %.2f\n", salarioLiquido);

    printf("Seu salario liquido eh de: %d reais %d centavos", reais, centavos);



    return 0;
}
