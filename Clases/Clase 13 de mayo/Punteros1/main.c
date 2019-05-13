#include <stdio.h>
#include <stdlib.h>

void leerPunteros(int* p);

int main()
{
    int x = 10;

    printf("Antes de llamar a leer punteros x vale: %d\n", x);

    leerPunteros(&x);
    printf("\nLuego de llamar a leer punteros x vale %d", x);

    /*int* p;
    p = &x;
    printf("%d \n", *p); (Lee la direccion de memoria de p y muestra el valor).*/








    return 0;
}


void leerPunteros(int* p)
{
    printf("Direccion guardada en p: %x", p);
    *p = 38;
}
