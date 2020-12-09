#include <stdio.h>

void main ()
{
    int i, j, vet[12];

    for (i=0; i<12; i++)
    {
        system("cls");
        printf("Digite o codigo 12345 para mostrar o grafico.\n\n");
        printf("\nDigite as quantidades de dias com chuva no mes %d: ", i+1);
        scanf("%d", &vet[i]);
        if (vet[i] == 12345)
        {
            for (i=i; i<12; i++)
                vet[i] = 0;
        }
    }

    for (i=0; i<12; i++)
    {
        printf("\n%d -> ", i+1);
        for(j=0; j<vet[i]; j++)
            printf("*");
    }
printf("\n\n");
system("pause");
}
