#include <stdio.h>

int main()
{
   float fahrenheit, celsius;
   
   printf("Indique a temperatura em graus Fahrenheit: ");
   scanf("%f", &fahrenheit);
   
   celsius = (5 * fahrenheit - 160) / 9;
   
   printf("Temperatura em Celsius: %.2f", celsius);
   return 0;
}