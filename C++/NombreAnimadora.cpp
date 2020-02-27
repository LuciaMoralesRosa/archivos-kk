#include<iostream>
//un programa que lea una palabra y te devuelva la inicial
int main(){
    char salir;
    char palabra[10];
    int cont;
    int longitud=0;//inicializo la variable
    std::cout<<"dime tu nombre: ";
    std::cin>> palabra;
    std::cout<<"\nQue nombre mas bello ";
    std::cout<<"\nLa primera letra de tu nombre es la ";
    std::cout<<palabra[0];
    std::cout<<"\nAnimadora:\n";
    for(cont=0;palabra[cont]!='\0';cont++){
                               std::cout<<" Dame una ";
                               std::cout<< palabra[cont];
                               std::cout<< '\n';
                               }
//  Dirty trick
    cont=0;
    while(palabra[cont]!='\0'){
                               longitud++;
                               cont++;
                               }
    
    
    std::cout<<"el nombre de ";
    std::cout<< palabra;
    std::cout<<" tiene ";
    std::cout<< longitud;
    std::cout<<" letras "; 
    std::cin>> salir;
}
