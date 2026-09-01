void tabuada(int num)
{
    int i;

    printf("\n=== TABUADA DE %d ===\n", num);

    for(i=0; i<=10; i++)
    {
        printf("%d * %d = %d\n", num, i, num*i);
    }
}

// === ARQUIVO 2 ===

int soma(int num1, int num2)
{
    return(num1 + num2);
}

int subtracao(void)
{
    int num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    return(num1 - num2);
}

void multiplicacao(void)
{
    int num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    printf("Multiplicacao: %d\n", num1*num2);
}

void divisao(int num1, int num2)
{
    printf("Divisao: %d\n", num1/num2);
}


// === PRIMO ===

int primo(int num)
{
    int contDiv=0, i;

    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            contDiv++;
        }
        break;
    }
    if(num == 1)
    {
        contDiv = 1;
    }

    return(contDiv);
}
