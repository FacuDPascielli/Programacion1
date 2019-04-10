#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct datosPersonales
{
    char nombre[20];
    char apellido[20];
    char localidad[20];
    int codigoPostal;
    char calle [20];
    int numero;

};
int main()
{
    struct datosPersonales vecAgenda[3];

        for(int i=0;i<3;i++)
            {
                printf("Ingrese el nombre:\n");
                gets(vecAgenda[i].nombre);
                printf("Ingrese el apellido:\n");
                gets(vecAgenda[i].apellido);
                printf("Ingrese la localidad:\n");
                gets(vecAgenda[i].localidad);
                printf("Ingrese la calle:\n");
                gets(vecAgenda[i].calle);
                printf("Ingrese codigo postal:\n");
                scanf("%d", &vecAgenda[i].codigoPostal);
                printf("Ingrese el numero de la calle:\n");
                scanf("%d", &vecAgenda[i].numero);
                fflush(stdin);

            }

        for(int i=0;i<3;i++)
            {
                printf("\nEl nombre es %s", vecAgenda[i].nombre);
                printf("\nEl apellido es %s", vecAgenda[i].apellido);
                printf("\nVive en la localidad %s de codigo postal %d", vecAgenda[i].localidad, vecAgenda[i].codigoPostal);
                printf("\nReside en la calle %s %d", vecAgenda[i].calle, vecAgenda[i].numero);
            }

        return 0;
