#include <stdio.h>
#define VET 20

void le_vetor(float vet[]){
    for(int i=0; i<VET; i++){
        printf("Digite o indice %d \n", i );
        scanf("%f", &vet[i]);
    }
}

void mostra_vetor(float vet[]){
    for(int i=0; i<VET; i++){
        printf("O vetor de indice %d, é: %.1f\n", i, vet[i]);
    }
}

void troca_vetor(float vet[]){
    int aux;
    for(int i=0;i<VET/2;i++){
        aux=vet[i];
        vet[i]=vet[VET-i];
        vet[VET-i]=aux;
    }
}

void mostra_vetor_novo(float vet[]){
    printf("\tNovo vetor\n");
    for(int i=0; i<VET; i++){
        printf("O vetor de indice %d, é: %.1f\n", i, vet[i+1]);
    }
}

int main(){
    float vet[VET];
    
    le_vetor(vet);
    mostra_vetor(vet);
    troca_vetor(vet);
    mostra_vetor_novo(vet);
    
    return 0;
    
}

