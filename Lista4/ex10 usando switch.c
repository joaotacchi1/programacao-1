#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void dado(){
    float i, qtd1=0.0, qtd2=0.0, qtd3=0.0, qtd4=0.0, qtd5=0.0, qtd6=0.0, percent1=0.0, percent2=0.0, percent3=0.0, percent4=0.0, percent5=0.0, percent6=0.0;
    int numero_sorteado;
    
    for(i=0; i<1000000; i++){
        srand(time(NULL));
        numero_sorteado = (rand()%6)+1; 
        
        switch(numero_sorteado){
            case 1:
            qtd1++;
            break;
            
            case 2:
            qtd2++;
            break;
            
            case 3:
            qtd3++;
            break;
            
            case 4:
            qtd4++;
            break;
            
            case 5:
            qtd5++;
            break;
            
            case 6:
            qtd6++;
            break;
        }
    }
    percent1 = (qtd1 * 100.0) / i;
    percent2 = (qtd2 * 100.0) / i;
    percent3 = (qtd3 * 100.0) / i;
    percent4 = (qtd4 * 100.0) / i;
    percent5 = (qtd5 * 100.0) / i;
    percent6 = (qtd6 * 100.0) / i;
    
    printf("\nA porcentagem de 1 é %.2f\nA porcentagem de 2 é %.2f\nA porcentagem de 3 é %.2f\nA porcentagem de 4 é %.2f\nA porcentagem de 5 é %.2f\nA porcentagem de 6 é %.2f\n", percent1, percent2, percent3, percent4, percent5, percent6);
    return;
}

int main(){
    
    printf("Porcentagem de números que cairam depois de 1 milhão de vezes jogados");
    dado();
    
    return 0;
}