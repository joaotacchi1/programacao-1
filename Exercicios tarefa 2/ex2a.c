#include <stdio.h>
#include <math.h>

int main()
{
    int b=4, c=2, d=3;
    float a=1.5, e=1.2, f=4.3, resultado;


    resultado = (a*(c + d)) / (b*(e + f));

    printf("O resultado e: %.3f", resultado);

    return 0;
}

