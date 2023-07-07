#include <stdio.h>

int main(int argc, char *argv[])
{

    char car1, car2, car3, car4;

    printf("ingrese 4 caracteres: ");
    scanf("%c %c %c %c", &car1, &car2, &car3, &car4);
    printf("/ %c / %c / %c / %c /", car1, car2, car3, car4);

    return 0;
}