#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[10];
    int i;
    for (i=0; i<10; i++)
    {
        printf("\n Ingrese la nota #%d   ",i+1);
        scanf("%f",&notas[i]);
    }

    for (i=0; i<10; i++)
    {
        printf("\n Nota ingresada #%d es: %5.2f  ",i+1,notas[i]);
    }
    return 0;
}
