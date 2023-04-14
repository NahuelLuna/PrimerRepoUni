#include <stdio.h>

int main(){
int i=0;
int contdiez=0;
int n=0;
    for(i=0; i<6; i++){
    printf("ingrese un numero: ");
    scanf("%d", &n);
    if(n==10)
    contdiez++;
    }
    printf("la cantidad de numeros diez repetidos es de %d", contdiez);
}