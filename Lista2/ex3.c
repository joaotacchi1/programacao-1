#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2, delta;

    printf("Escolha os coeficientes da equacao(A, B, C): ");
    scanf("%f %f %f", &a, &b, &c);

    delta = (b*b) - (4*a*c);

    if(delta>0){
    printf("Possui 2 raizes\n");

    x1 = (-b + sqrt(delta)) / 2*a;
    x2 = (-b - sqrt(delta)) / 2*a;

    printf ("As raizes da equacao sao: %.2f e %.2f", x1, x2);
    }

    else if(delta == 0){
    printf("Possui apenas uma raiz\n");

    x1 = (-b + sqrt(delta)) / 2*a;

    printf("A raiz e: %.2f", x1);
    }

    else{
        printf("Nao existem raizes reais");
    }

    return 0;
}

