#include <stdio.h>
#include <stdlib.h>

int obtenerMax(int x, int y, int z);

int main()
{
    int num1;
    int num2;
    int num3;
    int rta;

    printf("Ingrese un numero\n\n");
    scanf("%d", &num1);
    printf("Ingrese otro numero\n\n");
    scanf("%d", &num2);
    printf("Ingrese un ultimo numero\n\n");
    scanf("%d", &num3);

    rta = obtenerMax(num1, num2, num3);
    printf("El numero maximo es %d", rta);

    return 0;
}
    int obtenerMax(int x, int y, int z){
    int rta;
    int max;


        if(x>=y && x>=z){
                max=x;
        }else{
            if(y>z){
                max = y;
            }else{
                max = z;
            }
        }

        rta = max;

        return rta;
}
