#include <stdio.h>

#define D 10

int main(){

int VecA[D];
int VecB[D];
int VecC[D];
int i= 0;

    for(i=0; i<D; i=i+1){
        do{
            printf("ingrese el valor para la posicion %d del vector A:", i);
            scanf("%d", &VecA[i]);

        }while(VecA[i]<0);
    }


    for(i=0; i<D; i=i+1){
        do{
            printf("ingrese el valor para la posicion %d del vector B", i);
            scanf("%d", &VecB[i]);

        }while(VecB[i]<0);
    }

    for(i=0; i<D; i=i+1){
        VecC[i] = VecA[i] + VecB[i];
    }

    printf("El vector resultante es: \n");
    for(i=0; i<D; i=i+1){
    printf("posicion[%d],numero:%d \n", i,VecC[i]);
    }
}