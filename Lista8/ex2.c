#include <stdio.h>

int main(){
    int x, y;
    int *ptrx, *ptry;
    
    printf("Digite os valores de x e y ");
    scanf("%d %d", &x, &y);
    
    ptrx = &x;
    ptry = &y;
    
    printf("Endereço de x=%d, %p\nEndereço de y=%d, %p\n", x, ptrx, y, ptry );
    
    if(ptrx > ptry){
        printf("O maior endereço é %p, que tem valor %d", ptrx, x); 
    }
    else{
        printf("O maior endereço é %p, que tem valor %d", ptry, y);    
    }
    
    return 0;
}