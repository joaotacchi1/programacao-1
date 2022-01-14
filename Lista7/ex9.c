#include <stdio.h>

#define NUM_LINHA 4
#define NUM_COLUNA 4

void preenche_matriz(int matriz[][NUM_COLUNA]){
    printf("Calculo de matriz\n");
    printf("Preencha a matriz com os digitos que quiser\n");
    
    for(int i=0; i<NUM_LINHA; i++){
        for(int j=0; j<NUM_COLUNA; j++){
            printf("Linha %d, coluna %d ", i, j);
            scanf("%d", &matriz[i][j]);
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

void soma_linha(int matriz[][NUM_COLUNA]){
    int soma;
    
    for(int i=0; i<NUM_LINHA; i++){
        soma=0;
        for(int j=0; j<NUM_COLUNA; j++){
            soma += matriz[i][j];
        }
        printf("Soma da linha %d é %d\n", i, soma);
    }
}

void soma_coluna(int matriz[][NUM_COLUNA]){
    int soma;
    
    for(int i=0; i<NUM_LINHA; i++){
        soma=0;
        for(int j=0; j<NUM_COLUNA; j++){
            soma += matriz[j][i];
        }
        printf("Soma da coluna %d é %d\n", i, soma);
    }
}

void soma_diagonal(int matriz[][NUM_COLUNA]){

    int soma=0;
        for(int i=0;i < NUM_LINHA;i++){
            for(int j=0; j<NUM_COLUNA; j++){
                if(i==j){
                    soma += matriz[i][j];
                }
            }
        }
        printf("Soma da diagonal principal: %d\n",soma);
}

void soma_diagonal_secundaria(int matriz[][NUM_COLUNA]){

    int soma=0, auxLinha = NUM_LINHA -1 , auxColuna = 0;

        for(int i=0;i < NUM_LINHA;i++){
            for(int j=0; j<NUM_COLUNA; j++){

                if((i==auxLinha && j == auxColuna) || i == j ){
                    soma += matriz[i][j];
                    auxLinha--;
                    auxColuna--;
                }
            }
        }
        printf("Soma da diagonal secundaria: %d\n",soma);
}

void soma_bordas(int matriz[][NUM_COLUNA]){

    int soma=0;

        for(int i=0;i < NUM_LINHA;i++){
            for(int j=0; j<NUM_COLUNA; j++){

                if(i==0 || i== NUM_LINHA-1 || j == 0 || j == NUM_COLUNA- 1 ){
                    soma += matriz[i][j];
                }
            }
        }
        printf("Soma das bordas: %d\n",soma);
}

void soma_internas(int matriz[][NUM_COLUNA]){
    int soma=0;
    
    for(int i=0; i < NUM_LINHA; i++){
        for(int j=0; j < NUM_COLUNA; j++){
            soma += matriz[i][j];    
        }
    }
    printf("A soma dos elementos internos é: %d", soma);
}

void multiplica_linha(int matriz[][NUM_COLUNA]){
    int mult;
    
    for(int i=0; i<NUM_LINHA; i++){
        mult=1;
        for(int j=0; j<NUM_COLUNA; j++){
            mult = mult * matriz[i][j];
        }
        printf("Multiplicação da linha %d é %d\n", i, mult);
    }
}

void multiplica_coluna(int matriz[][NUM_COLUNA]){
    int mult;
    
    for(int i=0; i<NUM_LINHA; i++){
        mult=1;
        for(int j=0; j<NUM_COLUNA; j++){
            mult =mult * matriz[j][i];
        }
        printf("Multiplicação da coluna %d é %d\n", i, mult);
    }
}

void multiplica_diagonal(int matriz[][NUM_COLUNA]){

    int mult=1;
        for(int i=0;i < NUM_LINHA;i++){
            for(int j=0; j<NUM_COLUNA; j++){
                if(i==j){
                    mult = mult * matriz[i][j];
                }
            }
        }
        printf("Multiplicação da diagonal principal: %d\n",mult);
}

void multiplica_diagonal_secundaria(int matriz[][NUM_COLUNA]){

    int mult=1, auxLinha = NUM_LINHA -1 , auxColuna = 0;

        for(int i=0;i < NUM_LINHA;i++){
            for(int j=0; j<NUM_COLUNA; j++){

                if((i==auxLinha && j == auxColuna) || i == j ){
                    mult= mult * matriz[i][j];
                    auxLinha--;
                    auxColuna--;
                }
            }
        }
        printf("Multiplicação da diagonal secundaria: %d\n",mult);
}

void multiplica_bordas(int matriz[][NUM_COLUNA]){

    int mult=1;

        for(int i=0;i < NUM_LINHA;i++){
            for(int j=0; j<NUM_COLUNA; j++){

                if(i==0 || i== NUM_LINHA-1 || j == 0 || j == NUM_COLUNA- 1 ){
                    mult = mult * matriz[i][j];
                }
            }
        }
        printf("Multiplicação das bordas: %d\n",mult);
}

void multiplica_internas(int matriz[][NUM_COLUNA]){
    int mult=1;
    
    for(int i=0; i < NUM_LINHA; i++){
        for(int j=0; j < NUM_COLUNA; j++){
            mult = mult * matriz[i][j];    
        }
    }
    printf("A multiplicação dos elementos internos é: %d", mult);
}

int main(){
    int matriz[NUM_LINHA][NUM_COLUNA], op_calculo;
    char op;
    
    preenche_matriz(matriz);
    exibe_matriz(matriz);
    
    printf("Qual operação deseja fazer na matriz? Digite + para adição ou * para multiplicação?\n");
    scanf(" %c", &op);
    printf("Escolha a opção de cálculo que quer fazer: 1-cálculo pra cada linha\n2-cálculo pra cada coluna\n3-cálculo para a diagonal principal\n");
    printf("4-cálculo para a diagonal secundária\n5-cálculo para os elementos da borda da matriz\n6-cálculo para os elementos internos da matriz\n");
    scanf("%d", &op_calculo);
    
        if(op == '+'){
            switch (op_calculo){
                case 1:
                soma_linha(matriz);
                break;
            
                case 2:
                soma_coluna(matriz);
                break;
            
                case 3:
                soma_diagonal(matriz);
                break;
            
                case 4:
                soma_diagonal_secundaria(matriz);
                break;
            
                case 5: 
                soma_bordas(matriz);
                break;
            
                case 6:
                soma_internas(matriz);
                break;
            
                default:
                printf("Número inválido");
            }
        }
    
        else if(op == '*'){
            switch (op_calculo){
                case 1:
                multiplica_linha(matriz);
                break;
            
                case 2:
                multiplica_coluna(matriz);
                break;
            
                case 3:
                multiplica_diagonal(matriz);
                break;
            
                case 4:
                multiplica_diagonal_secundaria(matriz);
                break;
            
                case 5: 
                multiplica_bordas(matriz);
                break;
            
                case 6:
                multiplica_internas(matriz);
                break;
            
                default:
                printf("Número inválido");
            }
        }
        else{
            printf("Operador inválido");
        }   
    
    return 0;
}