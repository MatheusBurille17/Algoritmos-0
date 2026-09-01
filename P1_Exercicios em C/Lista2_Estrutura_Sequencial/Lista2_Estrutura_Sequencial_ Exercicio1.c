/*1) Ler um número com seis dígitos decimais. Separar a parte inteira e a parte decimal desse número.
Apresentar a parte decimal como um valor float e como um inteiro de três dígitos. Da parte inteira separar o
número que representa unidade, dezena e centena e mostrar*/

#include <stdio.h>

int main (void)
{
    //Decalração de variaveis
    double num, parteDec;
    int parteInt, parteDecInt, centena, dezena, unidade, soma, inverso;

    //Entrada de dados
    printf("Informe um valor com seis digitos decimais: ");
    scanf("%lf", &num);

    //Processamento de dados
    parteInt = (int)num;
    parteDec = num - parteInt;
    parteDecInt = parteDec*1000;
    centena = parteInt / 100;
    dezena = (parteInt%100)/10;
    unidade =   parteInt%10;
    soma = centena + dezena + unidade;
    inverso = unidade*100 + dezena*10 + centena;

    //Saída de dados
    printf("\nNumero informado: %lf\n", num);
    printf("Parte intera: %d\n", parteInt);
    printf("Parte decimal: %lf\n", parteDec);
    printf("Parte decimal como inteiro de tres digitos: %d\n", parteDecInt);
    printf("Centena(s): %d\n", centena);
    printf("Dezena(s): %d\n", dezena);
    printf("Unidade: %d\n", unidade);
    printf("Soma das unidades: %d\n", soma);
    printf("Inverso: %d\n", inverso);

    return 0;
}
