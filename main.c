#include <stdio.h>


int main(void)
{
    int a, b;
    int operacao;
    int resposta;

    printf("Programa - Calculadora - \n\n");

        printf("Entre com valor da variavel a: ");
        scanf("%d", &a);

        printf("Entre com valor da variavel b: ");
        scanf("%d", &b);

        printf("Escolha a operação ( 1 - soma, 2 sub, 3 - mult, 4 - div)\n");
        scanf("%d", &operacao);

        switch (operacao)
        {
        case 1: printf("a + b = %d\n", (a + b)); break;
        case 2: printf("a - b = %d\n", (a - b)); break;
        case 3: printf("a * b = %d\n", (a * b)); break;
        case 4: printf("a / b = %d\n", (a / b)); break;

        default: printf("Operacao invalida"); break;
            break;
        }

    return 0;
}
