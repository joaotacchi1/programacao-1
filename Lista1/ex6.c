 #include <stdio.h>

int main()
{
    float numero1, numero2, numero3, numero4;
    
    printf("Digite um número: \n");
    scanf("%f", &numero1);
    printf("Digite outro número: \n");
    scanf("%f", &numero2);
    
    numero3 = numero1;
    numero4 = numero2;
    
    printf("Número final 1 = %.2f \n", numero4);
    printf("Número final 2 = %.2f \n", numero3);
    
    printf("Números falados inicialmente: 1°- %.2f \n2°- %.2f", numero1, numero2);
    return 0;
}