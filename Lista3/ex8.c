#include <stdio.h>

int main(){

    float salario, salario_maior;

    printf("Digite um salario: ");
    scanf("%f", &salario);

    salario = salario_maior;

    while(salario != -1){
        printf("Digite um salario:\nDigite -1 para exibir o maior salario\n");
        scanf("%f", &salario);

        if(salario>salario_maior){
            salario_maior=salario;
        }
    }

    printf("O maior salario digitado foi %.3f", salario_maior);

    return 0;
}
