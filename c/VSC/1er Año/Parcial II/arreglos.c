#include <stdio.h>
#include <stdlib.h>

//Programa que calcula el promedio de 5 calificaciones

int main(){

    float calificaciones[5];
    float promedio = 0;
    int i =0;

    printf("Programa que calcula el promedio de 5 calificaciones\n\n");

    for(i=0;i<5;i++){
        
        printf("ingrese la calificacion numero %d\n\n",i+1);
        scanf("%f", &calificaciones[i]);
        promedio += calificaciones[i];
        printf("\n");
    }

    printf("El promedio de las calificaciones es: %.2f\n\n",promedio/5);

    return 0;
}