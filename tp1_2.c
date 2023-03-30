#include <stdio.h>
#include <stdlib.h>

int cuadrado(int num);
void cuadradi2(int num);
void invertir(int n1, int n2);
void orden(int n1, int n2);

int main(){

    int num,c,n1,n2;

    printf("Ingrese un numero: ");
    scanf("%d", &num);
    
    printf("Direccion de la variable: %d\n", &num);

    printf("Contenido: %d\n", num);
    
    c = num;
    num = cuadrado(num);

    printf("El numero al cuadrado es: %d\n", num);

    cuadradi2(c);

    printf("Ingrese 2 numeros: \n");
    printf("n1: ");
    scanf("%d", &n1);
    printf("n2: ");
    scanf("%d", &n2);

    invertir(n1,n2);

    orden(n1,n2);

return 0;

}

int cuadrado(int num){

    num = num*num;
    return num;
}

void cuadradi2(int num){
    num = num*num;
    printf("El numero al cuadrado es: %d ,x2\n", num);
}

void invertir(int n1, int n2){
    int aux;

    aux = n1;
    n1 = n2;
    n2 = aux;

    printf("Los numeros invertidos son n1: %d, n2: %d\n", n1,n2);
}

void orden(int n1, int n2){
    if (n1>n2){
        printf("El mayor es: %d(n1), el menor es: %d(n2)\n", n1,n2);
    }else if(n2>n1){
        printf("El mayor es: %d(n2), el menor es: %d(n1)\n", n2,n1);
    }else {
        printf("Los numero son iguales\n");
    }
}