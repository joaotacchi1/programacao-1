#include <stdio.h>

int main()
{
   float fahrenheit, celsius;
   
   printf("Indique a temperatura em graus Centígrados: ");
   scanf("%f", &celsius);
   
   fahrenheit = (9 * celsius + 160) / 5;
   
   printf("Temperatura em Fahrenheit: %.2f", fahrenheit);
   return 0;
}