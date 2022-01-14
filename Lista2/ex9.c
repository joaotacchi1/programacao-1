#include <stdio.h>
#include <math.h>

int main()
{
   float p1, p2;

   printf("Informe os pontos no plano cartesiano: (x,y)");
   scanf("%f %f", &p1, &p2);

   if(p1>0 && p2>0){
    printf("Os pontos se encontram no primeiro quadrante");
   }
   else{
        if(p1<0 && p2>0){
            printf("Os pontos se encontram no segundo quadrante");
        }
        else{
            if(p1<0 && p2<0){
                printf("Os pontos se encontram no terceiro quadrante");
            }
            else{
                printf("Os pontos se encontram no quarto quadrante");
            }
        }
   }


   return 0;
}
