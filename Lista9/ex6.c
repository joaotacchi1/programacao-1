#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct endereco{
    char cidade[25], rua[60], bairro[25];
    int numero;
}Endereco;

typedef struct aluno{
    char nome[50], curso[40];
    int semestre, dia, mes, ano;
    Endereco end;
}Aluno;

void cadastra_alunos(Aluno alunos[], int n){
    int i;
    
    printf("\t*****CADASTRO DE ALUNOS*****\n");
    for(i=0; i<n; i++){
        printf("~~~~Aluno %d~~~~\n", i+1);
        getchar();
        printf("Nome: ");
        fgets(alunos[i].nome, 50, stdin);
        alunos[i].nome[strlen(alunos[i].nome)-1] = '\0';
        printf("Curso: ");
        fgets(alunos[i].curso, 40, stdin);
        alunos[i].curso[strlen(alunos[i].curso)-1] = '\0';
        printf("Semestre: ");
        scanf("%d", &alunos[i].semestre);
        printf("Data de nascimento(dia/mes/ano): ");
        scanf("%d%d%d", &alunos[i].dia, &alunos[i].mes, &alunos[i].ano);
        getchar();
        printf("Cidade: ");
        fgets(alunos[i].end.cidade, 25, stdin);
        alunos[i].end.cidade[strlen(alunos[i].end.cidade)-1] = '\0';
        printf("Rua: ");
        fgets(alunos[i].end.rua, 60, stdin);
        alunos[i].end.rua[strlen(alunos[i].end.rua)-1] = '\0';
        printf("Bairro: ");
        fgets(alunos[i].end.bairro, 25, stdin);
        alunos[i].end.bairro[strlen(alunos[i].end.bairro)-1] = '\0';
        printf("Número da casa: ");
        scanf("%d", &alunos[i].end.numero);
    }
}

void exibe_dados_aluno(Aluno a){
    printf("Nome: %s - %s - %d semestre\n", a.nome, a.curso, a.semestre);
    printf("Nascimento: %d/%d/%d\n", a.dia, a.mes, a.ano);
    printf("Endereço: %s, numero %d - Bairro: %s - Cidade: %s", a.end.rua, a.end.numero, a.end.bairro, a.end.cidade);
    printf("\t\n***************\n");
}

void exibe_alunos(Aluno aluno[], int n){
    int i;
    printf("\n");
    printf("****************\nDADOS DOS ALUNOS\n****************\n\n");
    for(i=0; i<n; i++){
        exibe_dados_aluno(aluno[i]);
        printf("\n");
    }
}

Aluno aluno_mais_antigo(Aluno alunos[], int n){
     int mais_antigo = 0, semestre_antigo;
     
     semestre_antigo = alunos[0].semestre;
     
     for(int i = 0; i < n; i++){
             if(alunos[i].semestre > semestre_antigo) {
                 semestre_antigo = alunos[i].semestre;
                 mais_antigo = i;
             }
    }
    return alunos[mais_antigo];
}

int main(){
    int n;
    Aluno *alunos=NULL;
    Aluno aluno_antigo;
    
    printf("Digite quantos alunos quer cadastrar ");
    scanf("%d", &n);
    
    alunos = (Aluno*)malloc(n*sizeof(Aluno));
    
    if (alunos == NULL){
        printf("Nao foi possivel alocar memoria.");
        return -1;
    }
    
    cadastra_alunos(alunos, n);
    exibe_alunos(alunos, n);
    aluno_antigo = aluno_mais_antigo(alunos, n);
    
    
    printf("\n*****DADOS ALUNO MAIS ANTIGO*****\n");
    exibe_dados_aluno(aluno_antigo);
    
    free(alunos);
    
    return 0;
}