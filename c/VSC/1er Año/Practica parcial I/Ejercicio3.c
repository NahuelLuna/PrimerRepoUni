#include <stdio.h>

int main(){

int i=0;
int n=0;
int mayorn=0;

        for(i=0 ; i<6 ; i= i+1){
            printf("ingrese un numero:");
            scanf("%d", &n);

            if(n>mayorn)
                mayorn=n;
            

        }
        printf("El mayor numero ingresado es: %d",mayorn);

}