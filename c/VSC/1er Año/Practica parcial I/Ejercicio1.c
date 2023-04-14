#include <stdio.h>


int main(){

int vacunas=1000;
int vacunasretiradas=0;

        do{
            printf("Cuantas vacunas quiere retirar? : \n");
            scanf("%d", &vacunasretiradas);

            if( vacunasretiradas > vacunas ){
               printf("no nos quedan tantas vacunas, ingrese un monto menor \n"); 
            }

            if(vacunasretiradas<vacunas){
                vacunas= vacunas-vacunasretiradas;
                printf("nos quedan %d vacunas \n", vacunas); 
            }
        }
            while(vacunas>=200);
            printf("nos quedan menos de 200 vacunas");

    return 0;

}