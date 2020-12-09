#include <stdio.h>

void main()
{
    int dia;
    printf("Digite o dia da semana: ");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("O hoje e domingo\n");
        break;
    case 2:
        printf("O hoje e segunda\n");
         break;
    case 3:
        printf("O hoje e terça\n");
         break;
    case 4:
        printf("O hoje e quarta\n");
         break;
    case 5:
        printf("O hoje e quinta\n");
         break;
    case 6:
        printf("O hoje e sexta\n");
         break;
    case 7:
        printf("O hoje e sabado\n");
         break;
    default:
        printf("deve ser um dia de 1 a 7 mano !!!\n");
        break;
    }
    system ("pause");
}
