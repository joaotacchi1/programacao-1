#include <stdio.h>
#include <string.h>

void copia_string(char str1[], char str2[]){
    int tam;
    
    str1[strlen(str1)-1]='\0';
    tam=strlen(str1);
    
    for(int i=0; i<tam; i++){
        str2[i]=str1[i];
        printf("%c", str2[i]);
    }
}

int main(){
    char str1[50], str2[50];
    
    printf("Digite a string ");
    fgets(str1, 50, stdin);
    
    copia_string(str1, str2);
    
    return 0;
}