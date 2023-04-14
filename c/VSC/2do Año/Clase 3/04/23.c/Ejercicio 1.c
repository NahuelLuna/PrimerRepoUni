#include <stdio.h>
#include <stdlib.h>

/*Crear un arreglo de 10 notas, ingresadas por teclado.

Se solicita:
1) Imprimir el arreglo por pantalla.
2) El promedio de todas las notas del arreglo.
3) La cantidad de reprobados (<4).
4) La cantidad de aprobados (>=4)
5) Regular no promocionado.
6) Cantidad de alumnos reprobados y promocionados.
* Los puntos e y f tienen que ser en tiempo de ejecución.*/

int main(){

    int i=0;
    int nota[10];
    int acu=0;
    float promedio=0;
    int aprobados=0;
    int reprobados=0;
    int nopromocionados=0;
    int reprobadosypromocionados=0;

    printf("Alumno:Luna Almonacid Ignacio Nahuel\nDNI: 44431044\nCarrera: ISI\nMatricula: EISI1074\n");

    for (i=0; i<10; i++)
    {
        printf("\nIngrese la calificacion numero %d: \n",i+1);
        scanf("%d",&nota[i]);
        acu = acu + nota[i];
        if(nota[i] >= 4 && nota[i] <=7)
        {
            nopromocionados++;
        }
            else
            {
                reprobadosypromocionados++;
            }
        if(nota[i] <=3)
        {
            reprobados++;
        }
            else
            {
                aprobados++;
            }
    }

    promedio = (float)acu/10;
    
    printf("\nLas calificaciones ingresadas fueron:\n");
    for (i=0; i<10; i++)
    {
        printf("%d   ",nota[i]);
    }
    
    printf("\nEl promedio de todas las calificaciones ingresadas es: %2.2f",promedio);
    printf("\nCantidad de alumnos reprobados: %d",reprobados);
    printf("\nCantidad de alumnos aprobados: %d",aprobados);
    printf("\nCantidad de alumnos aprobados no promocionados: %d",nopromocionados);
    printf("\nCantidad de alumnos reprobados y promocionados: %d",reprobadosypromocionados);
    
    return 0;
}