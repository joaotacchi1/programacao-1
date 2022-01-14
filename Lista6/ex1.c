#include <stdio.h>
#include <string.h>

int strichr (char str[],char c){
    int tam;
    
    tam = strlen(str);

    for(int i=0; i<tam; i++){
        if(str[i] == c ){
            printf("A primeira aparição de %c esta na %d° letra",c, i);
            return 0;
        }
    }
    return -1;
}

int main(){
    char str[100], letra_procurada;
    int tam;
    
    printf("Digite a frase ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1]='\0';
    
    printf("Digite o caracter que deseja buscar na frase ");
    scanf(" %c", &letra_procurada);
    
    if(strichr(str, letra_procurada)==-1){
        printf("Não possui %c na frase \"%s\" ", letra_procurada, str);
    }
    
    return 0;
}