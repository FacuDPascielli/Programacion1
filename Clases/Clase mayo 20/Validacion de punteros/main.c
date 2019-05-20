#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pNum;
    pNum = (int*)malloc(sizeof(int));
    if(pNum == NULL)
        {
            printf("No se obtuvo espacio en memoria");
            system("pause");
            exit(1);
        }

    printf("Ingrese un numero: ");

    scanf("%d", &*(pNum));

    printf("El numero ingresado es: %d", *(pNum));

    free(pNum);

    return 0;
}
