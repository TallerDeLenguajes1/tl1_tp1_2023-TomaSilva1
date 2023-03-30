#include <stdio.h>

int main(){

    printf("Hola Mundo\n");

    int num=10,*p;

    p=&num;

    printf("contenido: %d\n", *p);

    printf("Direccion de memoria almacenada por el puntero: %d\n", p);

    printf("Direccion de memoria de la variable: %d\n", &num);

    printf("Direccion de memorua de el puntero: %d\n", &p);

    printf("Tamanio de la direccion de memoria: %d\n", sizeof(p));

return 0;
}