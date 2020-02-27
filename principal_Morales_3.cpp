
#include<iostream>
#include"fpaula.h"

using namespace std;

int main (){
    char *palabra[5];
  
    int cont, longitud;
    char salir;
    char aux[20];
    char vocales[]={'a','e','i','o','u'};

    int cont,nvocales;

    
    for (cont=0;cont<5;cont++){
        cout << "Palabra "<<cont+1<<": ";
        cin >> aux;
        for (cont=0; cont<devuelve_longitud(aux[cont]);cont++){
        for(nvocales=0;nvocales<5;nvocales++){
            if (aux[cont]==vocales[nvocales]){
                aux[cont]='*';          
            }
        } 
    }
    cout<<"Palabra cambiada: "<<aux;  }
    cin >> salir;
    
}
