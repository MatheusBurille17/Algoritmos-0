#include <stdio.h>

int main(void)
{
    float A=1.50, B=1.10;
    int contAno;

    while(A > B)
    {
        A = A + 0.02;
        B = B + 0.03;


        contAno++;
    }



    printf("Altura final da arvore A = %.2f\n", A);
    printf("Altura final da arvore B = %.2f\n", B);

    printf("Serao necessarios %d anos para que a arvore B seja maior que a arvore A.", contAno);




    return 0;
}
