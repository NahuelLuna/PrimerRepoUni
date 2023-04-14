#include <stdio.h>
#include <stdlib.h>

int pow(int arg,int exp);

/*int cuentaCaracteres(char * cadena){
    int i = 0;
    while(cadena[i] != '\0'){
        i++;
    }
    return i;}*/

int main (){

    /*char cadena[] = "Hola mundo!";
    
    printf("longitud de la cadena : %d\n",cuentaCaracteres(cadena));


    return 0;*/

   int res= pow(2,3);

   printf("El valor de 2 al cubo es: %d", res);

    return 0;
}

int pow(int arg,int exp){
        int i;
        int res = 1;
    for(int i=0; i< exp; i++){
        res *= arg;
   }
   return res;
}