#include <stdio.h>
#include <math.h>

int main()
{
    int cargo;
    float salario, salario_final;

    printf("Digite seu salario: ");
    scanf("%f", &salario);
    printf("Digite seu cargo: \n1- Tecnico\n2- Gerentes\n3- Demais Funcionarios\n");
    scanf("%d", &cargo);

    if(cargo == 1){
        salario_final = (salario * (50/100)) + salario;
        printf("Seu salario final e: %.2f", salario_final);
    }

    else{
        if(cargo == 2){
        salario_final = (salario * (30/100)) + salario;
        printf("Seu salario final e: %.2f", salario_final);
        }

        else{
            if(cargo == 3){
            salario_final =(salario * (20/100)) + salario;
            printf("Seu salario final e: %.2f", salario_final);
            }
        }
    }

    return 0;
}
