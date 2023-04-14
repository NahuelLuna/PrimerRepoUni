#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Hola, ingresa un entero\n");
    scanf("%d",&a);
    printf("\nEl numero ingresado es %d\n",a);
    if(a<=10 && a>=0)
    {
        printf("El numero ingresado esta entre 0 y 10\n");
    }
    else
    {
        printf("El numero ingresado no esta entre 0 y 10\n");
    };

    //poner un mensaje si el numero ingresado entre 0 y 10

    /*hacer un programa donde se ingresen caracteres  getchar upchar getch put c putchar printf y se muestren en pantalla utilizado todas las funciones
    que conozcan/*

    return 0;
}
