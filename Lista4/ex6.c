#include <stdio.h>

int contaimpar(int n1, int n2){
    int menor=0, maior=0, i, qtdimpar=0, soma=0;
    
    maior = n1;
    menor = n2;
    
    if(n1%2 == 1 || n2%2 == 1){
        qtdimpar++;
    }
    
    if(n2>n1){
        maior = n2;
        menor = n1;
    }
    
    for(i=menor; i<maior ; i++){
        soma = menor + i;
        if(soma % 2 == 1){
            qtdimpar++;
        }
    }
    return qtdimpar;
}

int main(){
    int n1, n2, qtdimpar;
    
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    
    qtdimpar = contaimpar(n1, n2);
    
    printf("O intervalo entre %d e %d recebe %d numeros impares", n1, n2, qtdimpar);
    
    return 0;
}
