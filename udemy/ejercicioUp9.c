#include <stdio.h>
#include <stdlib.h>
// Desarrolla un programa que solicite la carga de un número al usuario. A continuación, deberá pedir las notas de ese número de
// alumnos, y mostrar por pantalla el número de alumnos aprobados y suspensos

int main()
{
    int n, contadorAP = 0, contadorSP = 0;
    float nota;

    printf("Introduce el numero de alumnos\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Introduce la nota del alumno %d\n", i);
        scanf("%f", &nota);

        if (nota >= 6)
        {
            contadorAP++;
        }
        else
        {
            contadorSP++;
        }
    }

    printf("El numero de alumnos aprobados es: %d y el de alumnos suspensos es: %d\n", contadorAP, contadorSP);
}