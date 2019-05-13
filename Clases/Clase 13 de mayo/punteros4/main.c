#include <stdio.h>
#include <stdlib.h>

void getChar(char* message, char* caracter);


int main()
{

    char sexo

    getChar("Ingrese sexo: ", &sexo);

    printf("El sexo es %c\n", sexo);

    return 0;
}

void getChar(char* message, char* caracter)
{
    printf("%s", message);
    fflush(stdin);
    scanf("%c", caracter);


}
{

}
