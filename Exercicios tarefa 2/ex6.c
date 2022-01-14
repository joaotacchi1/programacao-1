#include <stdio.h>
#include <math.h>

int main()
{
    float volume, r, h, p=3.14159;

    printf("De os valores do raio e da altura da lata: ");
    scanf("%f %f", &r, &h);

    volume = p * (pow(r,2)) * h;

    printf("O volume da lata e: %.3f", volume);

    return 0;
}
