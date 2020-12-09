#include <stdio.h>

void main()
{
    float matriz[4][3], soma;
    int i, j;

    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Digite o valor da linha %d coluna %d: ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
            system("cls");
        }
    }
    soma = 0;

    for (i=0; i<4; i++)
    {
        for (j=0; j<3; j++)
        {
            soma += matriz[i][j];

        }
    }
    printf("A soma de todos valores da matriz e: %.3f", soma);
}
