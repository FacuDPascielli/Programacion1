#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pNum;
    int* pAux;

    pNum = (int*)malloc(sizeof(int) * 5);

    if(pNum == NULL)
        {
            printf("No se obtuvo memoria\n\n");
            system("pause");
            exit(1);
        }
        for(int i = 0; i < 5; i++)
            {
                printf("Ingrese un numero: ");
                scanf("%d", pNum + i);
            }
            printf("\n\n");
        for(int i = 0; i < 5; i++)
            {
                printf("Numero ingresado: %d", *(pNum + i));
                printf("\n\n");
            }
            printf("\n\n");

        pAux = (int*)realloc(pNum, sizeof(int)*10);

        if(pAux != NULL)
            {
                pNum = pAux;
            }else
            {
                printf("No hay espacio en memoria para reasignar");
                system("pause");
                exit(1);
            }

        for(int i = 5; i < 10; i++)
            {
                printf("Ingrese otro numero: ");
                scanf("%d", pNum + i);
            }
        for(int i = 5; i < 10; i++)
            {
                printf("Numero ingresado: %d", *(pNum + i));
                printf("\n\n");
            }

            printf("\n\n");

        printf("Numeros ingresados:\n");
        for(int i = 0; i < 10; i++)
            {
                printf("%d ", *(pNum + i));
            }

        printf("\n\n");


        pNum = (int*)realloc(pNum, sizeof(int)*5);

        for(int i = 0; i < 5; i++)
            {
                printf("%d ", *(pNum + i));
            }

    free(pNum);
    free(pAux);

    return 0;
}
