#include <stdio.h>

int main(){

int i=0;    
int acumuladorpar=0;
        for(i=0 ; i<=200 ; i++){
            if((i%2)==0);
            acumuladorpar= i + acumuladorpar;
        }
            printf("la suma de los numeros pares comprendidos entre 0 y 200 es de :%d", acumuladorpar);
}