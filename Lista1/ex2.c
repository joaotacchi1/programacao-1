#include <stdio.h>

int main ()
{
    int soma, subtração, multiplicação, n1, n2;
    float divisão;
    
    printf("Digite o número 1:\n ");
    scanf("%d", &n1);
    printf("Digite o número 2:\n ");
    scanf("%d", &n2);
    soma = n1 + n2;
    subtração = n1 - n2;
    multiplicação = n1 * n2;
    divisão = (float)n1 / n2;
    printf("%d + %d = %d\n", n1, n2, soma);
    printf("%d - %d = %d\n", n1, n2, subtração);
    printf("%d * %d = %d\n", n1, n2, multiplicação);
    printf("%d / %d = %.2f", n1, n2, divisão);
    return 0;
}