#include <stdio.h>
#include <stdlib.h>

void mostrarVector1(int vec[], int tam);//En el desarrollo utiliza nomenclatura vectorial.
void mostrarVector2(int vec[], int tam);//En el desarrollo utiliza nomenclatura puntero.
void mostrarVector3(int* vec, int tam);
void mostrarVector4(int* vec, int tam);

int main()
{
    int vec[] = {3, 5, 2, 4, 3};

    //printf("%d\n", *vec)//Va a mostrar el valor del primer indice, el 3.
    //printf("%d\n", *vec+1)//Serìa el valor del puntero mas uno, en este caso la direccion de memoria del indice en 0 es la misma que la de vec, entonces seria el primer valor mas 1.
    //printf("%d\n", *(vec+1));//El mas uno se le agrega a la direccion de memoria segun el tipo de dato, ya que se desplaza segun el sizeof.
    //Para mstrar todo el vector, debo hacer lo siguiente:
    for(int i = 0; i < 5; i++)
        {
            printf("%d\n", *(vec+i));
        }
    return 0;
}

void mostrarVector1(int vec[], int tam)
{
    for(int i = 0; i < tam; i++)
        {
            printf("%d", vec[i]);
        }
    printf("\n");
}

void mostrarVector2(int vec[], int tam)
{
    for(int i = 0; i < tam; i++)
        {
            printf("%d", *(vec+i);
        }
    printf("\n");

}

void mostrarVector3(int* vec, int tam)
{
    for(int i = 0; i < tam; i++)
        {
            printf("%d\n", vec[i]);//No esta bien visto que si recibo puntero lo trabaje como corchete.
        }
    printf("\n");

}

void mostrarVector4(int* vec, int tam)
{
        for(int i = 0; i < tam; i++)
        {
            printf("%d\n", *(vec+i);
        }
    printf("\n");

}
