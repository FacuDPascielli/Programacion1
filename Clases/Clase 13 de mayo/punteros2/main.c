#include <stdio.h>
#include <stdlib.h>

int main()
{   /*
    int x = 10;
    int* p = &x;
    int* q = p;
    Con esto guardo la direccion de memoria de x en q, luego de haberla guardado en p.
    */
    int x = 10;

    int* p = &x;

    int** r = &p;

    printf("%d\n", **r);//Guarda puntero en puntero (Puntero a puntero).

    return 0;
}
