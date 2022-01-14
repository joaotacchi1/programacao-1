#include <stdio.h>

int main(){
    int i, j, e;
    
    for(i=0; i<10; i++){
        for(j=0; j<10-i; j++){
            printf(" "); 
        }
        for(e=0; e<=i ; e++){
            printf("*");
        }    
        printf("\n");
    }
    return 0;
}

