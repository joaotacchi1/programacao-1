#include <stdio.h>

int main(){
    int lado1, lado2, hipotenusa;

    for(hipotenusa = 1; hipotenusa < 500; hipotenusa++){
        for(lado1 = 1; lado1 < 500; lado1++) {
            for(lado2 = 1; lado2 < 500; lado2++){
                int igualdade1 = (lado1 * lado1) + (lado2 * lado2);
                int igualdade2 = (hipotenusa * hipotenusa);
                
                if(igualdade1 == igualdade2){
                    printf("São números de pitágoras: %d - %d - %d\n", hipotenusa, lado1, lado2);
                } 
                else if(igualdade1 > igualdade2){
                    break;
                }
            }
        }
    }

    return 0;
}