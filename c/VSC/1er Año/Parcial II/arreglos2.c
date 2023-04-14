#include <stdio.h>
#include <stdlib.h>
#define D 10
//Inicializar un arreglo de 10 elementos, y con un ciclo for verificar
//cual de los elementos es el mayor.

int main(){

    int arreglo[D];
    int mayor = 0;
    int i=0;

        for(i=0;i<D;i++){
            printf("ingrese un numero:");
            scanf("%d", &arreglo[i]);

            if(arreglo[i]>mayor){
                mayor=arreglo[i];
            }

        }
        printf("el mayor numero ingresado es: %d",mayor);
}

/*Tambien se puede inicializar el vector con valores predefinidos
con: int arreglo[10] = {10,1,2,3,-100,1000,-200,7,1,0};*/