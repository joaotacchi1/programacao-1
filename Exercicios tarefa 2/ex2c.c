#include <stdio.h>
#include <math.h>

int main()
{
    int b=4, c=2, d=3;
    float a=1.5, e=1.2, f=4.3, resultado;


    resultado = (a+((pow(c+d, 2))/(b*b)*d)) * 1/c ;

    printf("O resultado e: %.3f", resultado);

    return 0;
}

