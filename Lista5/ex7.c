#include <stdio.h>
#define VET 2

void le_vetor(float nota1[], float nota2[]){
    for(int i=0; i<VET; i++){
        printf("Digite a nota da prova 1, do aluno %d\n", i+1);
        scanf("%f", &nota1[i]);
        printf("Digite a nota da prova 2, do aluno %d\n", i+1);
        scanf("%f", &nota2[i]);
    }
}

void calcula_media(float nota1[], float nota2[], float media[]){
    for(int i=0; i<VET; i++){
        media[i] = (nota1[i] + nota2[i])/2;
    }
}

void imprime_informacoes(float nota1[], float nota2[], float media[]){
    for(int i=0; i<VET; i++){
        printf("Aluno %d\nNota da P1: %.2f\tNota da P2: %.2f\n\tMédia:\t%.2f\n",i+1, nota1[i], nota2[i], media[i]);
    }
}

int main(){
    float nota1[VET], nota2[VET], media[VET];
    
    le_vetor(nota1, nota2);
    calcula_media(nota1, nota2, media);
    imprime_informacoes(nota1, nota2, media);
    
    return 0;
    
}

