#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    if(num1 > num2)
    {
        printf("%d eh maior do que %d", num1, num2);
    }
    else if(num1 < num2)
    {
        printf("%d eh menor do que %d", num1, num2);
    }
    else
    {
        printf("%d eh igual a %d", num1, num2);45
    }




    return 0;
}
