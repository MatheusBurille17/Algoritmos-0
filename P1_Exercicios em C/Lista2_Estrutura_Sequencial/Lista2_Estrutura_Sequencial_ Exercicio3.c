/*3) Leia um valor com duas casas decimais que representa o troco a ser fornecido por um caixa. Separe a
parte inteira (reais) da parte decimal (centavos) e apresente na forma: 123 reais e 19 centavos. Use a função
round, da biblioteca math.h, para o arredondamento da parte decimal.
*/

#include <stdio.h>

int main(void)
{
    float troco;
    int parteInt, centavos;

    printf("Informe o valor do troco: R$ ");
    scanf("%f", &troco);

    parteInt = (int)troco;
    centavos = (troco - parteInt)*100;


    printf("Valor informado: %d reais %d centavos.", parteInt, centavos);



    return 0;
}
