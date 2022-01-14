#include <stdio.h>

#define NUM_ALUNOS 4
#define NUM_COLUNAS 5 //Número total de colunas, contando a coluna final que é a de média


void le_notas(float notas[][NUM_COLUNAS]){
    for(int i = 0; i<NUM_ALUNOS; i++){
        for(int j=0; j<NUM_COLUNAS-1; j++){
            printf("Digite a nota %d do aluno %d: ",(j+1), (i+1));
            scanf("%f", &notas[i][j]);
        }
    }
}

void calcula_media(float notas[][NUM_COLUNAS]){
    int soma=0;
    for(int i =0; i < NUM_ALUNOS; i++){
        soma=0;
        for(int j=0; j<NUM_COLUNAS; j++){
            soma += notas[i][j];
        }
        notas[i][NUM_COLUNAS-1] = (float)soma/(NUM_COLUNAS-1);
    }
}

void exibe_relatorio(float notas[][NUM_COLUNAS]){
    for(int i = 0; i < NUM_ALUNOS; i++){
        printf("Aluno %d\n\n", i+1);
        for(int j=0; j<NUM_COLUNAS-1; j++){
            printf("\tProva %d: %.2f\n", (j+1), notas[i][j]);
        }
        printf("\tMédia: %.2f\n", notas[i][NUM_COLUNAS-1]);
    }
}

int main(){
    float notas[NUM_ALUNOS][NUM_COLUNAS];
    
    le_notas(notas);
    calcula_media(notas);
    exibe_relatorio(notas);
    
    return 0;
}