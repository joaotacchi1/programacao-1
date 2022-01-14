#include <stdio.h>

int main(){

    int soma, prod, fibonacci_final, i, fibonacci;
    soma = 0;
    prod = 1;

    printf("Digite ate qual termo voce quer que seja expressado pela serie de Fibonacci: ");
    scanf("%d", &fibonacci);

    for(i = 0; i < fibonacci; i++){
        fibonacci_final = soma + prod;
        soma = prod;
        prod = fibonacci_final;

        printf("%d\n", fibonacci_final);
    }

    return 0;
}
