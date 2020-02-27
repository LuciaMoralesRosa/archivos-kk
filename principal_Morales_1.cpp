    //Ejercicio A

#include<iostream>
#include<fpaula.h>

using namespace std;

int main (){
    char *palabra[5];
  
    int cont, longitud;
    char salir;
    char aux[20];
    char *paux;
    int veces;
    for (cont=0;cont<5;cont++){
        cout << "Palabra "<<cont+1<<": ";
        cin >> aux;
        longitud = devuelve_longitud(aux);
        if (longitud > 10){
                     cout << "Tiene mas de 10 letras\n";
                     cout << aux << "\n\n"; 
                     }
                     }

    
                     
    cin >> salir;
    
    
    
    
    
    }
