#include <stdio.h> 
#define D 10
int main(){

int V[D];
int i = 0;
int mayor = 0;

    for(i=0; i<D; i=i+1){

        do{
            printf("Ingrese el valor para la posicion %d:",i);
            scanf("%d", &V[i]);

            if(mayor<V[i])
                mayor=V[i];
    }while(V[i]<0);

        
    }
    printf("El mayor numero en el vector es %d", mayor);


}