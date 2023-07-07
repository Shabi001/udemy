#include <stdio.h>

int main(int argc, char *argv[])
{

    float euros;
    printf("\n\n\n   Conversor de Euros a pesetas   \n\n\n");
    printf("Ingrese la cantidad de euros: \n");
    scanf("%f", &euros);

    printf("%.2f euros equivalen a %.2f pesetas", euros, euros * 166.386);
    return 0;
}