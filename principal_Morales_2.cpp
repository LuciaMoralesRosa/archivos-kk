
#include<iostream>
#include"fpaula.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

using namespace std;

int diferencia_consonantes (char *palabra, char *palabra1){
    int cont;
    int resultado=0;
    resultado = contador_consonantes(palabra) - contador_consonantes(palabra1);
    return (resultado);
}


int main(){
    char *palabra[4];
    int cont;
    char salir;
    char aux[20];
    char *paux;
    int longitud;
    int veces;
    for (cont=0;cont<4;cont++){
        cout << "Palabra "<<cont+1<<": ";
        cin >> aux;
        palabra[cont]= (char *) malloc((longitud+1)*sizeof(char));
        strcpy(palabra[cont], aux);
    }

    for(veces=1;veces<4;veces++){
        for (cont=0;cont<3;cont++){
            if (diferencia_consonantes(palabra[cont], palabra[cont+1])<0){ 
				paux=palabra[cont];
              	palabra[cont]=palabra[cont+1];
               	palabra[cont+1]=paux;
        	}
    	}
    }
    cout<<"\nLista de palabras ordenadas: \n";
    for(cont=0;cont<4;cont++){
 	    printf("  %s\n",palabra[cont]);
    }
        
	cin >> salir;
}
