/*5) (DESAFIO) Obter o resto da divisão de dois valores inteiros informados pelo usuário, sem usar o operador
aritmético de resto (%).*/

#include <stdio.h>

int main(void)
{
    int num1, num2, resto, restoverdadeiro;

    printf("Informe um numero: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    resto = num1 - (num1 / num2) * num2;
    restoverdadeiro = num1%num2;

    printf("%d\n", resto);
    printf("%d\n", restoverdadeiro);
}
