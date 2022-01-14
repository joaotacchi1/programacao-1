#include <stdio.h>
#include <stdlib.h>

int * multiplica_vetores(int *vet1, int *vet2, int tam){
    int *vet=NULL;
    
    vet = (int*)malloc(tam * sizeof(int));
    
    for(int i=0; i<tam; i++){
        vet[i] = vet1[i] * vet2[i];
    }
    
    return vet;
}

void exibe_vetor(int *vet, int tam){
    for(int i=0; i<tam; i++){
        if(i == tam - 1){
            printf("%d", vet[i]);
        }
        else{
            printf("%d - ", vet[i]);
        }
    }
}

int main(){
    int *vet1 = NULL, *vet2 = NULL, *vetc = NULL, i, tam;
    
    do{
        printf("digite o tamanho dos vetores = ");
        scanf("%d", &tam);
        if(tam <= 0){
            printf(" ! Numero invalido ! \n\n");
        }
    }while(tam <= 0);
    
    vet1 = (int*)malloc(tam * sizeof(int));
    vet2 = (int*)malloc(tam * sizeof(int));

    for(i=0; i<tam; i++){
        vet1[i] = i+1;
        vet2[i] = i+2;
    }
    
    printf("\nVetor 1 = ");
    exibe_vetor(vet1, tam);
    
    printf("\nVetor 2 = ");
    exibe_vetor(vet2, tam);
    
    vetc = multiplica_vetores(vet1, vet2, tam);
    
    printf("\nVetor C = ");
    exibe_vetor(vetc, tam);
    
    printf("\n\a");
    
    free(vet1);
    free(vet2);
    free(vetc);
    
    return 0;
}
