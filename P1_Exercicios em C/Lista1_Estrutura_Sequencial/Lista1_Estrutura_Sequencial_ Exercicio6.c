/*6) Leia dois valores A e B e efetue a troca do conteúdo das duas variáveis lidas, de forma que a variável A
passe a ter o valor de B e a variável B o valor de A. Mostre o conteúdo das variáveis antes e depois da troca.
*/

#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Informe o valor de A: ");
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);

    //Processamento e saida de dados
    printf("Antes da troca: A=%d e B=%d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("Depois da troca: A=%d e B=%d", a, b);
}
