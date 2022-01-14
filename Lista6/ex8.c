#include <stdio.h>
#include <string.h>

void muda_praP(char string1[], char string_final[]){
    int tam = strlen(string1);
    for(int i=0; i<tam; i++){
        if(string1[i] == 'a' ||string1[i] == 'e' ||string1[i] == 'i' ||string1[i] == 'o' ||string1[i] == 'u' ||
        string1[i] == 'A' ||string1[i] == 'E' ||string1[i] == 'I' ||string1[i] == 'O' ||string1[i] == 'U'){
            string1[i] = 'P';
        }
        string_final[i] = string1[i];
    }
}

int main(){
    char string1[50], string_final[50];
    
    printf("Digite a string original ");
    fgets(string1, 50, stdin);
    
    muda_praP(string1, string_final);
    
    printf("A string na linguagem do \"P\" fica: \"%s\"", string_final);
}