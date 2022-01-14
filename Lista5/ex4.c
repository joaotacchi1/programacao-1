#include <stdio.h>
#define VET 4

void le_vetor(float vet[]){
    for(int i=0; i<VET; i++){
        printf("Digite o indice %d \n", i );
        scanf("%f", &vet[i]);
    }
}

int main(){
    float vet[VET], maior, menor;
    
    le_vetor(vet);
    
    maior = vet[0];
    menor = vet[0];
    
    for(int i=0; i<VET; i++){
        if(vet[i]>maior){
            maior=vet[i];
        }
        else if(vet[i]<menor){
            menor=vet[i];
        }
    }
    
    for(int i=0; i<VET; i++){
        if(vet[i]==maior){
            printf("O maior valor digitado é %.2f e esta no indice %d\n", maior, i);
        }
        else if(vet[i]==menor){
            printf("O menor valor digitado é %.2f e esta no indice %d\n", menor, i);
        }
        
    }
    
    return 0;
    
}

