#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    int i, j, tam;
    
    printf("Digite a frase ");
    fgets(str, 50, stdin);
    str[strlen(str)-1]='\0';
    tam = strlen(str);
    
    for(i=0, j=tam-1; i<tam; i++, j--){
        if(str[i] != str[j]){
            printf("Não palíndromo");
            return 0;
        }
        
    }
    printf("Palíndromo");
    
    return 0;
}