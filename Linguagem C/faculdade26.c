#include <stdio.h>

int main()
{
    int contador;
    printf("\n Digite um número para contagem regressiva: ");
    scanf("%d", &contador);
    for (contador; contador > -1; contador--)
    {
        printf("%d", contador);
    }
    return 0;
}
