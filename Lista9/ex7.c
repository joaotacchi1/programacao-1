#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct jogador{
    int num_camisa;
    float peso;
    float altura;
    char nome[50];
}Jogador;

void armazena_info(Jogador jogadores[], int qtd){
    printf("-----Informação dos jogadores-----\n");
    for(int i=0; i<qtd; i++){
        printf("\tJogador %d\n", i+1);
        printf("Nome: ");
        fgets(jogadores[i].nome, 50, stdin);
        jogadores[i].nome[strlen(jogadores[i].nome)-1] = '\0';
        printf("Número da camisa: ");
        scanf("%d", &jogadores[i].num_camisa);
        printf("Peso: ");
        scanf("%f", &jogadores[i].peso);
        printf("Altura: ");
        scanf("%f", &jogadores[i].altura);
        getchar();
    }
}

void imprime_lista_jogadores(Jogador jogadores[], int qtd){
    printf("-----Lista de jogadores-----\n");
    for(int i=0; i<qtd; i++){
        printf("\t%s\nCamisa: %d\nPeso: %.2f\nAltura: %.2f\n", jogadores[i].nome, jogadores[i].num_camisa, jogadores[i].peso, jogadores[i].altura);
        printf("\n");
    }
}

int main(){
    Jogador *jogadores=NULL;
    int qtd = 11;
    char inicial;
    float alt_mais_baixo, peso_maior; 
    int cont_num_blusa = 0;
    
    jogadores = (Jogador*)malloc(qtd * sizeof(Jogador));
    
    if (jogadores == NULL){
        printf("Nao foi possivel alocar memoria.");
        return -1;
    }
    
    armazena_info(jogadores, qtd);
    imprime_lista_jogadores(jogadores, qtd);
    
    alt_mais_baixo = jogadores[0].altura;
    inicial = jogadores[0].nome[0];
    
    for(int i=0; i<qtd; i++){
        if(alt_mais_baixo < jogadores[i].altura){
            alt_mais_baixo = jogadores[i].altura;
        }
    }
    
    peso_maior = jogadores[0].peso;
    
    for(int i=0; i<qtd; i++){
        if(jogadores[i].peso > peso_maior){
            peso_maior = jogadores[i].peso;
            cont_num_blusa = i;
        }
    }
    
    printf("A inicial do jogador mais baixo é: %c\n", inicial);
    printf("O número do jogador mais pesado é: %d", jogadores[cont_num_blusa].num_camisa);
    
    free(jogadores);
    
    return 0;
}