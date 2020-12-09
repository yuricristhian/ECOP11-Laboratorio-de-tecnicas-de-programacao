#include <stdio.h>

void main()
{
    int matriz[5][5], i, j=0, aux, soma1=0, soma2=0, diferenca;
    // recebe a variavel na matriz
     for(i=0; i<5; i++)
    {
        while ( j < 5)
        {
            printf("Digite valores entre 11 e 35 para linha %d coluna %d: ", i+1, j+1);
            scanf("%d", &aux);
            // o valoer sera guardado apenas entre 11 e 35
            if ( aux >= 11 && aux <= 35)
            {
                matriz[i][j] = aux;
                j++;
            }
            //senão os valores são invalidos
            else
            {
                printf("Valores invalidos\n");
                system("pause");
            }
            system("cls");
        }
        j=0;
    }
    //somaremos a diagonal principal e guardamos em soma1
     for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            if ( i == j )
                soma1 += matriz[i][j];
        }
    }
    //somaremos a segunda diagonal e guardar em soma2
     for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            if ( i + j == 4 )
                soma2 += matriz[i][j];
        }
    }
    //Faremos a diferença entre a soma 1 e soma 2
    diferenca = soma1 - soma2;
    system("cls");
    printf("A diferenca da soma da diagonal principal em relacao a soma da secundaria e: %d\n\n", diferenca);
    system("pause");

}

