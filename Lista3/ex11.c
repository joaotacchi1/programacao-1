#include <stdio.h>

int main(){

    int filho, qtd_salario = 0, qtd_filho = 0;
    float salario, salario_total = 0, media_salario, filho_total = 0, media_filho, salario_maior=0, percent_salario=0, percent;
    char continua = 's';

    printf("Bem vindo a pesquisa da cidade");

    do{
        printf("\nDigite o seu salario: \n");
        scanf("%f", &salario);
        if(salario>salario_maior){
            salario_maior=salario;
        }
        qtd_salario++;
        printf("Digite quantos filhos voce tem: \n");
        scanf("%d", &filho);
        qtd_filho++;

        if(salario<100){
            percent_salario = percent_salario + 1;
        }

        salario_total = salario_total + salario;
        filho_total = filho_total + filho;



        printf("Deseja continuar registrando informacoes? Digite s para continuar ou qualquer outra tecla para sair ");
        scanf(" %c", &continua);
    }while(continua == 's');

    media_salario = salario_total/qtd_salario;
    printf("A media do salario e %.2f\n", media_salario);
    media_filho = (float)filho_total/qtd_filho;
    printf("A media de filhos da cidade e %.2f\n", media_filho);
    printf("O maior salario e %.2f\n", salario_maior);
    percent = percent_salario * (100/qtd_salario);
    printf("A porcentagem de pessoas com salario menor que 100 e %.2f%%", percent);

    return 0;
}
