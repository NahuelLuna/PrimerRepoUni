#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    a = 35;
    char c = 'Z';
    float x;
    x = 3000.25;
    char nombre[30];


    //c=getch();
    //c=getche();

    printf("\nIngrese su nombre ");
    //scanf("%s", nombre);
    gets(nombre);
    printf("El nombre ingresado es\n");
    //putchar(c);
    puts(nombre);
    return 0;
}
