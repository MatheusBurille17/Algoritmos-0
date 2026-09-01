#include <stdio.h>

int main(void)
{
    float altura, peso, imc;

    printf("Informe sua altura: ");
    scanf("%f", &altura);
    printf("Informe seu peso: ");
    scanf("%f", &peso);

    imc = peso/(altura*altura);

    printf("IMC: %0.f\n", imc);

    if(imc<20)
    {
        printf("Abaixo do peso");
    }
    else if(imc>=20 && imc<25)
    {
        printf("Peso normal");
    }
    else if(imc>= 25 && imc < 30)
    {
        printf("Acima do peso");
    }
    else if(imc >= 30 && imc < 34)
    {
        printf("Obeso");
    }
    else if(imc >= 34)
    {
        printf("Muito obeso");
    }

    return 0;
}
