#include <stdio.h>
#include <stdlib.h>

#define D 5

int main(){

    //Inicializar la matriz con valores preestablecidos

    int tabla[3][4] = {{0,3,4,10},{3,1,-10,10},{10,100,3,1}};

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ", tabla[i][j]);
        }
        printf("\n");
    }


    return 0;
}