#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(0 < num && num <= 10){
        printf("Pertence ao grupo 1\n");
    }

    else if(10 <= num && num <= 100){
        printf("Pertence ao grupo 2\n");
    }

    else if(100 <= num && num <= 1000){
        printf("Pertence ao grupo 3\n");
    }

    else if(1000 <= num && num <= 10000){
        printf("Pertence ao grupo 4\n");
    }

    else{
        printf("Numero nao esta em nenhum grupo");
    }

    return 0;
}
