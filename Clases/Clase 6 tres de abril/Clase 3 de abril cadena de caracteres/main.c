#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cadena[50];
    fflush(stdin);
    //scanf("%s", cadena); (No hay que usarlo cuando vayamos a usar un espacio)
    //gets(cadena); (No hay que usarlo porque no se recomienda el uso)
    fgets();
    printf("%s", cadena);

    return 0;
}
