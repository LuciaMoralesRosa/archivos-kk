#include<iostream>
/*vamos a hacer un programa que nos pida 4 numeros Y LOS GUARDE para calcular la media */

int main () {
    //Definicion de variables
    char salir;
    int num[4];
    //Aquí el numero que pones marca el numero de casillas (el 4)
    int cont;
    float suma_numeros; //Ponemos float para que no lo identifique como un numero entero
    float media;
    //Introducimos los numeros en el vector
    for(cont=0;cont<=3;cont++){
    //Aquí se pone tres porque las casillas enpiezan por 0; 0,1,2,3; en total 4 casillas
             std::cout<< "Introduce el numero ", cont,": ";
             std::cin >> num[cont];
             }
    //Sacamos los numeros guardados
    std::cout << "Has metido los siguientes numeros: ";
    for(cont=0;cont<=3;cont++){
                               std::cout << num[cont];
                               }
    //  Mostramos la lista en orden inverso
    std::cout <<"\nLa lista en orden inverso es: ";
    for(cont=3;cont>=0;cont--){
        std::cout <<num[cont];} 
        
    
    //Calculamos la media
    std::cout << "\n\n\nMEDIA\n\n";
    suma_numeros = 0;
    for(cont=0;cont<=3;cont++){
        suma_numeros = suma_numeros + num[cont]; //Esto es una suma acumulada
        }
    std::cout <<"La suma vale: ";
    std::cout <<suma_numeros;
    media=suma_numeros/cont;
    std::cout <<"\nLa media vale: ";
    std::cout<< media;
            
    std::cin >> salir;
}
