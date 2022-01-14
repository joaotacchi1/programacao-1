#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void dado(){
    int numero_sorteado;
    
    srand(time(NULL));
    numero_sorteado = (rand()%6)+1;
    printf("%d\n", numero_sorteado);
    return;
}

int main(){
    
    printf("Sorteio de um número aleatório ");
    dado();
    
    return 0;
}