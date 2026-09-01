#include <stdio.h>

int main(void)
{
    int idade=1, contIdade=0, contBr=0, contE=0, contN=0, contS=0, SomaIdadeNsuperior=0, menorIdadecomSuperior;
    char  nacionalidade, cursoSuperior;
    float media;


    while(idade > 0)
    {
        printf("Informe a idade: ");
        scanf("%d", &idade);
        setbuf(stdin, NULL);

        if(idade > 0)
        {
            printf("Informe a nacionalidade (B - Brasileiro ou E - Estrangeiro): ");
            scanf("%c", &nacionalidade);
            setbuf(stdin, NULL);
            printf("Possui curso superior (S - Sim ou N - Nao): ");
            scanf("%c", &cursoSuperior);
            setbuf(stdin, NULL);

            contIdade = contIdade + idade;

            switch(nacionalidade)
            {
                case 'B':
                case 'b':
                    contBr++;
                    break;
                case 'E':
                case 'e':
                    contE++;
                    break;
            }

            switch(cursoSuperior)
            {
                case 'S':
                case 's':
                    contS++;

                    if( (idade < menorIdadecomSuperior) && (nacionalidade == 'E' || nacionalidade == 'e' ) )
                    {
                        menorIdadecomSuperior = idade;
                    }

                    break;
                case 'N':
                case 'n':
                    contN++;
                    SomaIdadeNsuperior = SomaIdadeNsuperior + idade;

                    break;
            }

        }
    }

    media =  (float)SomaIdadeNsuperior/contN;

    printf("\nQuantidade de brasileiros: %d\n", contBr);
    printf("Quantidade de estrangeiros: %d\n", contE);
    printf("A idade media dos brasileiro sem curso superior eh: %.1f\n", media);
    printf("A menor idade de estrangeiros com curso superior: %d\n", menorIdadecomSuperior);


    return 0;
}
