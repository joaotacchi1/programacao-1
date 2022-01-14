#include <stdio.h>
#include <string.h>

typedef struct info{
    char nome[20];
    char end[50];
    int idade;
}Info;

int main(){
    Info pessoa;
    
    printf("Digite o nome da pessoa: ");
    scanf("%s", pessoa.nome);
    getchar();
    
    printf("Digite o endereço: ");
    fgets(pessoa.end, 50, stdin);
    pessoa.end[strlen(pessoa.end)-1]='\0';
    
    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);
    
    printf("Nome: %s\nEndereço: %s\nIdade: %d\n", pessoa.nome, pessoa.end, pessoa.idade );

    
    return 0;
}