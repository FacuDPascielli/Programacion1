#include <stdio.h>
#include <stdlib.h>

int main()
{
    char mensaje[] = "Hola mundo";

    mostrarCadena(mensaje);

    return 0;
}

void mostrarCadena(char* cadena)//Esto es lo que hace el print f al momento de pasarle un %s
{
    while(cadena != '\0')
        {
            printf("%c", *cadena);
            cadena++;
        }

}
