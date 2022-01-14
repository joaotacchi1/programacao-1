#include <stdio.h>

int main(){
    
    int num, i, num_final = 1;
    
    printf("Digite um número inteiro para calcular seu fatorial: ");
    scanf("%d", &num);
    
    for(i=1; i<=num; i++){
        num_final = num_final * i;
    }
    printf("O fatorial de %d é %d", num, num_final);
    
    return 0;
}