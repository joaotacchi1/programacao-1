#include <stdio.h>
#define VET 20

void le_vetor(int vet[]){
    for(int i=0; i<VET; i++){
        printf("Digite o indice %d \n", i );
        scanf("%d", &vet[i]);
    }
}

int main(){
    int contpar=0, contimpar=0, vet[VET];
    
    le_vetor(vet);
    
    for(int i=0; i<VET; i++){
       if(vet[i]%2 == 0){
           contpar++;
       }
       else{
           contimpar++;
       }
    }
    printf("O número de vezes que pares e impares apareceu respectivamente foi %d e %d", contpar, contimpar);
    
    return 0;
    
}

