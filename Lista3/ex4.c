#include <stdio.h>

int main(){

    int num, soma_int=0, soma=0, i;

    for(i=0; i<10; i++){
        printf("Digite um numero inteiro: \n");
        scanf("%d", &num);

        if(num>=10 && num<=20){
            soma_int = soma_int + 1;
        }
        else{
            soma= soma + 1;
        }
    }

    printf("%d estao no intervalo\n", soma_int);
    printf("%d nao estao no intervalo", soma);

    return 0;
}
