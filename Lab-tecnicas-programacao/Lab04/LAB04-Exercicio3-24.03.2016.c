#include <stdio.h>

void main()
{
    int neymar=0, hulk=0, ricardo=0, branco=0, nulo=0, cod;
    char resp;
    for(;;)
    {
        printf("vote em um jogador para ser o centroavante da seleção !!!\n");
        printf("======================================================\n");
        printf("   Candidato                codigo\n");
        printf("Neymar                      10 \n");
        printf("Hulk                        20 \n");
        printf("Ricardo oliveira            30 \n");
        printf("Branco                      0  \n");
        printf("Nulo                        Qualquer outro codigo \n");
        printf("=======================================================\n");
        scanf("%d", &cod);

        switch (cod)
        {
            case 10:
                neymar += 1;
                break;
            case 20:
                hulk += 1;
                break;
            case 30:
                ricardo += 1;
                break;
            case 0:
                branco += 1;
                break;
            default:
                nulo += 1;
                break;
            case 12345:
                system("cls");
                printf("candidato         votos\n");
                printf("Neymar            %d\n", neymar);
                printf("Hulk              %d\n", hulk);
                printf("Ricardo oliveira  %d\n", ricardo);
                printf("Branco            %d\n", branco);
                printf("Nulo              %d\n", nulo);
                system("pause");

        }
        system("cls");
    }
}
