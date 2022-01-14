#include <stdio.h>

int main ()
{
    int numero;
    printf("Escolha um número inteiro: ");
    scanf("%d", &numero);
    printf("Antecessor: %d\n", numero - 1);
    printf("Sucessor: %d", numero + 1);
    return 0;
}
