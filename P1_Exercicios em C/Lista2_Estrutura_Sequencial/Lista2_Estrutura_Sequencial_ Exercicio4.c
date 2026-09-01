/*4) Fazer um programa que leia um número inteiro de até três dígitos (considere que será fornecido um
número de até 3 dígitos), calcule e imprima a soma dos seus dígitos.*/

#include <stdio.h>

int main(void)
{
    int num, centena, dezena, unidade, soma;

    printf("Informe um numero inteiro com ate tres digitos: ");
    scanf("%d", &num);

    centena = num/100;
    dezena = (num%100)/10;
    unidade = num%10;
    soma = centena + dezena + unidade;

    printf("%d = %d + %d + %d = %d", num, centena, dezena, unidade, soma);

    return 0;
}
