#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define VAZIO ' '
#define PAREDE '|'
#define OBSTACULO 'O'
#define TIRO '|'
#define LIN 20
#define COL 20
char JOGADOR = 241;

void inicializa_mapa(char[LIN][COL]);
void desenha_mapa(char[LIN][COL], int);
void atualiza_mapa (char[LIN][COL]);
char game_over(int);

void main ()
{
    char resposta;
    do
    {
    char dig, mapa[20][20];
    int col_jogador = 10;
    int pontos = 0, repeti = 0, balas = 5;

    inicializa_mapa(mapa);
    atualiza_mapa (mapa);
    desenha_mapa(mapa, col_jogador);
    while(mapa[18][col_jogador] != OBSTACULO)
    {
        atualiza_mapa (mapa);
        dig = getch();
        if((dig == 'a' || dig == 'A') && (col_jogador > 4))
        {
            system("cls");
            col_jogador--;
            if(mapa[19][col_jogador] == OBSTACULO)
                break;
            mapa[19][col_jogador+1] = VAZIO;
            desenha_mapa(mapa, col_jogador);
            printf("\n         %d pontos  %d balas\n", pontos, balas);
        }
        if((dig == 'd' || dig == 'D') && (col_jogador < 13))
        {
            system("cls");
            col_jogador++;
            if(mapa[19][col_jogador] == OBSTACULO)
                break;
            mapa[19][col_jogador-1] = VAZIO;
            desenha_mapa(mapa, col_jogador);
            printf("\n         %d pontos  %d balas\n", pontos, balas);

        }
        if((dig == 'w' || dig == 'W'))
        {
            system("cls");
            mapa[19][col_jogador-1] = VAZIO;
            desenha_mapa(mapa, col_jogador);
            printf("\n         %d pontos  %d balas\n", pontos, balas);

        }
        if((dig == 'k' || dig == 'K'))
        {
            if(balas > 0)
            {
                int i;
                for(i=0; i<19; i++)
                    mapa[i][col_jogador] = TIRO;
                system("cls");
                desenha_mapa(mapa, col_jogador);
                for(i=0; i<19; i++)
                    mapa[i][col_jogador] = VAZIO;
                system("cls");
                balas--;
                desenha_mapa(mapa, col_jogador);
                printf("\n         %d pontos  %d balas\n", pontos, balas);
            }
        }

        if((dig != 'a' || dig != 'A')&&(dig != 'd' || dig != 'D')&&(dig == 'w' || dig == 'W')&&(dig == 'k' || dig == 'K'))
        {
            desenha_mapa(mapa, col_jogador);
        }
        repeti++;
        if (repeti %10 == 0)
            pontos++;
        if (repeti %100 == 0)
            balas++;
    }
    resposta = game_over(pontos);
    }while((resposta != 's') || (resposta != 'S'));
}

void inicializa_mapa(char mat[LIN][COL])
{
    int i, j;

    for(i=0; i<LIN; i++)
        for(j=0; j<COL; j++)
        {
            if((j==3) || (j==14))
                mat[i][j] = PAREDE;
            else
                mat[i][j] = VAZIO;
        }
}

void desenha_mapa(char mat[LIN][COL], int col_jog)
{
    int i, j;

    mat[19][col_jog] = JOGADOR;
    for(i=0; i<LIN; i++)
    {
        for(j=0; j<COL; j++)
            printf("%c ", mat[i][j]);
        printf("\n");
    }
}

void atualiza_mapa (char mat[LIN][COL])
{
    int i, j, pos_helicoptero;

    if((rand() % 100) < 30)
    {
        pos_helicoptero = 4 + (rand() % 10);
        mat[0][pos_helicoptero] = OBSTACULO;
    }

    for (i=19; i>=1; i--)
    {
        for (j=0; j<COL; j++)
            mat[i][j] = mat[i-1][j];
    }
    for (j=0; j<20; j++)
    {
        if (j == 3 || j==14)
            mat[0][j] = PAREDE;
        else
            mat[0][j] = VAZIO;
    }
}

char game_over(int points)
{
    char resp;
    system("cls");
    printf("\n                          GAME OVER\n\n");
    printf("                           %d PONTOS\n", points);
    printf("\n Tente outra vez!!! ");
    printf("\n - Raul Seixas - \n");
    printf("Deseja jogar novamente: [s]SIM [n]NAO\n");
    resp = getchar();
    system("cls");
    return resp;
}




