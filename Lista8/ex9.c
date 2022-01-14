#include <stdio.h>

void main(){
    int vet[] = {4,9,13};
    int *o = vet;
    int i;

    for(i=0; i<3; i++){
        printf("%d ", *(vet + i));
    }

    for(i=0; i<3; i++){
        printf("%p ", vet + i);
    }

    for(i=0; i<3; i++){
        printf("%p ", o++);
    }
}

//No primeiro código, aparecem os números digitados no vetor inicialmente, atraves da soma de i em vet, e pegando o conteudo do endereço de memoria resultante
//No segundo aparece o endereço de memória dos numeros digitados, percorrendo atraves da soma do endereço de memoria inicial, somado a i
//No terceiro apenas percorre o vetor atraves da aritmetica de ponteiros, atraves do ponteiro o, mostrando o endereço de memoria