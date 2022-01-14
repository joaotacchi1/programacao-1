#include <stdio.h>

int main(){

    int num, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for(i=0 ; i<=num; i++){
        printf("\n%d", i);
    }

    return 0;
}
