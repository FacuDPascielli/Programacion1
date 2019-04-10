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
    struct datosPersonales agenda;

                printf("Ingrese el nombre:\n");
                gets(agenda.nombre);
                fflush(stdin);

                printf("Ingrese el apellido:\n");
                gets(agenda.apellido);
                fflush(stdin);

                printf("Ingrese la localidad:\n");
                gets(agenda.localidad);
                fflush(stdin);

                printf("Ingrese el nombre de la calle:\n");
                gets(agenda.calle);
                fflush(stdin);

                printf("Ingrese codigo postal:\n");
                scanf("%d", &agenda.codigoPostal);

                printf("Ingrese el numero de la calle:\n");
                scanf("%d", &agenda.numero);



                printf("El nombre es %s", agenda.nombre);
                printf("\nEl apellido es %s", agenda.apellido);
                printf("\nVive en la localidad %s de codigo postal %d", agenda.localidad, agenda.codigoPostal);
                printf("\nReside en la calle %s %d", agenda.calle, agenda.numero);
        return 0;


}
