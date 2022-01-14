#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;

    printf("Defina os lados do triangulo: ");
    scanf("%f %f %f", &a,&b, &c);

    if(a == b && b == c && a ==c){
        printf("E um triangulo equilatero");
    }

    else if((a == b && b != c) || (a != b && b == c) || (a != b && a == c)){
        printf("E um triangulo isosceles");
    }

    else if(a !=b && b !=c){
        printf("E um triangulo escaleno");
    }

    return 0;
}
