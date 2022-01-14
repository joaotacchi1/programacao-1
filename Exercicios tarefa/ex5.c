#include <stdio.h>

int main()
{
    float valorNormal, valorDesc, desconto;
    printf("Valor do produto: ");
    scanf("%f", &valorNormal);
    printf("Qual o desconto? ");
    scanf("%f", &desconto);
    valorDesc = valorNormal * (desconto / 100);
    printf("Valor final: %.2f", valorNormal - valorDesc);
    return 0;
}