#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geradorSemRepetir(int vetor[], int tamanho, int limite)
{
    int i, j;

    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {
        vetor[i] = rand() % limite + 1;

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

void mostrarVetor(int vetor[], int tamanho)
{
    int i;

    for(i=0; i<tamanho; i++)
    {
        printf("%d  ", vetor[i]);
    }
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

int main(void)
{
    int tamanho = 10, limite, i, b, k=0;
    int vetorA[tamanho], vetorB[tamanho], uniao[tamanho];

    geradorSemRepetir(vetorA, tamanho, limite = 15);
    geradorSemRepetir(vetorB, tamanho, limite = 10);

    printf("=== VETOR A ===\n");
    mostrarVetor(vetorA, tamanho);
    printf("\n=== VETOR B ===\n");
    mostrarVetor(vetorB, tamanho);

    for(i=0; i<tamanho; i++)
    {
        uniao[k] = vetorA[i];
        k++;
    }

    for(i=0; i<tamanho; i++)
    {
        if(ocorreNoVetor(uniao, 20, vetorB[i])==0)
        {
            uniao[k] = vetorB[i];
            k++;
        }
    }
    printf("\n=== UNIAO ===\n");
    mostrarVetor(uniao, k);


    return 0;
}
