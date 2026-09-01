#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geradorVetor(int vetor[], int tamanho, int limiteMax)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {
        vetor[i] = rand() % limiteMax + 1;
    }
}

void mostraVetor(int vetor[], int tamanho)
{
    int i;

    for(i=0; i<tamanho; i++)
    {
        printf("%d  ", vetor[i]);
    }
}

int maiorOcorrencia(int vetor[], int tamanho)
{
    int maisOcorre, i, j, cont, qtdeMaior=0;

    maisOcorre = vetor[0];

    for(i=0; i<tamanho; i++)
    {
        cont=0;

        for(j=i; j<tamanho; j++)
        {
            if(vetor[i] == vetor[j])
            {
                cont++;
            }
        }

        if(cont > qtdeMaior)
        {
            qtdeMaior = cont;
            maisOcorre = vetor[i];
        }
    }

    return(maisOcorre);
}

int main(void)
{
    char repete;

    do
    {
        int tamanho = 10, limiteMax = 5;
        int vetor[tamanho];

        geradorVetor(vetor, tamanho, limiteMax);

        printf("=== VETOR ===\n");
        mostraVetor(vetor, tamanho);

        printf("\nMaior fequencia no vetor: %d", maiorOcorrencia(vetor, tamanho));

        printf("\nDeseja repetir o programa (S/s): ");
        setbuf(stdin, NULL);
        scanf("%c", &repete);
    }while(repete == 'S' || repete == 's');
    return 0;
}
