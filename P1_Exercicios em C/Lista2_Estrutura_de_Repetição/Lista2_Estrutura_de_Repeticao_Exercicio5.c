/*5) Ler um número que indica a quantidade de ímpares (iniciando em 1) que deve ser mostrada. O valor
informado para a quantidade deve ser maior que 0. Validar a entrada.*/


#include <stdio.h>

int main(void)
{
    int i=1, num, contImpar=0;

    do
    {
        printf("Informe quantos impares deseja imprimir: ");
        scanf("%d", &num);

        if(num<=0)
        {
            printf("Valor invalido!");
        }
    }while(num<=0);

    do
    {
        printf("%d\n", i);
        contImpar++;
        i = i + 2;
    }while(contImpar<num);

    return 0;
}
