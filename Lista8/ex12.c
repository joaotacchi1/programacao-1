#include <stdio.h>
#include <stdlib.h>

void soma_array(int vet1[], int vet2[], int result[], int n){
    for(int i=0; i<n; i++){
        result[i] = vet1[i] + vet2[i];
        printf("Resultado do elemento %d do array = %d\n", i, result[i]);
    }
}

int main(){
    int n, *vet1 = NULL, *vet2 = NULL, *result= NULL;
    
    printf("Digite quantos elementos quer no array: ");
    scanf("%d", &n);
    
    vet1 = (int *) malloc(n* sizeof(int));
    vet2 = (int *) malloc(n* sizeof(int));
    result = (int *) malloc(n* sizeof(int));
    
    if(vet1 == NULL || vet2 == NULL || result == NULL){
        printf("Não foi possivel alocar a memória");
        return -1;
    }
    
    
    printf("Preeencha os arrays\n");
    for(int i=0; i< n; i++){
        printf("Elemento %d do primeiro array: ", i);
        scanf("%d", &vet1[i]);
        printf("Elemento %d do segundo array: ", i);
        scanf("%d", &vet2[i]);
    }
    
    
    soma_array(vet1, vet2, result, n);
    
    free(vet1);
    free(vet2);
    free(result);
    
    return 0;
}