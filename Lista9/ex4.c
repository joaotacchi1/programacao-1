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
    Pontos pt;
    
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
    
    printf("Agora escolha um ponto(x,y) ");
    scanf("%d%d", &pt.x, &pt.y);
    
    if(ret.ps.x<=pt.x && pt.x<=ret.pi.x && ret.pi.y<=pt.y && pt.y<=ret.ps.y){
        printf("O ponto esta dentro do retangulo");
    }
    else{
        printf("O ponto não esta dentro do retangulo");
    }
    
    return 0;
}