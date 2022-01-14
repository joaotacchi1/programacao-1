#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct ordenadas{
    int pontox;
    int pontoy;
}Ordenadas;

int main(){
    Ordenadas pontos;
    float d;
    
    printf("Digite seu ponto x: ");
    scanf("%d", &pontos.pontox);
    printf("Digite seu ponto y: ");
    scanf("%d", &pontos.pontoy);
    
    
    d = sqrt((pow(pontos.pontox, 2)- 0) + (pow(pontos.pontoy, 2)- 0));
    
    printf("A distância do ponto (%d,%d) ate o ponto (0,0) é %.2f", pontos.pontox, pontos.pontoy, d);
    
    
    return 0;    
}