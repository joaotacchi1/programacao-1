#include <stdio.h>
#include <math.h>

int main()
{
    int idade;
    char L;
    float peso;

    printf("Digite a primeira letra do seu nome: ");
    scanf("%c", &L);
    printf("Digite sua idade e seu peso: ");
    scanf("%d %f", &idade, &peso);


    if(idade>=18 && idade<=67 && peso>50.0){
       printf("%c pode doar", L);
    }
    else{
        printf("%c nao pode doar", L);
    }

    return 0;
}
