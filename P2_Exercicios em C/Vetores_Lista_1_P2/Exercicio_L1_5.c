#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void geradorVetor0e1(int vetor[], int tamanho)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {
        vetor[i] = rand() % 2;
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

int ocorreNoVetor(int vetor[], int tamanho, int valor)
{
    int i, cont=0;

    for(i=0; i<tamanho; i++)
    {
        if(valor == vetor[i])
        {
            cont++;
        }

        if(1 == vetor[i])
        {
            break;
        }
    }

    return(cont);
}

int main(void)
{
    char repete;

    do//repitir programa
    {
        int tamanho = 100, i, uva;
        int vetorA[tamanho], vetorB[tamanho];

        geradorVetor0e1(vetorA, tamanho);

        for(i=0; i<tamanho; i++)
        {
            uva = 0;
            uva = ocorreNoVetor(vetorA, tamanho, 0);
            vetorB[i] = uva;
        }

        printf("\n=== VETOR A ===\n");
        mostraVetor(vetorA, tamanho);

        printf("\n=== VETOR B ===\n");
        mostraVetor(vetorB, tamanho);


        printf("\n\nDeseja repetir o programa (S/s)? ");
        setbuf(stdin, NULL);
        scanf("%c", &repete);
    }while(repete == 'S' || repete == 's');

    return 0;
}
