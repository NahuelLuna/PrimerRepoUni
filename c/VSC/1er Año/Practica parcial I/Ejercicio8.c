/*Construye un diagrama y el programa correspondiente en C que, al recibir como datos
los pagos efectuados en el último mes, permite obtener la suma de los mismos. El
programa terminará cuando se ingrese un pago=0. Imprimir por pantalla el resultado de la
suma*/

#include <stdio.h>

int main(){

int i=0;
int n=0;
int suma=0;
int p=0;

        do{
            printf("ingrese el monto del pago efectuado, si desea terminar la operacion ingrese 0: ");
            scanf("%d", &n);

            suma= suma + n;

            if(n==0)
            p=1;
        }while(p==0);

        printf("la suma de los pagos es de %d", suma);
}