#include <stdio.h>
#include <string.h>

int main (){
    char str1[50];
    int i,j, tam;
    printf("digite a string 1:\n");
    fgets(str1, 50, stdin);
    str1[strlen(str1)-1]='\0';
    tam = strlen(str1);
    
    printf("%s\n", str1);
    for(i=0,j=tam-1; i<tam; i++, j--){
        if(str1[i]==' '){
            i++;
        }

        if(str1[j]==' '){
            j--;
        }

        if(str1[i]!=str1[j]){
            printf("Nao palindromo");
            return 0;
        }
    }

    printf("palindromo");
    return 0;
}