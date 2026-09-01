#include <stdio.h>

int main(void)
{
    int idade=1, cont=0, soma=0, produto=1;

    while(idade>0)
    {
        printf("Informe a idade do aluno: ");
        scanf("%d", &idade);

        if(idade>0)
        {
            cont++;

            soma = soma + idade;
            produto = produto * idade;
        }
    }

    printf("\nQuantidade de alunos: %d\n", cont);
    printf("Soma das idade: %d\n", soma);
    printf("Produto das idade: %d\n", produto);


    return 0;
}
