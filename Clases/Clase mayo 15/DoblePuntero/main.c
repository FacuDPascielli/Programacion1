#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 30;

    int *punteroInt;

    int **punteroPuntero;

    punteroInt = &a;

    punteroPuntero = &punteroInt;

    printf("A: %d\n", a);

    printf("Puntero: %d\n", *
           .punteroInt);
    printf("%p", punteroInt);

    printf("\nPuntero puntero: %d\n", **punteroPuntero);
    printf("%p", punteroPuntero);

    return 0;
}
