#include <stdio.h>

void calcula_idade_dias(int anos, int meses, int dias){
    int diaTotal;
    diaTotal = (anos*365) + (meses*12) + (dias*30);
    printf("Sua idade em dias é: %d", diaTotal);
    return;
}

int main(){
    int diaTotal, anos, meses, dias;
    
    printf("Digite sua idade em anos, meses e dias");
    scanf("%d %d %d", &anos, &meses, &dias);
    
    calcula_idade_dias(anos, meses, dias);
    
    return 0;
}