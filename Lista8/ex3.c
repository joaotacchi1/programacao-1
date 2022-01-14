#include <stdio.h>

#define tam 10

int main(){
    float vetor[tam];
    float *ptr;
    int i;
    
    ptr = vetor;
    printf("Preencha o vetor\n");
    for(i=0; i<tam; i++){
        printf("Digite o valor em ponto flutuante para o indice %d ", i);
        scanf("%f", &vetor[i]);
    }
    
    for(i=0; i<tam; i++){
        printf("Endereço de memória de %.2f: %p\n", vetor[i], ptr);
        ptr++;
    }
    
    
    return 0;
}