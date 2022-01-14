#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct ponto{
    int x;
    int y;
}Pontos;

typedef struct retangulo{
    Pontos ps;
    Pontos pi;
}Retangulo;

int main(){
    Retangulo ret;
    float area, comp_diagonal, perimetro, a, b;
    
    printf("Digite os pontos(x,y) da parte superior esquerda do retangulo:");
    scanf("%d%d", &ret.ps.x, &ret.ps.y);
    printf("Digite os pontos(x,y) da parte inferior direita do retangulo:");
    scanf("%d%d", &ret.pi.x, &ret.pi.y);
    
    if(ret.ps.x == ret.pi.x){
        printf("Não forma um retangulo");
        return -1;
    }
    
    else if(ret.ps.y == ret.pi.y){
        printf("Não forma um retangulo");
        return -1;
    }
    
    a = ret.pi.x - ret.ps.x;
    b = ret.pi.y - ret.ps.y;
    
    comp_diagonal = sqrt((pow(a, 2) + pow(b, 2)));
    
    perimetro = (2 * a) + (2 * b);
    if(perimetro < 0){
        perimetro = -1 * perimetro;
    }
    
    area = a * b;
    if(area < 0){
        area = -1 * area;
    }
    
    printf("O valor da area é: %.2f\n", area);
    printf("O valor do comprimento da diagonal é: %.2f\n", comp_diagonal);
    printf("O valor do perimetro é: %.2f", perimetro);
    
    
    return 0;
}