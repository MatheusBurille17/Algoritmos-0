/*7) Resolva as seguintes expressões matemáticas. X e Y são valores fornecidos pelo usuário. Calcule e
mostre o resultado de cada expressão. Reutilize variáveis, ou seja, terá apenas uma variável para armazenar
os resultados do tipo int e outra para armazenar o resultado do tipo float. Faz a primeira operação e já
imprime o resultado e assim para todas as demais operações. Atenção para os resultados que podem ser
valores float e para a prioridade dos operadores.
*/

#include <stdio.h>

int main(void)
{
    int x, y, resultadoInt;
    float resultadoFloat;

    printf("Informe o valor para X: ");
    scanf("%d", &x);
    printf("Informe o valor para Y: ");
    scanf("%d", &y);

    //a)
    resultadoFloat = (((float)x+y)/y)*(x*x);
    printf("a) %f\n", resultadoFloat);
    //b)
    resultadoFloat = ((float)x+y)/(x-y);
    printf("b) %f\n", resultadoFloat);
    //c)
    resultadoFloat = ((float)x*x + y*y*y)/2;
    printf("c) %f\n", resultadoFloat);
    //d
    resultadoFloat = ((float)x*x*x)/(x*x);
    printf("d) %f\n", resultadoFloat);
    //e
    //e1
    resultadoInt = x % y;
    printf("e1) %d\n", resultadoInt);
    //e2
    resultadoInt = x % 3;
    printf("e2) %d\n", resultadoInt);
    //e3
    resultadoInt = y % 5;
    printf("e3) %d\n", resultadoInt);


    return 0;
}
