#include<iostream>
/*Un programa que lea unapalabra y sustituya las vocales por 'u'*/

int devuelve_longitud(char palabra[]){ //define las letras que tiene cada palabra
// Como devuelve un numero entero ponemos int
// En el parentesis ponemos lo que recibe
// El corchete se deja en blanco porque     
// Barra cero '\0' final de palabra
// el char palabra indica que la definicion de variable esta en el cuerpo principal
   int longitud=0; //variable acumuladora
   int cont=0; // le damos valor porque vamos a empezar por el valor cero del vector palabra
   while(palabra[cont]!='\0'){
       longitud++; //forma compacta de decir longitud + longitud +1
       cont++;
       }
   return(longitud); //para devolver la longitud
}                    

int main(){
    char palabra[1]; //"reservas" 10 casillas
    char vocales[]={'b','c','d','f','g','h','j','k','l','m','n','ñ','p','q','r','s','t','v','w','x','y','z'};
    char salir;
    int cont,nvocales;
    std::cout <<"Dime una palabra: ";
    std::cin >>palabra;
    for (cont=0; cont<devuelve_longitud(palabra);cont++){
        
        //invcacion de una funcion
        //Ponemos menor porque como al contabilizar comienza con 0 si la palabra son 4 letras en la contabilizacion debe ser 4-1
        //if(palabra[cont]=='a' || palabra[cont] == 'e'... Asi se haria sin lista
              
              for(nvocales=0;nvocales<5;nvocales++){
                   if (palabra[cont]==vocales[nvocales]){
                       palabra[cont]='s';           
                       }
                   } 
    }
    std::cout<<"Palabra troleada: "<<palabra;
    std::cin >> salir;
}
