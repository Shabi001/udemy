#include <stdio.h>
#include <stdlib.h>
//Escribir un programa que se utilice para calcular el precio final de venta de coches de segunda mano de un concesionario.
//Para ello, el programa debe pedir al usuario que introduzca el precio base del vehiculo, el nomero de kilometros y su consumo.
//    -Si los kilometros son inferiores a 20000 y su consumo igual o inferior a 5, incrementar el precio base un 20%.
//    -Si los kilometros son superiores a 20000 y su consumo igual o inferior a 5, incrementar el precio base un 10%.
//    -Si el consumo es superior a 5, incrementar el precio base un 5%.


int main()
{
    int precioB,kilometros;
    float consumo,precioF;

    printf("Introduce el precio base del vehiculo\n");
    scanf("%d",&precioB);
    printf("Introduce los kilometros\n");
    scanf("%d",&kilometros);
    printf("Introduce el consumo\n");
    scanf("%f",&consumo);

    if (kilometros<20000 && consumo<=5){   // evalusa si ambas expresiones son verdaderas
        precioF = precioB * 1.2;
    }
    else if(kilometros>20000 && consumo<=5){
        precioF = precioB * 1.1;
    }
    else if(consumo>5){
        precioF = precioB *1.05;
    }

    printf("El precio final del vehiculo es: %.2f",precioF);
}
