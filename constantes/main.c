#include <stdio.h>

int main(int argc, char *argv[])
{
    int radio; 
    float resultado;

#define PI 3.1416

    printf("introduce el radio del circulo: \n");
    scanf("%d", &radio);

    resultado = radio*radio*PI;

    printf("el valor del radio es: %.2f",resultado);
    return 0;
}