#include <stdio.h>
#include <stdlib.h>

void mostrarCadena(char* punteroCadena);
void mostrarDireccionYCadena(char* punteroCadena);


int main()
{
    char palabra[] = "Hola";
    char *p;
    p = palabra;

    mostrarDireccionYCadena(p);

    return 0;
}

void mostrarDireccionYCadena(char* punteroCadena)
{   int i = 0;
    while(*(punteroCadena+i) != '\0')
        {
            printf("%c\n", *(punteroCadena+i));
            printf("%p\n",punteroCadena);
            i++;
        }
}

void mostrarCadena(char* punteroCadena)
{
    while(*punteroCadena != '\0')
        {
            printf("%c",*punteroCadena);
            punteroCadena++;
        }
}
