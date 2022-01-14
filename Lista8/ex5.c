#include <stdio.h>

#define TAM 5

int main(){
    int vet[TAM];
    int *ptr, i;
    
    ptr = vet;
    printf("Preencha o vetor\n");
    for(i=0; i<TAM; i++){
        printf("Digite o valor do indice %d ", i);
        scanf("%d", ptr);
        ptr++;
    }
    
    ptr = vet;
    for(i=0; i<TAM; i++){
        printf("Dobro do valor de %d ", *ptr);
        *ptr = *ptr * 2;
        printf("= %d\n", *ptr);
        ptr++;
    } 
    
    
    return 0;
}