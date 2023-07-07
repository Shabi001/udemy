#include <stdio.h>

int main(int argc, char *argv[])
{

    int numero = 5;
    int numero2 = 2;
    printf("el numero que quiero imprimir es: %d y %d \n", numero, numero2);

    float numeros = 89.6;
    float numeros1 = 76.5;

    printf("el numero con decimales es: %.2f y %.2f \n", numeros, numeros1);

    double n1 = 52435235.3333333;
    double n2 = -123.1231231;

    printf("el numero double es: %.3lf y %.3lf \n", n1, n2);

    char caracter = 't';
    char caracter1 = 'q';
    
    printf ("el caracter que quiero imprimir es; %c y %c \n",caracter, caracter1);

    char car;
    printf("introduce el caracter: \n");
    scanf("%c",&car);
    printf ("el caracter ingresado es: %c\n",car);

    int n;
    printf("ingrese el valor de la variable: \n");
    scanf("%d",&n);

    printf ("el valor de la variable ingresada es: %d \n",n);

    float decimal;

    printf("ingrese el numero decimal: \n");
    scanf("%f",&decimal);
    printf("el valor del numero decimal es: %.2f",decimal);



    return 0;
}