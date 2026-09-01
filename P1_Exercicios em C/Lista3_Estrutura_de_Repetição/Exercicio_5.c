#include <stdio.h>

int main(void)
{
    int qntdP=1, qntdNotas10, qntdNotas5, qntdNotas1;
    float valorProduto=0, valorTotal, valorPago, valorTroco, resto, centavos;

    do//Total
    {
        printf("Informe a quantidade de um produto: ");
        scanf("%d", &qntdP);

        if(qntdP != 0)
        {
            printf("Informe o valor unitario do produto: ");
            scanf("%f", &valorProduto);
            valorTotal = valorTotal + valorProduto * qntdP;
        }
    }while(qntdP != 0);


    printf("TOTAL DA COMPRA: R$ %.2f\n", valorTotal);

    printf("Informe o valor pago pelo cliente: R$ ");
    scanf("%f", &valorPago);

    valorTroco = valorPago - valorTotal;

    printf("TROCO: R$ %.2f", valorTroco);

    printf("\nO valor do troco sera devolvido com:\n");

    if(valorTroco>=10)
    {
        qntdNotas10 = valorTroco/10;
        printf("%d nota(s) de 10 reais", qntdNotas10);
        resto =  ((int)valorTroco%10);
    }

    if(valorTroco>=5)
    {
        qntdNotas5 = resto/5;
        printf("%d nota(s) de 5 reais\n", qntdNotas5);
        resto =  ((int)valorTroco%5);

    }

    if(valorTroco>=1)
    {
        qntdNotas1 = resto/1;
        printf("%d nota(s) de 1 reais\n", qntdNotas1);
    }

    centavos = valorTroco/100;

    if(centavos<0)
    {
        printf("%f nota(s) de 1 reais\n", qntdNotas5);
    }


    return 0;
}
