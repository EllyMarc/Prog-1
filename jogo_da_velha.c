#include <stdio.h>
#include <stdlib.h>


#define linha 3
#define coluna 3


void tabuleiro (int posicao[3][3])
{
    int i, j;
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            printf(" %d ", posicao[i][j]);
            if (j < coluna - 1)
            {
                printf("|");
            }
        }
        if (i < linha - 1)
        {
            printf("\n-----------\n");  
        }
    }
}


void preenchePosicao(int matriz[linha][coluna], int jogador)
{
    int line, column;

    do
    {
        printf("Digite a linha da posicao escolhida (entre 0-2): ");
        scanf("%d", &line);
        printf("Digite a coluna da posicao escolhida (entre 0-2): ");
        scanf("%d", &column);
       
        if(line < 0 || line > 2 || column < 0 || column > 2)
        {
            printf("Posicao fora do tabuleiro! Use valores de 0 a 2.\n");
            continue;
        }

        if(matriz[line][column] != 0)
        {
            printf("Posicao ja ocupada! Escolha outra.\n");
        }
    } while(matriz[line][column] != 0);


    matriz[line][column] = jogador;
}


int verificaVelha(int tab[linha][coluna])
{
    int i;
    for (i = 0; i < linha; i++)
    {
      
    if ((tab[i][0] == tab[i][1] && tab[i][1] == tab[i][2] && tab[i][0] !=0) ||
    (tab[0][i] == tab[1][i] && tab[1][i] == tab[2][i] && tab[0][i] !=0))
         return 1;
    }

    if ((tab[0][0] == tab[1][1] && tab[1][1] == tab[2][2] && tab[0][0] != 0) ||
        (tab[0][2] == tab[1][1] && tab[1][1] == tab[2][0] && tab[0][2] != 0))
    {
        return 1;
    }
   
    return 0;
}

int main()
{
    int i, j, m[linha][coluna], velha;


    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            m[i][j] = 0;
        }
    }
        printf("\nO jogo começou!\n");
   
    for ( i = 0; i < 9; i++)
    {
        tabuleiro(m);


        if (i % 2 == 0)
        {
            printf("\neh a vez do jogador 1!\n");
            j = 1;
        }
        else
        {
            printf("\neh a vez do jogador -1!\n");
            j = -1;
           
        }

        preenchePosicao(m, j);

        if (i > 2)
        {
           velha = verificaVelha(m);
        }

        if (velha == 1)
        {
            printf("=====================");
            printf("\nvitória do jogador %d!\n", j);
            printf("=====================");
            break;
        } else if(i == 8)
        {
            printf("=====================");
            printf("\nDeu velha!\n", j);
            printf("=====================");
        }
    }

    return 0;
}
