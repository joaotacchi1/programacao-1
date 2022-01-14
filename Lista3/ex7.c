#include <stdio.h>

int main(){

    int num, somapar=0, somaimp=0, soma=0, qtd=0, qtdpar=0;
    float mediapar, media;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    while(num != 0){
        if(num%2 == 0){
            somapar = somapar + 1;
            qtdpar++;
        }
        else{
            if(num%2 == 1){
                somaimp = somaimp + 1;
            }
        }

        qtd++;
        soma = soma + num;
        printf("Digite um numero inteiro positivo\nSe quiser encerrar, digite 0\n");
        scanf("%d", &num);
    }

    mediapar = (float)somapar/qtdpar;
    media = (float)soma/qtd;

    printf("A quantidade de numeros pares e impares e %d e %d respectivamente\n", somapar, somaimp);
    printf("A media dos valores pares e %.2f\n", mediapar);
    printf("A media dos valores totais e %.2f", media);


    return 0;
}
