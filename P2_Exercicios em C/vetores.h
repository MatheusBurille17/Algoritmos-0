#include <stdlib.h>
#include <time.h>

//Ordenador de vetores
void ordenaVetor(int vetor[], int tamanho)
{
    int aux, i, j;

    for(j=tamanho-1; j>0; j--)
    {
        for(i=0; i<j; i++)
        {
            if(vetor[i] > vetor[i+1])
            {
                aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
            }
        }
    }
}

//vetor com numeros aleatorios
void geradorVetorAleatorio(int vetor[], int tamanho, int limiteMin, int limiteMax)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {
        vetor[i] = rand() % (limiteMax - limiteMin + 1) + limiteMin;
    }
}

//Mostrar vetores
void mostraVetor(int vetor[], int tamanho)
{
    int i;

    for(i=0; i<tamanho; i++)
    {
        printf("%d  ", vetor[i]);
    }
}

//Mostrar vetor, valores pares
void mostraVetorPares(int vetor[], int tamanho)
{
    int i;

    for(i=0; i<tamanho; i++)
    {
        if(vetor[i]%2==0)
        {
            printf("%d  ", vetor[i]);
        }
    }
}

//Mostrar vetor, valores impares
void mostraVetorImpares(int vetor[], int tamanho)
{
    int i;

    for(i=0; i<tamanho; i++)
    {
        if(vetor[i]%2!=0)
        {
            printf("%d  ", vetor[i]);
        }
    }
}


// Menor valor em um vetor
void menorNumVetor(int vetor[], int tamanho)
{
    int i, menor, indicadoIndice=0;

    menor= vetor[0];
    for(i=0; i<tamanho; i++)
    {
        if(menor > vetor[i])
        {
            menor = vetor[i];
            indicadoIndice = i;
        }
    }

    printf("\nO menor valor eh %d e esta no indice %d\n", menor, indicadoIndice);
}

void mediaVetor(int vetor[], int tamanho)
{
    int i, contPares=0, soma=0;
    float media;

    for(i=0; i<tamanho; i++)
    {
        if(vetor[i]%2==0)
        {
            soma += vetor[i];
            contPares++;
        }
    }

    if(contPares!=0)
    {
        media = (float)soma/contPares;
    }
    else
    {
        printf("Divisao por zero nao é possivel!");
    }

    printf("Media dos pares: %.2f", media);
}

//Maior ocorrencia
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

//Gerador sem repetir
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

void inverterVetor(int vetorA[], int vetorB[], int tamanho)
{
    int i;
    for(i=0; i<tamanho; i++)
    {
        vetorB[i] = vetorA[(tamanho-1) - i];
    }
}
