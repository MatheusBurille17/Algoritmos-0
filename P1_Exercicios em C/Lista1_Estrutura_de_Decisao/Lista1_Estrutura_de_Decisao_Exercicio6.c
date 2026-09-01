#include <stdio.h>

int main(void)
{
    float alt, pc, i, gebFeminino, gebMasculino;
    char sexo;

    printf("Qual seu sexo: ");
    scanf("%c", &sexo);

    if((sexo == 'M' || sexo == 'F')||(sexo=='m' || sexo =='f'))
    {
        printf("Informe sua altura(cm): ");
        scanf("%f", &alt);
        printf("Informe seu peso(kg): ");
        scanf("%f", &pc);
        printf("Informe sua idade: ");
        scanf("%f", &i);

        gebMasculino = 66.47 + (13.75*pc) + (5*alt) - (6.76*i);
        gebFeminino = 65.1 + (9.56*pc) + (1.85*alt) - (4.67*i);


        switch(sexo)
        {
            case 'M':
            case 'm':
                printf("Sexo: Masculino\n");
                printf("GEB: %f", gebMasculino);
                break;
            case 'F':
            case 'f':
                printf("Sexo: Feminino\n");
                printf("GEB: %f", gebFeminino);
                break;
        }

    }
    else
    {
        printf("Opcao invalida!!");
    }




    return 0;
}
