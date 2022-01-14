#include <stdio.h>
#include <string.h>

void strins(char str[], char c, int pos){
    int tam, i;
    char aux, aux2;
    
    tam = strlen(str);
    aux2 = str[pos];
    str[pos] = c;
    
    for(i=pos+1; i<=tam+1; i++){
        aux = str[i];
        str[i] = aux2;
        aux2 = aux;
    }
}

int main(){
    char str[50], caracter;
    int pos;
    
    printf("Digite a string ");
    fgets(str, 50, stdin);
    str[strlen(str)-1]='\0';
    printf("Digite o caracter que queira colocar ");
    scanf(" %c", &caracter);
    printf("Digite a posição que queira colocar ");
    scanf("%d", &pos);
    
    strins(str, caracter, pos);
    
    printf("%s", str);
    
    return 0;
}