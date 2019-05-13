#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct
{
    int legajo;
    char nombre[20];
    int sexo;
    float sueldo;
    eFecha fecha;

}eEmpleado;

int main()
{
    eEmpleado unEmpleado = {1234, "Juan", 'm', 30000, {1, 24, 2019}};

    eEmpleado* punteroEmpleado;

    punteroEmpleado = &unEmpleado;

    //printf("Legajo: %d\n", unEmpleado.legajo);
    printf("Anio: %d\n", punteroEmpleado->fecha.anio);
    printf("Nombre: %s\n", (*punteroEmpleado).nombre);

    return 0;
}
