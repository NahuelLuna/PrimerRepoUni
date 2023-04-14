#include <stdio.h>  
#define D 10

int main(){
int V[D];
int i = 0;
int ac = 0;
float acf = 0;
float promedio = 0;
int mayorprom = 0;

    for(i=0; i<D; i=i+1){
        do{
            printf("Ingresar el valor para la casilla %d",i);
            scanf("%d", &V[i]);

        }while(V[i]<0);

        ac = V[i]+ac;

        acf = ac;

        promedio = acf/D;

    }
   
    printf("el promedio de todos los valores es de %f \n",promedio);

    printf("Los numeros mayores al promedio son \n");
     for(i=0; i<D; i=i+1){
        if(promedio<V[i])
    printf("%d,",V[i]);
    }

}