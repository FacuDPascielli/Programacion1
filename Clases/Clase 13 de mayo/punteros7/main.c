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
    eEmpleado unEmpleado = {1234, "Juan", 'm', 30000, {12,5 , 2019}};
    eEmpleado otroEmpleado = {2222, "Ana", 'f', 32000, {20,6 , 2019}};

    eEmpleado lista[] = (unEmpleado, otroEmpleado);

    for(int = 0; i < 2; i++)
        {
            printf("%s\n", (lista + i)->nombre);
        }
    return 0;
}
