/*4) Tendo como entrada dois valores inteiros, elaborar um programa para calcular e mostrar:
a) A soma desses valores;
b) A subtração do primeiro pelo segundo;
c) A multiplicação entre eles;
d) A divisão inteira do primeiro pelo segundo;
e) A divisão float do primeiro pelo segundo;
f) O resto da divisão do primeiro pelo segundo.
*/

#include <stdio.h>

int main(void)
{
    int x, y, resultadoInt;
    float resultadoFloat;

    printf("Informe o primeiro valor: ");
    scanf("%d", &x);
    printf("Informe o segundo valor: ");
    scanf("%d", &y);

    //a
    resultadoInt = x + y ;
    printf("a)%d + %d = %d\n", x, y, resultadoInt);
    //b
    resultadoInt = x - y ;
    printf("b)%d - %d = %d\n", x, y, resultadoInt);
    //c
    resultadoInt = x * y ;
    printf("c)%d * %d = %d\n", x, y, resultadoInt);
    //d
    resultadoInt = x / y ;
    printf("d)%d / %d = %d\n", x, y, resultadoInt);
    //e
    resultadoFloat = (float) x / y ;
    printf("e)%d / %d = %.2f\n", x, y, resultadoFloat);
    //f
    resultadoInt = x % y ;
    printf("f) Resto da divisão = %d\n", x, y, resultadoInt);


    return 0;
}
