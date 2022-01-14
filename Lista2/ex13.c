#include <stdio.h>

int main()
{
   float nota;

   printf("Digite sua nota: ");
   scanf("%f", &nota);

   if(nota>=9 && nota<=10){
    printf("Seu conceito foi A");
   }
   else{
        if(nota>=7 && nota<=8.9){
            printf("Seu conceito foi B");
        }
        else{
            if(nota>=5 && nota<=6.9){
                printf("Seu conceito foi C");
            }
            else{
                printf("Seu conceito foi D");
            }
        }
   }

   return 0;
}
