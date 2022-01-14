#include <stdio.h>

void estacao(int dia, int mes){
    if(mes==1 || mes==2 || (mes==12 && dia > 21) || (mes ==3 && dia<21)){
        printf("%d/%d é verão", dia, mes);
    }
    else{
        if(mes==4 || mes==5 || (mes==6 && dia < 21) || (mes ==3 && dia>21)){
            printf("%d/%d é outono", dia, mes);
        }
        else{
            if(mes==7 || mes==8 || (mes==6 && dia > 21) || (mes ==9 && dia<23)){
                printf("%d/%d é inverno", dia, mes);
            }
            else{
                printf("%d/%d é primavera", dia, mes);
            }
        }
    }  

    return;
} 

int main(){
    int dia, mes;
    
    printf("Digite o dia e o mês: ");
    scanf("%d %d", &dia, &mes);
    
    if((dia>=1 && dia<=31) && (mes>=1 && mes<=12)){
       switch(mes){
           case 1: case 3: case 5: case 7: case 8: case 10: case 12:
           estacao(dia, mes);
           break;
           
           default:
           printf("O mes digitado não possui dia 31\n");
           break;
           
           case 4: case 6: case 9: case 11:
           estacao(dia, mes);
           break;
           
        }
    }
    else{
        printf("O dia ou o mês digitado são inválidos");
    }
    
    return 0;
}
