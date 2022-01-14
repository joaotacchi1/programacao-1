#include <stdio.h>

int main(){

    int num, i, maior_num, menor_num;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);

    maior_num=num;
    menor_num=num;

    for(i=0 ; i < 9 ; i++){
        printf("Digite um numero inteiro:\n");
        scanf("%d", &num);

        if(num>maior_num){
            maior_num=num;
        }
    }

    printf("\nO maior numero digitado e: %d", maior_num);

    return 0;
}
