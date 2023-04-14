#include <stdio.h>

int main(){

int i=0;
int ac=0;
int numero=0;
int ac2=0;
float ac2f=0;
float promedio=0;


        for(i=0; i<3; i=i+1){

            printf("ingrese un numero:");
            scanf("%d", &numero);

            if(numero>ac){
                ac=numero;
            }

            ac2=numero +ac2;
        }
        printf("el numero mayor es %d \n", ac);
        
        ac2f=ac2;
        promedio=ac2f/3;
        printf("el promedio de los numeros ingresados es de %2.2f \n", promedio);

}