#include <stdio.h>
#include <string.h>

void elimina_espaco(char destino[], char origem[]){
    int tam;
    
    tam = strlen(origem);
    strcpy(destino, origem);
    
    for(int i=0, j=0; i<tam; i++, j++){
        if(origem[j] == ' '){
            j++;
        }
        destino[i] = origem[j];
    }
    printf("A string final é \"%s\"", destino);
}

int main(){
    char origem[50], destino[50];
    
    printf("Digite a string de origem ");
    fgets(origem, 50, stdin);
    
    origem[strlen(origem)-1]='\0';
    
    elimina_espaco(destino, origem);
    
    return 0;
}