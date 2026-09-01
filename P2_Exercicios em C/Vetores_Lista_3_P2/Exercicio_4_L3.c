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

int main(void)
{
    int tamanho = 10, limite, i, j, k=0;
    int vetorA[tamanho], vetorB[tamanho], vetorC[tamanho];

    geradorSemRepetir(vetorA, tamanho, limite = 15);
    geradorSemRepetir(vetorB, tamanho, limite = 10);

    printf("=== VETOR A ===\n");
    mostrarVetor(vetorA, tamanho);
    printf("\n=== VETOR B ===\n");
    mostrarVetor(vetorB, tamanho);

    for(i=0; i<tamanho; i++)
    {
        for(j=0; j<tamanho; j++)
        {
            if(vetorA[i] == vetorB[j])
            {
                vetorC[k] = vetorB[j];
                k++;
            }
        }
    }

    printf("\n=== VETOR C ===\n");
    for(i=0; i<k; i++)
    {
        printf("%d  ", vetorC[i]);
    }


    return 0;
}
