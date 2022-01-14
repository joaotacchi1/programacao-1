#include <stdio.h>

int main(){

    int idade, soma, qnt=0;
    float media, peso;
    char continua = 's';

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if(idade>30){
        soma=0;
        do{
            printf("Digite o peso\n");
            scanf("%f", &peso);
            qnt++;
            soma = soma + peso;
            printf("Deseja continuar colocando outros pesos? Digite s se sim\nDigite n se nao\n");
            scanf(" %c", &continua);

            if(continua == 'n'){
                printf("Obrigado por usar o programa\n");
            }
            else if(continua != 'n' && continua != 's'){
                printf("Codigo invalido\n");
            }
        }while(continua == 's');

        media = (float)soma/qnt;
        printf("A media dos pesos digitados e: %.2f", media);
    }
    else{
        printf("\nSua idade nao e valida\n");
    }

    return 0;
}
