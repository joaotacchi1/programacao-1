#include <stdio.h>

int main(){

   int x;

   for(x=2; x<=13; x+=2){
    printf("Primeiro algoritmo: %d\n", x);
   }

   for(x=5; x<=22; x+=7){
    printf("Segundo algoritmo: %d\n", x);
   }

   for(x=3; x<=15; x+=3){
    printf("Terceiro algoritmo: %d\n", x);
   }

   for(x=1; x<=5; x+=7){
    printf("Quarto algoritmo: %d\n", x);
   }

   for(x=12; x>=15; x-=3){
    printf("Quinto algoritmo: %d\n", x); /*Quinto algoritmo não aparece nada*/
   }


    return 0;
}
