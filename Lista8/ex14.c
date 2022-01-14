#include <stdio.h>
#include <stdlib.h>

float *aloca_vetor_float(int n){
    float *vet = NULL;
    
    vet = (float *) malloc(n* sizeof(float));
    
    if(vet == NULL){
        printf("Não foi possivel alocar a memória");
        return NULL;
    }
    
    return vet;
}

void exibe_vetor(float *vet, int n){
    float *p = NULL;
    
    p = vet;
    
    for(int i=0; i<n; i++){
        printf("%.1f, ", *p);
        p++;
    }
}

int main(){
    float *ptr = NULL, *vet = NULL;
    int n;
    
    printf("Digite quantos elementos quer no array: ");
    scanf("%d", &n);
    
    ptr = aloca_vetor_float(n);
    
    if(ptr == NULL){
        printf("Não foi possivel alocar a memória");
        return -1;
    }
    
    vet = ptr;
    
    printf("Agora, preeencha o vetor\n");
    for(int i=0; i < n; i++){
        printf("Elemento %d do vetor: ", i);
        scanf("%f", vet);
        vet++;
    }
    
    exibe_vetor(ptr, n);
    
    free(ptr);
    
    return 0;
}