/*1) Escreva um programa que leia o comprimento (cm), a largura (cm) e a altura (cm) de uma caixa retangular
e calcule o seu volume (cm3
), cuja fórmula é: Volume = Comprimento * Largura * Altura.*/

#include <stdio.h>

int main(void)
{
    float comp, larg, alt, volume;

    //Entrada de dados

    printf("Informe o comprimento: ");
    scanf("%f", &comp);
    printf("Informe a largura: ");
    scanf("%f", &larg);
    printf("Informe a altura: ");
    scanf("%f", &alt);

    //Processamento de dados
    volume = comp*larg*alt;

    //Saida de dados
    printf("Volume: %.2f cm", volume);

    return 0;
}
