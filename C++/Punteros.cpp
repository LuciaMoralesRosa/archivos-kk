// metadato/puntero

// los del # son librerias

#include<iostream>
#include<stdio.h> // es un C++ mas rudimentario (para sacar printf)
#include<stdlib.h>

int main(){
       int a;
       int *pa; 
       //coma flotante para decimales
       // * la variable va a guardar el numero hexadecimal donde vive otra variable
       //Un puntero: una variable que contiene un numero hexadecimal de otra variable
       int salir;
       int numeros [5];
       a=2;
       numeros[0]=9;
       numeros[1]=8;
       numeros[2]=7;
       
       pa=&a;
       
       printf ("El numero a= %d y esta almacenado en %X",a, &a); 
       // la %d es el descriptor indica el tipo de dato que vamos a sacar y la a el contenido
       //Tengo una variable (a) situado en una cierta posicion inventada, a=2, guarda un dos
       //&a posicion de memoria donde almaceno la variable a
       //%X es el tipo de variable (hexadecimal) ay que ponerlo porque el &a es un numero hexadecimal
       printf("\nLa variable pa es un puntero pa=%X", pa);
       printf("\nnumeros[0]=%d", numeros[0]);
       printf("\nnumeros[1]=%d", numeros[1]);
       printf("\nnumeros[2]=%d", numeros[2]);
       printf("\nnumeros[3]=%d", numeros[3]);
       //sale un numero cualquiera porque no esta definido
       
       printf("\nnumeros=%X", numeros); //determina la direccion del primer numero
       printf("\nnumeros=%X", *numeros); //Saca el valor de la posicion 0
       printf("\nnumeros=%d", *(numeros+1)); // Saca el valor de la posicion 0+1
       std::cin >> salir;
}
