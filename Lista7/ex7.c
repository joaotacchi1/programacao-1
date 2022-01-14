#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_LINHA 3
#define NUM_COLUNA 6

void gera_num_aleatorio(int matriz[][NUM_COLUNA]){
    int i, j, num, valor_maximo = 10;
    srand(time(NULL));
    for (i = 0; i < NUM_LINHA; i++){
        for(j=0; j<NUM_COLUNA; j++){
            matriz[i][j] = rand()%valor_maximo;
        }
    }
}

void exibe_matriz(int matriz[][NUM_COLUNA]){
    printf("[");
    for(int i=0; i<NUM_LINHA; i++){
        for(int j=0; j<NUM_COLUNA; j++){
            if(j == 0 && i != 0){
                printf("%d, ", matriz[i][j]);
            }
            else if(i == NUM_LINHA-1 && j == NUM_COLUNA-1){
                printf("%d]", matriz[i][j]);
            }
            else{
                printf("%d, ", matriz[i][j]);
            }
        }
        printf("\n");
    }
}

void multiplica_constante(int matriz[][NUM_COLUNA], int constante, int matriz_final[][NUM_COLUNA]){
    for(int i=0; i < NUM_LINHA; i++){
        for(int j=0; j < NUM_COLUNA; j++){
            matriz_final[i][j] = constante * matriz[i][j];    
        }
    }
}

void exibe_matriz2(int matriz[][NUM_COLUNA]){
    printf("[");
    for(int i=0; i<NUM_LINHA; i++){
        for(int j=0; j<NUM_COLUNA; j++){
            if(j == 0 && i != 0){
                printf("%d, ", matriz[i][j]);
            }
            else if(i == NUM_LINHA-1 && j == NUM_COLUNA-1){
                printf("%d]", matriz[i][j]);
            }
            else{
                printf("%d, ", matriz[i][j]);
            }
        }
        printf("\n");
    }
}

int main(){
    int matriz[NUM_LINHA][NUM_COLUNA], matriz_final[NUM_LINHA][NUM_COLUNA], constante, multi_final;
    
    gera_num_aleatorio(matriz);
    exibe_matriz(matriz);
    printf("Digite um número para ser multiplicado na matriz ");
    scanf("%d", &constante);
    multiplica_constante(matriz, constante, matriz_final);
    exibe_matriz2(matriz_final);
    
    return 0;
}

