#include <stdio.h>
#include "funcoes.h"

int soma(int n1, int n2)
{
    int resultado;

    resultado = n1 + n2;

    return(resultado);
}

float media(float nota1, float nota2)
{
    float resultado;

    resultado = (nota1 + nota2) / 2;

    return(resultado);
}

int main(void)
{
    int num1, num2;
    float nota1, nota2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    printf("Informe o primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe o segunda nota: ");
    scanf("%f", &nota2);

    printf("Resultado da soma: %d\n", soma(num1, num2));
    printf("Resultado da media: %.2f\n", media(nota1, nota2));

    tabuada(num1);

    return 0;
}
