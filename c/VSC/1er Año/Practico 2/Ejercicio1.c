#include <stdio.h> 
#define D 10

int main(){
int ac = 0;
float C = 0;
float F = 0;    
    int V[D];
    int i;
        //carga del array o vector
        for(i=0; i < D; i=i+1){
            printf("Ingrese un valor para la posicion %d \n", i);
            scanf("%d", &V[i]);

    }
    //Ver todos los valores introducidos en el vector con una estruc. repetitiva y printf
    for(i=0; i < D; i=i+1){
        printf("Vector - Posicion:%d - Valor: %d \n ", i, V[i]);
    }

    //Suma de los valores del vector con estructura repetitiva for y acumulador
    for(i=0; i < D; i=i+1){
        ac= V[i] + ac;
    }
    printf("El valor de la suma de todos los valores del vector es de %d \n", ac);

        C = ac;
        F = (C/D);
    
    printf("El promedio de todo el vector es de %f \n", F);
}