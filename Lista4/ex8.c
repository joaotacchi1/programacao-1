#include <stdio.h>

void sequencia_fibonacci(int n1){
    int fib=0, a=0, b=1, i;
    
    for(i=0; i<n1; i++){
        printf("%d, ", fib);
        fib = a + b;
        a = b;
        b = fib;
        
    }
    return;
}

int main(){
    int seq_fib, termo;
    
    printf("Digite ate qual termo gostaria de ir na sequencia de Fibonacci ");
    scanf("%d", &termo);
    
    sequencia_fibonacci(termo);
    
    return 0;
}
  