#include <stdio.h>

#define TAM 5

void preenche_vetor(int vet[]){
    int i, *ptr;
    
    ptr = vet;
    
    printf("Preencha o vetor\n");
    for(i=0; i<TAM; i++){
        printf("Digite o valor do indice %d ", i);
        scanf("%d", ptr);
        ptr++;
    }
    
    ptr = vet;
    
    printf("Exibe vetor\n");
    for(i=0; i<TAM; i++){
        printf("Vetor de indice %d - %d\n", i, *ptr);
        ptr++;
    }
}

int main(){
    int vet[TAM];
    
    preenche_vetor(vet);
    
    return 0;
}