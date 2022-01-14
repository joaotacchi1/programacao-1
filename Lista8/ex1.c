#include <stdio.h>

int main(){
    int x=5, y=15;
    int *ptrx, *ptry;
    
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