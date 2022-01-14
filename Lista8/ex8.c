#include <stdio.h>

void func(int *px, int *py){
    printf("%p = %p\n",px, py);
    px = py;
    printf("%d = %d * %d\n",*py, *py, *px);
    *py = (*py) * (*px);
    printf("%d = %d + 2\n",*px, *px);
    *px = *px + 2;
}

int main(void){
    int x, y;
    
    scanf("%d", &x);
    scanf("%d", &y);
    
    func(&x,&y);
    printf("x=%d, y=%d",x, y);
    
    return 0;
}