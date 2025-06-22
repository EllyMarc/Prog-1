#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int resposta, produto, contador = 0, i = 0;

    while (contador < 15)
    {
    srand(time(NULL));
    int fator1 = rand() % 10;
    int fator2 = rand() % 10;

        contador++;

        printf ("\n_____ GERADOR DE MULTIPLICACAO _____\n\n");
        printf("              %d x %d", fator1, fator2);
        printf ("\n\nAtividade %d de 15.\n", contador);
        printf("Digite o resultado da multiplicacao: ");
        scanf ("%d", &resposta);

        produto = fator1 * fator2;

        while (resposta != produto)
        {
            i++;
            printf ("\nResposta incorreta!\nTentativa %d de 5", i);
            printf ("\nTente novamente:");

            scanf ("%d", &resposta);

            if (i == 5)
            {
               printf ("Incorreto, cabo a chance");
               printf ("\nResposta correta era: %d", produto);
               getchar ();
               getchar ();
               break;

            }
            else if (resposta == produto)
            {
                i = 0;
            }

        }

        if (resposta == produto)
            {
        printf ("\nResposta correta! Parabens!\n");
        printf("\nPressione Enter para limpar a tela.");
        getchar();
        getchar();
        system("cls");
            }
            else break;

    }

    return 0;
}
