#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main()
{
    int vec[5];
    int aux;
    int i;
    int j;

    for(i = 0; i < CANT;i++)
        {
            printf("Ingrese un numero\n");
            scanf("%d", &vec[i]);
        }

    for(i = 0;i < CANT;i++)
        {
            for(j = i + 1; j < CANT;j++)
                {
                    if(vec[i] > vec[j])
                        {
                            aux = vec[i];
                            vec[i] = vec[j];
                            vec[j] = aux;
                        }
                }
        }

        for(i = 0; i < CANT;i++)
            {
                printf("%d\n", vec[i]);
            }

    return 0;
}
