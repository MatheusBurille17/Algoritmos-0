#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

int ocorreNoVetor(int vetor[], int tamanho, int valor)
{
    int i, cont=0;

    for(i=0; i<tamanho; i++)
    {
        if(valor == vetor[i])
        {
            cont++;
        }

    }

    return(cont);
}

void geradorSemRepetir(int vetor[], int tamanho, int limiteMin, int limiteMax)
{
    int i, j;

    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {
        vetor[i] = rand() % (limiteMax - limiteMin + 1) + limiteMin;

        for(j=0; j<i; j++)
        {
            if(vetor[i] == vetor[j])
            {
                i--;
                break;
            }
        }
    }
}

void geradorVetorAleatorio(int vetor[], int tamanho, int limiteMin, int limiteMax)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {
        vetor[i] = rand() % (limiteMax - limiteMin + 1) + limiteMin;
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

int main(void)
{
    int tamanho, limiteMax, aux;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    printf("Informe o limite dos elementos do vetor: ");
    scanf("%d", &limiteMax);

    geradorSemRepetir(vetor, tamanho, 1, limiteMax);

    printf("=== VETOR ===\n");
    mostraVetor(vetor, tamanho);

    printf("\n\nElemento que mais ocorre no vetor eh: %d\n", maiorOcorrencia(vetor, tamanho));

    aux = maiorOcorrencia(vetor, tamanho);
    printf("Com %d ocorrencias\n", ocorreNoVetor(vetor, tamanho, aux));

    return 0;
}
