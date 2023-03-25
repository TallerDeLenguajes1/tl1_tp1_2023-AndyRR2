#include <stdio.h>
#include <stdlib.h>

int main(){
float variable=1001.50;
float *puntero;
float tama;
printf("Hola Mundo\n");
puntero=&variable;
printf("Contenido del puntero: %f\n",*puntero);
printf("Direccion de memoria almacenada por el puntero: %p\n",&(*puntero));
printf("Direccion de memoria de la variable: %p\n",&variable);
printf("Direccion de memoria del puntero: %p\n",&puntero);
tama=sizeof(*puntero);
printf("Tamaño de memoria utilizado por la variable: %f",tama);
    return(0);
}