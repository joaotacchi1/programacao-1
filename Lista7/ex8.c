#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_LINHA 4
#define NUM_COLUNA 4

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

void mostra_maior(int matriz[][NUM_COLUNA]){
    int maior;
    maior = matriz[0][0];
    for(int i=0; i<NUM_LINHA; i++){
        for(int j=0; j<NUM_COLUNA; j++){
            if(matriz[i][j]>maior){
                maior = matriz[i][j];
            }
        }
    }
    printf("O maior número é: %d\n", maior);
}

void mostra_menor(int matriz[][NUM_COLUNA]){
    int menor;
    menor = matriz[0][0];
    for(int i=0; i<NUM_LINHA; i++){
        for(int j=0; j<NUM_COLUNA; j++){
            if(matriz[i][j]<menor){
                menor = matriz[i][j];
            }
        }
    }
    printf("O meor número é: %d", menor);
}

int main(){
    int matriz[NUM_LINHA][NUM_COLUNA], matriz_final[NUM_LINHA][NUM_COLUNA], constante, multi_final;
    
    gera_num_aleatorio(matriz);
    exibe_matriz(matriz);
    mostra_maior(matriz);
    mostra_menor(matriz);
    
    
    return 0;
}

