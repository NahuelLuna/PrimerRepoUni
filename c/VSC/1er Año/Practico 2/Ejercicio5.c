#include <stdio.h>

#define D 10

int main(){
int V[D];
int i = 0;
int alumnosaprobados = 0;
int mayornota = 0;
int menornota = 10;
int ac = 0;
float acf = 0;
float promedio = 0;

    for(i=0; i<D; i=i+1){
        do{
            printf("Ingresar un numero:");
            scanf("%d", &V[i]);
        }while(V[i]<0 || V[i]>10);

        if(V[i]>=4)
            alumnosaprobados++;

        if(V[i]>mayornota)
            mayornota=V[i];

        if(V[i]<menornota)
            menornota=V[i];

        if(V[i]>=4)
            ac = V[i]+ac;
    }

    acf = ac;

    promedio = acf/D;

    printf("La cantidad de alumnos aprobados es de %d \n", alumnosaprobados);
    
    printf("La nota mas alta del parcial es %d \n", mayornota);

    printf("La nota mas baja del parcial es %d \n", menornota);

    printf("El promedio de los alumnos aprobados es de %f \n",promedio);

}
