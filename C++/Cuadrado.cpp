#include<iostream>
/*Vamos a hacer un programa que dibuje un cuadrado
del tamaño que indique el usuario*/

int main(){
    //Definicion de variables
    char salir;
    int lado;
    int col,fil;
    std::cout <<"Dime el tamanno del cuadrado: ";
    std::cin >> lado;
    for (col=0;col<=lado;col++){
        for (fil=0;fil<=lado;fil++){
            std::cout<<'*';
        }
        std::cout<<'\n';
    }
    std::cin>>salir;
    }
    
     
    
