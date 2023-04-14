#include <stdio.h>

int main() {
int acumulador=0;
int i=0;
int valor=0;
    for(i=0; i<5; i=i+1){
        printf("Ingrese el valor a acumular");
        scanf("%d", &valor);

        acumulador=acumulador+valor;

    }

        printf("El valor total acumulado es: %d", acumulador);

    return 0;
}