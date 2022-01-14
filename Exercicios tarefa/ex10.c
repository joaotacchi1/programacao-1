#include <stdio.h>

int main ()
{
  int hora, minutos, minutosT;
  
  printf("Informe as horas: \n");
  scanf("%d", &hora);
  printf("Informe os minutos: ");
  scanf("%d", &minutos);
  
  minutosT = (60 * hora) + minutos;
  
  printf("%d:%d - Até agora já se passaram %d minutos", hora, minutos, minutosT);
  
  return 0;
}