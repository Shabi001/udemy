#include <stdio.h>

int main(int argc, char *argv[])
{

    float base, altura;

    printf("ingrese el valor de la base del triangulo: \n");
    scanf("%f", &base);
    printf("ingrese el valor de la altura del triangulo: \n");
    scanf("%f", &altura);

    float Area = base * altura;

    printf("el valor del area del triangulo entre su base:%.2f y su altura:%.2f da como resultado el area de: %.3f", base, altura, Area);
    return 0;
}