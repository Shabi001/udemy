#include <stdio.h>

int main(int argc, char *argv[])
{

    typedef enum
    {
        lunes,
        martes,
        jueves,
        viernes,
        sabado,
        domingo
    } semana;

    semana dia_semana1 = lunes;

    if (dia_semana1 == 0)
    {
        printf("El dia de hoy es lunes\n");
    }
    else
    {
        printf("Hoy no es lunes\n");
    }

    return 0;
}