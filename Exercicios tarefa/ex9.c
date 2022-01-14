#include <stdio.h>

int main ()
{
  float capital, jurosM, tempo;
  
  printf("Informe o capital: ");
  scanf("%f", &capital);
  printf("Quantos meses irá render: ");
  scanf("%f", &tempo);
  printf("Qual a taxa de juros mensal? ");
  scanf("%f", &jurosM);
  
  printf("Total investido: %.2f \n", capital);
  printf("Montante final: %.2f \n", capital + (jurosM / 100) * capital * tempo);
  printf("Valor total do juros obtido: %.2f", capital * tempo * (jurosM / 100));
  
  return 0;
}