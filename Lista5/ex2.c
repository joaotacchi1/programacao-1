#include <stdio.h>
#define VET 20

void le_vetor(int vet[]){
    
    printf("Digite o indice 0\n");
    scanf("%d", &vet[VET]);
    vet[0] = vet[VET];
    if(vet[VET]<0){
        for(int i=vet[VET]; i<VET; i++){
            printf("Número inválido, digite um número positivo\n");
            printf("Digite o indice 0\n");
            scanf("%d", &vet[VET]);
        }
    }
    
    if(vet[VET]>0){
        for(int i=1; i<VET; i++){
            printf("Digite o indice %d \n", i );
            scanf("%d", &vet[i]);
        }
    }
}

int main(){
    int vet[VET], i, soma=0;
    float media;
    
    le_vetor(vet);
    
    for(i=0; i<VET; i++){
        soma += vet[i];
    }
    media = (float)soma/VET;
    
    for(i=0; i<VET; i++){
        if(vet[i]<media){
            printf("A média é %.2f e o indice %d é %d\n", media, i, vet[i]);
        }
        else{
            printf("Indice %d não está abaixo da média\n", i);
        }
    }
    
    return 0;
    
}

