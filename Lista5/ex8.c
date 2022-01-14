#include <stdio.h>
#define VET 2

void le_vetor(int matricula[], float salario[]){
    for(int i=0; i<VET; i++){
        printf("Digite a matricula do funcionário %d\n", i+1);
        scanf("%d", &matricula[i]);
        printf("Digite o salário do funcionário %d\n", i+1);
        scanf("%f", &salario[i]);
    }
}

void aumenta_salario(int matricula[], float salario[], float salario_final[]){
    for(int i=0; i<VET; i++){
        if(matricula[i]%2==0){
            salario_final[i] = 0.15 * salario[i] + salario[i];
        }
        if(matricula[i]%2==1){
            salario_final[i] = 0.2 * salario[i] + salario[i];
        }
    }
}

void imprime_informacoes(int matricula[], float salario[], float salario_final[]){
    for(int i=0; i<VET; i++){
        printf("Funcionario %d\nMatricula: %d\n",i+1, matricula[i]);
        printf("Salário base: %.2f\n", salario[i]);
        if(matricula[i]%2==0){
            printf("Percentual de salário: 15\n");
        }
        if(matricula[i]%2==1){
            printf("Percentual de salário: 20\n");
        }
        printf("Salário corrigido: %.2f\n\n", salario_final[i]);
    }
}

int main(){
    float salario[VET], salario_final[VET];
    int matricula[VET];
    
    le_vetor(matricula, salario);
    aumenta_salario(matricula, salario, salario_final);
    imprime_informacoes(matricula, salario, salario_final);
    
    return 0;
    
}

