#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
}eEmpleado;
int main()
{
    eEmpleado* pEmp = (eEmpleado*)malloc(sizeof(eEmpleado));

    if(pEmp == NULL)
        {
            exit(1);
        }

    printf("Ingrese legajo: ");
    scanf("%d", &pEmp->legajo);

    printf("Ingrese nombre: ");
    fflush(stdin);
    //gets(pEmp->nombre);
    scanf("%s", pEmp->nombre);

    printf("Ingrese sexo: ");
    fflush(stdin);
    scanf("%c", &pEmp->sexo);

    printf("Ingrese sueldo: ");
    scanf("%f", &pEmp->sueldo);

    printf("Legajo: %d  Nombre: %s  Sexo: %c  Sueldo: %2.f", pEmp->legajo, pEmp->nombre, pEmp->sexo, pEmp->sueldo);






    return 0;
}
