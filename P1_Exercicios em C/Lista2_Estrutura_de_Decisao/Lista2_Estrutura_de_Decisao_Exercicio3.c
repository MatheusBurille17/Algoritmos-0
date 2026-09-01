#include <stdio.h>

int main(void)
{
    int num, milhar, centena, dezena, unidade;

    printf("Informe um numero de quatro digitos: ");
    scanf("%d", &num);

    milhar = num/1000;
    centena = (num%1000)/100;
    dezena = (num%100)/10;
    unidade = num%10;

    if(milhar == unidade && centena == dezena)
    {
        printf("O numero eh palindromo");
    }
    else
    {
        printf("O numero nao eh palindromo");
    }


    return 0;
}
