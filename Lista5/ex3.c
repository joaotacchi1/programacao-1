#include <stdio.h>
#define VET 10

void le_vetor(float vet1[], float vet2[]){
    for(int i=0; i<VET; i++){
        printf("Digite o indice %d do vetor 1\n", i );
        scanf("%f", &vet1[i]);
        printf("Digite o indice %d do vetor 2\n", i );
        scanf("%f", &vet2[i]);
    }
}

void multiplica_vetor(float vet1[], float vet2[]){
    float vet_mult[VET];
    
    for(int i=0; i<VET; i++){
        vet_mult[i] = vet1[i] * vet2[i];
        printf("%.2f * %.2f = %.2f\n", vet1[i], vet2[i], vet_mult[i]);
    }
}

int main(){
    float vet1[VET], vet2[VET];
    
    le_vetor(vet1, vet2);
    multiplica_vetor(vet1, vet2);
    
    return 0;
    
}
