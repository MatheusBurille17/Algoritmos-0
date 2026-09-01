void tabuada(int num)//Funcao Tabuada
{
    int i;

    printf("\n=== TABUADA DE %d ===\n", num);

    for(i=0; i<=10; i++)
    {
        printf("%d * %d = %d\n", num, i, num*i);
    }
}

// === ARQUIVO 2 ===

int soma(int num1, int num2)//Funcao Soma
{
    return(num1 + num2);
}

int subtracao(void)//Funcao Subtração
{
    int num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    return(num1 - num2);
}

void multiplicacao(void)//Funcao Multiplicação
{
    int num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    printf("Multiplicacao: %d\n", num1*num2);
}

void divisao(int num1, int num2)////Funcao Divisão
{
    printf("Divisao: %d\n", num1/num2);
}

// === PRIMO ===

int primo(int num)//Funcao Primo
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

// === Primo entre limiteI e limiteS ===

void primosL(int limiteI, int limiteS)
{
    int i, j, contDiv;

    for(i=limiteI; i<=limiteS; i++)
    {
        contDiv=0;
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                contDiv++;
            }
        }
        if(contDiv==2)
        {
            printf("%d\t", i);
        }
    }
}

// === Media dos primos entre 200 e 100 ===

float mediaPrimos(void)
{
    int i, j, contDiv;
    float contPrimos=0, somaPrimos=0, media;

    for(i=200; i>=100; i--)
    {
        contDiv=0;
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                contDiv++;
            }
        }
        if(contDiv==2)
        {
            contPrimos++;
            somaPrimos += i;
        }
    }

    media = somaPrimos/contPrimos;

    return(media);
}

// ===fatorial entre 1 e 8 ===

void fatorial1e8(void)
{
    int i, j, fatorial;

    for(i=1; i<=8; i++)
    {
        printf("%d! ", i);

        fatorial = 1;

        for(j=i; j>=2; j--)
        {
            fatorial = fatorial*j;

            printf("%d * ", j);
        }

        printf("1 = %d\n", fatorial);
    }
}

void fatorialpositivo(void)
{
    int i, fatorial, num;

    do
    {
        printf("Informe um numero positivo: ");
        scanf("%d", &num);

        if(num==0)
        {
            printf("Valor invalido!");
        }
    }while(num==0);
    fatorial=1;

    for(i=num; i>=2; i--)
    {
        fatorial = fatorial*i;

        printf("%d * ", i);
    }

    printf("1 = %d", fatorial);
}
