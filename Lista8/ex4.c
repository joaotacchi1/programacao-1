#include <stdio.h>

#define tam 10

int main(){
    double vetor[tam];
    double *ptr;
    int i;
    //Resposta da pergunta: Percebesse que a diferença de quando é um array de float, e de quando é um array de double,
    //o endereço de memória no array de float aumenta de 4 em 4, enquanto o endereço de memória do array de double aumenta de 8 em 8.
    
    
    ptr = vetor;
    printf("Preencha o vetor\n");
    for(i=0; i<tam; i++){
        printf("Digite o valor em ponto flutuante para o indice %d ", i);
        scanf("%lf", &vetor[i]);
    }
    
    for(i=0; i<tam; i++){
        printf("Endereço de memória de %.2lf: %p\n", vetor[i], ptr);
        ptr++;
    }
    
    
    
    return 0;
}