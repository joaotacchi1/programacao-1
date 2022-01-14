#include <stdio.h>

int main(){

    int num, i, valor;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);
    
    for(i=1 ; i<=num; i++){
        valor= i * num;
        printf("%d * %d = %d\n", i, num, valor);
    }

    return 0;
}  