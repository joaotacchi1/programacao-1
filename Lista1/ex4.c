#include <stdio.h>

int main()
{
    float salario, salarioT;
    printf("Seu salario atual é? ");
    scanf("%f", &salarioT);
    salario = salarioT / 622;
    printf("Quantidade de salarios minimos: %.1f", salario);
    return 0;
}