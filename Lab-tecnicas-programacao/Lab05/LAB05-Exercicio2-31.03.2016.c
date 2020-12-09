#include <stdio.h>

void main()
{
    int a[6], b[6], i, j;

    for(i=0; i<6; i++)
    {
        printf("digite seis valores para o 1 vetor: ");
        scanf("%d", &a[i]);
    }
    for(i=0; i<6; i++)
    {
        printf("digite seis valores para o 2 vetor: ");
        scanf("%d", &b[i]);
    }
    for (i=0; i<6; i++)
    {
        for (j=0; j<6; j++)
        {
            if (a[i] == b[j])
                printf("\n%d\n", a[i]);
        }

    }

}

