#include <stdio.h>

int main(){

    int stock_vacunas = 1000;
    int vacunas_entregadas = 0;

    do{
        printf("¿Cuantas vacunas se entregaron?\n");
        scanf("%d",&vacunas_entregadas);

        if(vacunas_entregadas<stock_vacunas){

            stock_vacunas = stock_vacunas - vacunas_entregadas;
            printf("Entregadas %d vacunas, vacunas restantes: %d \n", vacunas_entregadas, stock_vacunas);

        }else{
            printf("No nos quedan tantas vacunas, ingrese un monto menor\n");
        }

    }while(stock_vacunas>=200);

    printf("Nos quedan menos de 200 vacunas");

    return 0;

    }