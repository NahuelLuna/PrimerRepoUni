#include <stdio.h>
#include <stdlib.h>

int main(){

    int tabla[3][4];

    printf("ingrese valores para la tabla/matriz de 3 x 4\n\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("elemento [%d, %d]: ", i,j);
            scanf("%d", &tabla[i][j]);
        }
        printf("\n");
    }

    printf("\n\n Elementos almacenados en al tabla\n\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("\npara la posicion [%d, %d] : %d \n",i,j, tabla[i][j]);
        }
        printf("\n");
    }

    return 0;
}