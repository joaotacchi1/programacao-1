#include <stdio.h>

int main()
{
   int cargo;

   printf("Digite um numero de cargo: 101, 102, 103, 104, 105, 106\n");
   scanf("%d", &cargo);

   switch(cargo){
    case 101:
        printf("O cargo digitado e de vendedor");
        break;

    case 102:
        printf("O cargo digitado e de atendente");
        break;

    case 103:
        printf("O cargo digitado e de auxiliar tecnico");
        break;

    case 104:
        printf("O cargo digitado e de assistente");
        break;

    case 105:
        printf("O cargo digitado e de coordenador de grupo");
        break;

    case 106:
        printf("O cargo digitado e de gerente");
        break;

    default:
        printf("Codigo invalido");
   }

   return 0;
}
