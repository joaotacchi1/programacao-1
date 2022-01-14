#include <stdio.h>
#define VET 5

void le_vetor(int vet[]){
    for(int i=0; i<VET; i++){
        printf("Digite o indice %d \n", i );
        scanf("%d", &vet[i]);
    }
}

void mostra_vetor(int vet[]){
    for(int i=0; i<VET; i++){
        printf("O vetor de indice %d, é: %d\n", i, vet[i]);
    }
}

void altera_vetor(int vet[]){
    vet[0]=-1;
    vet[2]=10;
    vet[4]=15;
}

void mostra_vetor_novo(int vet[]){
    printf("\tNovo vetor\n");
    for(int i=0; i<VET; i++){
        printf("O vetor de indice %d, é: %d\n", i, vet[i]);
    }
}

int main(){
    int vet[VET];
    
    le_vetor(vet);
    mostra_vetor(vet);
    altera_vetor(vet);
    mostra_vetor_novo(vet);
    
    return 0;
    
}

