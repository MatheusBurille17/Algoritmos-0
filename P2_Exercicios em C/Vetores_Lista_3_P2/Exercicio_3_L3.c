#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geradorVetorSemrepetir(int vetor[], int tamanho, int limite)
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


int main(void)
{
    int tamanho, limite;
    int vetor[tamanho];

    geradorVetorSemrepetir(vetor, tamanho, limite);

    return 0;
}
