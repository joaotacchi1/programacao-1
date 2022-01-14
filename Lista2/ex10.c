#include <stdio.h>
#include <math.h>

int main()
{
   int valor1, valor2;
   float resultado;

   printf("Digite dois numeros inteiros: ");
   scanf("%d %d", &valor1, &valor2);

   if(valor1 + valor2 < 8){
    resultado = (float)(valor1 + valor2) / 2;
    printf("A media e: %.2f", resultado);
   }

   else if(valor1 + valor2 == 8){
    resultado = valor1 * valor2;
    printf("O produto dos dois sao: %.0f", resultado);
   }

   else if(valor1 + valor2 > 8 && valor1>valor2){
    resultado = (float)valor1 / valor2;
    printf("O resultado da divisao e: %.2f", resultado);
   }
    else{
        resultado = (float)valor2 /valor1;
        printf("O resultado da divisao e: %.2f", resultado);
    }

   return 0;
}
