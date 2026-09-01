#include <stdio.h>

int main(void)
{
    int x, resultado, multiplicacao;

    printf("Informe o valor de x: ");
    scanf("%d", &x);

    if(x<0)
    {
        multiplicacao = (2 * x);
        resultado = multiplicacao + 4;
        printf("2x + 4\n");
        printf("2(%d) + 4\n", x);
        printf(" %d + 4\n", multiplicacao);
        printf("%d", resultado);
    }
    else if(x>=0)
    {
        resultado = x + 1;
        printf("x + 1\n");
        printf("%d + 1\n", x);
        printf("%d", resultado);
    }

    return 0;
}
