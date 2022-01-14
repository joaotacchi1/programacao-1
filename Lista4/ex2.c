#include <stdio.h>

int soma1(int q, int c);
int soma2(int ra);

int i=10;//variavel global
int j=20;//variavel global

int main(){
    int k, ra, p;
    
    p=10;
    ra=5;
    
    for(i=0; i<3; i++){
        k = soma1(ra, p);
        ra = soma2(k);
        printf("%d, %d\n", ra, k);
    }
    return 0;
    //ao executar o programa aparecem os numero 35 e 15 / 66 e 46 / 98 e 78
}

int soma1(int q, int c){
    int soma = q+i+c;//variavel local pertence a função int soma1
    return soma;
}

int soma2(int ra){
    int k = j;
    ra = ra+k;//variavel local percente a função int soma2
    return ra;
}