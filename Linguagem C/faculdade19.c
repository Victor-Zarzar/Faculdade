#include <stdio.h>

int main()
{
    int num;
    printf("\n Digite um numero inteiro: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("\n 0 número é par");
        else {
            printf("\n 0 número é ímpar");
        }
    }

    return 0;
}
