#include <stdio.h>

int main(void)
{
    int parar = 0;
    float nota;
    printf("\nDigite a nota final do aluno: ");
    scanf("%f, nota");
    while (parar != 1) {
        if (nota < 0 || nota > 10)
        {
            printf("\nNota inválida! Digite a nota final do aluno: ");
            scanf("%f", nota);
        }
        else
    {
      printf("\nNota válida, encerrando...");
      parar = 1;
    }

}

return 0;

}
