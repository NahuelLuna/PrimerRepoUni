#include <stdio.h>
#define D 5
typedef struct{
    int V[D];
}cosas;

int main(){

int i=0;
cosas V[D];

 for(i=0; i<D; i=i+1){
    printf("ingrese un valor:");
    scanf("%d", &V[i]);
 }

 for(i=0; i<D; i=i+1){
    printf("\nproducto: %d, numero: %d \n", i,V[i]);
 }
}