#include <stdio.h>

int main(void)
{
    int num1, num2;
    float resultado;

    printf("Informe um numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo: ");
    scanf("%d", &num2);

    resultado = (float)num1/num2;

    if(num2==0)
    {
        printf("%d/%d = Erro: divisao por zero 0", num1, num2);
    }
    else
    {
        printf("%d/%d = %.2f", num1, num2, resultado);
    }

    return 0;
}
