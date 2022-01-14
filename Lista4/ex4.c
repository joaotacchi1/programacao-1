#include <stdio.h>

char calcula_conceito(int media){
    char conceito = 'D';

    if(media>=0 && media<=49){
        conceito = 'D';
    }
    else if(media>=50 && media<=69){
        conceito = 'C';
    }
    else if(media>=70 && media<=89){
        conceito = 'B';
    }
    else if(media>=90 && media <=100){
        conceito = 'A';
    }
    return conceito;
}

int main(){
    float media;
    char continua = 's', conceitoFinal;

    while(continua == 's'|| continua == 'S'){
        printf("Digite sua nota: ");
        scanf("%f", &media);
        
        conceitoFinal = calcula_conceito(media);
        printf("Seu conceito é: %c \n", conceitoFinal);
       
        printf("Se quiser continuar digitando sua nota, digite S, se não, tecle qualquer outra letra ");
        scanf(" %c", &continua);
    }

    

    return 0;
}