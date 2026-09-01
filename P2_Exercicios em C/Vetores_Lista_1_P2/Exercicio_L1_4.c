#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geradorVetorAleatorio(int vetor[], int tamanho, int limiteMax)
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

int main(void)
{
    char repete;

    do//repitir programa
    {
        int tamanhoA, tamanhoB, tamanhoC, i;

        do
        {
            printf("Informe o tamanho do vetor A: ");
            scanf("%d", &tamanhoA);
            printf("Informe o tamanho do vetor B: ");
            scanf("%d", &tamanhoB);
        }while(tamanhoA == 0 || tamanhoB == 0);

        int vetorA[tamanhoA], vetorB[tamanhoB];

        geradorVetorAleatorio(vetorA, tamanhoA, 20);
        geradorVetorAleatorio(vetorB, tamanhoB, 15);

        if(tamanhoA>tamanhoB)
        {
            tamanhoC = tamanhoA;
        }
        else if(tamanhoA<tamanhoB)
        {
            tamanhoC = tamanhoB;
        }
        else
        {
            tamanhoC = tamanhoA;
        }

        int vetorC[tamanhoC];

        srand(time(NULL));

        for(i=0; i<tamanhoC; i++)
        {
            if(vetorA[i]>vetorB[i])
            {
                vetorC[i] = 1;
            }
            else if(vetorA[i]==vetorB[i])
            {
                vetorC[i] = 0;
            }
            else if(vetorA[i]<vetorB[i])
            {
                vetorC[i] = -1;
            }
        }

        printf("\n=== VETOR A ===\n");
        mostraVetor(vetorA, tamanhoA);

        printf("\n\n=== VETOR B ===\n");
        mostraVetor(vetorB, tamanhoB);

        printf("\n\n=== VETOR C ===\n");
        mostraVetor(vetorC, tamanhoC);

        printf("\n\nDeseja repetir o programa (S/s)? ");
        setbuf(stdin, NULL);
        scanf("%c", &repete);
    }while(repete == 'S' || repete == 's');

    return 0;
}
