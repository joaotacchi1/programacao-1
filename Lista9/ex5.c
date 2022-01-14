#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct atleta{
    char nome[50];
    int idade;
    char esporte[40];
    float altura;
}Atleta;

int main(){
    Atleta *atletas=NULL;
    int n, id_maior, pos_id=0, pos_alt=0;
    float alt_maior;
    
    printf("Digite quantos atletas quer registrar ");
    scanf("%d", &n);
    getchar();
    
    atletas = (Atleta *)malloc(n * sizeof(Atleta));
    
    if (atletas == NULL){
        printf("Nao foi possivel alocar memoria.");
        return -1;
    }
    
    printf("-----Registro de Atletas-----\n");
    for(int i=0; i<n; i++){
        printf("\tJogador %d\n", i+1);
        printf("Nome: ");
        fgets(atletas[i].nome, 50, stdin);
        atletas[i].nome[strlen(atletas[i].nome)-1] = '\0';
        printf("Idade: ");
        scanf("%d", &atletas[i].idade);  
        printf("Esporte: ");
        scanf("%s", atletas[i].esporte);
        printf("Altura: ");
        scanf("%f", &atletas[i].altura);
        getchar();
    }
    
    id_maior = atletas[0].idade;
    alt_maior = atletas[0].altura;
    
    for(int i=0; i<n; i++){
        if(atletas[i].idade > id_maior){
            id_maior = atletas[i].idade;
            pos_id = i;
        }
        
        else if(atletas[i].altura > alt_maior){
            alt_maior = atletas[i].altura;
            pos_alt = i;
        }
    }
    
    printf("\tDados do atleta mais velho");
    printf("\nNome: %s\nIdade: %d\nEsporte: %s\nAltura: %.2f\n", atletas[pos_id].nome, atletas[pos_id].idade, atletas[pos_id].esporte, atletas[pos_id].altura);
    printf("\tDados do atleta mais alto");
    printf("\nNome: %s\nIdade: %d\nEsporte: %s\nAltura: %.2f\n", atletas[pos_alt].nome, atletas[pos_alt].idade, atletas[pos_alt].esporte, atletas[pos_alt].altura);
    
    
    free(atletas);
    
    return 0;
}