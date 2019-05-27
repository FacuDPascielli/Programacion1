#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f;
    int id;
    char nombre[20];
    char apellido[20];
    float sueldo;
    int cant;

    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    f = fopen("./archivo.txt", "r");


    fclose(f);
    return 0;
}
