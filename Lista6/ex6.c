#include <stdio.h>
#include <string.h>

int main(){
    char string1[50];
    int tam, vogal=0;
    
    printf("Digite a string ");
    fgets(string1, 50, stdin);
    
    string1[strlen(string1)-1]='\0';
    tam = strlen(string1);
    
    for(int i=0; i<tam; i++){
        if(string1[i] == 'a' ||string1[i] == 'e' ||string1[i] == 'i' ||string1[i] == 'o' ||string1[i] == 'u' ||
        string1[i] == 'A' ||string1[i] == 'E' ||string1[i] == 'I' ||string1[i] == 'O' ||string1[i] == 'U'){
            vogal++;
        }
    }
    printf("O número de vogais na frase é: %d", vogal);
    
    return 0;
}