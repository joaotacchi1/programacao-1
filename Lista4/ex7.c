#include <stdio.h>

int somaintervalo(int n1, int n2){
    int menor=0, maior=0, i, soma = 0;
    
    maior = n1;
    menor = n2;
    
    if(n2>n1){
        maior = n2;
        menor = n1;
    }
    
    for(i=menor; i<=maior; i++){
        soma = soma + i;
    }
    
    return soma;
}

int main(){
    int n1, n2, soma_final;
    
    printf("Digite o intervalo: ");
    scanf("%d %d", &n1, &n2);
    
    soma_final = somaintervalo(n1, n2);
    
    printf("O resultado da soma final é: %d", soma_final);
    
    return 0;
}