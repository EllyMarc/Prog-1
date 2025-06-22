#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alt, peso;
    char sexo;

    printf ("M= masculino |F= feminino\n\nDigite seu sexo:");
    scanf ("%c", &sexo);

    if (sexo == 'M' || sexo == 'm')
    {
        printf ("Digite sua altura:");
        scanf ("%f", &alt);
        peso = (72.7 * alt) - 58;
        printf ("Seu peso ideal eh %.2f", peso);
    }
    else if (sexo == 'F' || sexo == 'f')
    {
        printf ("Digite sua altura:");
        scanf ("%f", &alt);
        peso = (62.1 * alt) - 44.7;
        printf ("Seu peso ideal eh %.2f", peso);
    }
    else
    {
        printf ("Invalido");
    }


    return 0;

}
