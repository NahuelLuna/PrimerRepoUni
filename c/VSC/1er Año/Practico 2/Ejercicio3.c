#include <stdio.h>
#define D 10

int main(){
int V[D];
int i = 0;
int ac = 0;
float acf= 0;
float promedio = 0;
int contador = 0;
int contadorpar = 0;

    for(i=0; i<D; i= i+1){
    
            do{
                printf("ingrese los valores a cargar en la posicion %d: \n", i);
                scanf("%d", &V[i]);

                if(V[i]==10)
                    contador++;


                if((V[i]%2)==0)
                    contadorpar++;

            }
        while(V[i]<0 || V[i]>100);
    }

    for(i=0; i<D; i= i+1){
        ac = V[i]+ac;
    }
    acf = ac;
    promedio = acf/D;

    printf("promedio de todos los numeros del vector %f \n", promedio);

    printf("la cantidad de numeros 10 ingresados al vector es de %d \n", contador);

    printf("la cantidad de numeros pares en el vector es de %d", contadorpar);

}