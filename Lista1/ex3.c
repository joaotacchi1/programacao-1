#include <stdio.h>

int main()
{
    float despesaNormal, despesaTotal; 
    printf("Quanto foi seu pedido?");
    scanf("%f", &despesaNormal );
    despesaTotal = despesaNormal + (despesaNormal * 0.1);
    printf("Valor da gorjeta: %.1f \n", despesaNormal * 0.1);
    printf("Valor total do pedido: %.1f ", despesaTotal);
    return 0;
}