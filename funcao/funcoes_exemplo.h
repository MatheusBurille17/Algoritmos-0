void tabuada(int num)
{
    int i;

    for(i=0; i<=10; i++)
    {
        printf("%d * %d = %d\n", i, num, i*num);
    }
}


char primo(int num)
{
    char resultado;
    int i, contDiv=0;

    for(i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            contDiv++;
        }
    }

    if(contDiv == 2)
    {
        resultado = 'S';
    }
    else
    {
        resultado = 'N';
    }

    return(resultado);
}

float imc(void)
{
    float peso, altura;

    printf("Informe seu peso: ");
    scanf("%f", &peso);
    printf("Informe sua altura: ");
    scanf("%f", &altura);

    return(peso/(altura*altura));
}

void fibonacci(void)
{
    int num, i, anterior=1, atual=1, proximo;

    do
    {
        printf("Quantos termos da fibonacci: ");
        scanf("%d", &num);
        if(num<0)
        {
            printf("Valor invalido!\n");
        }
    }while(num<0);


    printf("%d\t%d\t", anterior, atual);

    for(i=2; i<=num; i++)
    {
        proximo = anterior + atual;
        printf("%d\t", proximo);

        anterior = atual;
        atual = proximo;
    }
}
