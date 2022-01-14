#include <stdio.h>
#include <math.h>

int main(){

    float media, valor, soma, percent1, percent2;
    int qtd=0, valor_neg=0, valor_pos=0;

    printf("Digite um valor: ");
    scanf("%f", &valor);

    soma=0.0;

    while(valor != 0){
        if(valor>0){
            valor_pos = valor_pos + 1;

        }
        else{
            if(valor<0){
                valor_neg = valor_neg + 1;
            }
        }

        soma = soma + valor;
        qtd++;
        printf("Digite outro numero\nPara encerrar a soma, digite 0\n");
        scanf("%f", &valor);


    }
    percent1 = (float)valor_pos * (100/qtd);
    percent2 = (float)valor_neg * (100/qtd);

    media = soma/qtd;

    printf("A media dos valores digitados e %.2f\n", media);
    printf("A quantidade de valores positivos e %d e a quantidade de valores negativos e %d\n", valor_pos, valor_neg);
    printf("Ja a porcentagem de positivos e %.2f%% e a de negativos e %.2f%%", percent1, percent2);


    return 0;
}