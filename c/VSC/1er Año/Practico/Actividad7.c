#include <stdio.h>

int main() {
int numero=0;
int i=0;
int cantidad=0;

    for(i=0; i<=9; i=i+1){
        printf("Ingrese un valor:");
        scanf("%d", &numero);

        if(numero==10){
            cantidad++;
        }
    }
        printf("la cantidad de numeros 10 ingresada es de: %d", cantidad);
    return 0;
}