#include <stdio.h>

int main(void)
{
    char ch;

    //Validação de um numero
    do
    {
        printf("Informe o sexo (M ou F): ");
        fflush(stdin);//limpar buffer
        scanf("%c", &ch);

        if(ch != 'M' && ch != 'm' && ch != 'F' && ch != 'f')
        {
            printf("Caracter invalido\n");
        }

    }while(ch != 'M' && ch != 'm' && ch != 'F' && ch != 'f');

    return 0;
}
