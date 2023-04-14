#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imrpimeSaludo(void); //prototipo de la funcion
int max=10; //variable global maximum

int main(void){
    int min=1000; //variable local minimum
    printf("hola mundo!!!\n%d",min);
    max=100;
    imrpimeSaludo();
    return 0;
}

void imprimeSaludo(void){
    int max=1010101; //variable local maximum
    printf("\nhola mundo!!!\n %d",max);
    max=1111;
}