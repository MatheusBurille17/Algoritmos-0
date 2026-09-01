#include <stdio.h>

int main(void)
{
    int num1, num2, num3, meio;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    printf("Informe o terceiro numero: ");
    scanf("%d", &num3);

    // num2 <= num1 <= num3 ou num3 <= num1 <= num2

    if(num1 >= num2 && num1 <= num3 || num1 <= num2 && num1 >= num3 )
    {
        meio = num1;

    } // num1 <= num2 <= num3 ou num3 <= num2 <= num1
    else if(num2 >= num1 && num2 <= num3 || num2 >= num3 && num2 <= num1)
    {
        meio = num2;
    }
    else
    {
        meio = num3;
    }


    printf("Numero do meio eh: %d", meio);


    return 0;
}
