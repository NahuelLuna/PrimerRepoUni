#include <stdio.h>

int main(){
int i=0;
int acumulador=0;
int n=0;
        for(i=0; i<6; i=i+1){

            printf("ingrese un numero a acumular: ");
            scanf("%d", &n);

            acumulador = acumulador + n;
        }
        printf("la cantidad acumulada es de %d", acumulador);

}