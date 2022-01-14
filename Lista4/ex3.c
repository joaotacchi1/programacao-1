#include <stdio.h>

int somatorio_num(int num){
    int somatorio=0, i;
    
    for(i=1; i<=num; i++){
        somatorio = somatorio + i;
    }
    return somatorio;
}

int main(){
    int num, numFinal;
    
    printf("Digite um numero inteiro : ");
    scanf("%d", &num);
    
    numFinal = somatorio_num(num);
    
    printf("O somatorio de 1 ate o numero %d é %d", num, numFinal);
    
    return 0;
}