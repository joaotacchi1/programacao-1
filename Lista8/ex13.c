#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, *vet = NULL;
    
    printf("Digite quantos elementos quer no array: ");
    scanf("%d", &n);
    
    while(n<0){
        if(n<0){
            printf("Error\nDigite um valor de elemento positivo");
            scanf("%d", &n);
        }
    }
    
    vet = (int *) malloc(n* sizeof(int));
    
    if(vet == NULL){
        printf("Não foi possivel alocar a memória");
        return -1;
    }
    
    printf("Preeencha o vetor\n");
    for(int i=0; i< n; i++){
        printf("Elemento %d do vetor: ", i);
        scanf("%d", &vet[i]);
        
        while(vet[i]<1){
            printf("Elemento %d do vetor: ", i);
            scanf("%d", &vet[i]);
        }

    }
    
    free(vet);
    
    return 0;
}


