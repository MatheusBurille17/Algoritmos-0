/*3) Criar função para:
a) Receber, por parâmetro, um número inteiro e positivo e retornar a quantidade de divisores que esse
número possui.
b) Mostrar os divisores de um número. Essa função recebe como parâmetro o número e mostra os divisores
de 1 até o número passado como parâmetro da função.
c) Receber, por parâmetro, um número positivo e retornar a soma dos divisores que esse número possui.
d) Receber, por parâmetro, dois números e retornar o Máximo Divisor Comum dos dois números.
Salvar todas as funções dentro de uma biblioteca chamada Divisores.h. Use a biblioteca "Divisores.h" em um
programa para gerar o seguinte menu:
1 - Quantidade de divisores de um número
2 - Divisores de um número
3 - Divisores, quantidade e soma de um intervalo
4 - Máximo Divisor Comum de dois números*/

#include <stdio.h>
#include "../funcoes.h"

int main(void)
{
    char repete;

    do
    {
        char opcao;

        printf("1 Quantidade de divisore de um numero.\n");




        printf("Deseja continuar o programa (S/s): ");
        setbuf(stdin, NULL);
        scanf("%c", &repete);
    }while(repete == 'S' || repete == 's');


    return 0;
}
