#include <stdio.h>

#define VET_TAM 5

int main()
{
    int vetor[VET_TAM];
    int num, i = 0, achou = 0;

    // Preenche vetor

    for (int i = 0; i < VET_TAM; i++)
    {
        printf("\n Entre com um número: ");
        scanf("%d", &vetor[i]);
    }

    printf("\n Informe o número a ser encontrado: ");
    scanf("%d", &num);

    while (i < VET_TAM)
    {
        if (vetor[i] == num)
        {
            achou = i;
            break;
        }
        i++;
    }

    if (achou == 1)
    {
        printf("\n O número %d foi encontrado na posição %d do vetor", num, i);
    }
    else
    {
        printf("\n o NÚMERO %d não foi encontrado no vetor", num);
    }

    return 0;
}
