/*8) Ler um número inteiro com até 5 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.
Também calcular e mostrar a soma dos dígitos.*/

#include <stdio.h>

int main(void)
{
    //dezenaM = dezena de Milhar

    //Declaraçao de variaveis
    int num1, dezenaM, unidadeM, centena, dezena, unidade, soma;

    printf("Informe um numero inteiro de 5 digitos: ");
    scanf("%d", &num1);

    //Processamento de dados
    dezenaM = num1/10000;
    unidadeM = (num1%10000)/1000;
    centena = (num1/100)%10;
    dezena = (num1/10)%10;
    unidade = num1%10;
    soma = dezenaM + unidadeM + centena + dezena + unidade;


    printf("%d eh o primeiro digito\n", dezenaM);
    printf("%d eh o segundo digito\n", unidadeM);
    printf("%d eh o terceiro digito\n", centena);
    printf("%d eh o quarto digito\n", dezena);
    printf("%d eh o quinto digito\n", unidade);
    printf("Soma dos digitos eh: %d + %d + %d + %d + %d = %d", dezenaM, unidadeM, centena, dezena, unidade, soma);

    return 0;
}
