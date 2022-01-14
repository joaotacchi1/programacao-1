#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_LINHA 3
#define NUM_COLUNA 4

void gera_num_aleatorio(int matriz[][NUM_COLUNA]){
    int i, j, valor_maximo=10, num;
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

int soma(int matriz[][NUM_COLUNA]){
    int soma=0;
    
    for(int i=0; i < NUM_LINHA; i++){
        for(int j=0; j < NUM_COLUNA; j++){
            soma += matriz[i][j];    
        }
    }
    return soma;
}

int multiplica_matriz(int matriz[][NUM_COLUNA]){
    int multiplica=1;
    
    for(int i=0; i < NUM_LINHA; i++){
        for(int j=0; j < NUM_COLUNA; j++){
            multiplica = multiplica * matriz[i][j];
        }
    }  
    return multiplica;
}



int main(){
    int matriz[NUM_LINHA][NUM_COLUNA], soma_final, multiplicacao_final;
    
    gera_num_aleatorio(matriz);
    exibe_matriz(matriz);
    soma_final = soma(matriz);
    printf("A soma de todos os fatores da matriz é: %d\n", soma_final);
    multiplicacao_final = multiplica_matriz(matriz);
    printf("A multiplicação de todos os fatores da matriz é: %d", multiplicacao_final);
    
    return 0;
}

