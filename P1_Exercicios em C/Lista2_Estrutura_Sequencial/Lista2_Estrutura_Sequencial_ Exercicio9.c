/**/

#include <stdio.h>

int main (void)
{
    //Decalração de variaveis
    int num1, centena, dezena, unidade, inverso;

    //Entrada de dados
    printf("Informe um valor com tres digitos: ");
    scanf("%d", &num1);

    //Processamento de dados
    centena = num1 / 100;
    dezena = (num1%100)/10;
    unidade = num1%10;
    inverso = unidade*100 + dezena*10 + centena;

    printf("%d eh o primeiro digito\n", centena);
    printf("%d eh o segundo digito\n", dezena);
    printf("%d eh o terceiro digito\n", unidade);
    printf("Inverso: %d\n", inverso);

    return 0;
}
