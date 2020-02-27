//Delante del parentesis pongo lo que devuelve; lo que se convertira el la funcion
//Dentro del parentises pongo lo que recibo en el programa


// DEVUELVE LONGITUD

int devuelve_longitud(char palabra[]){ //los corchetes vacios indican el tamaño de la palabra, como esta definida en el programa principal no hay que ponerlo en la funcion
    int longitud=0;//variable acumuladora
    int cont=0;
    while(palabra[cont]!='\0'){// la '\0' marca el final de la palabra
                               longitud++;//sumamos una letra en la longitud
                               cont++;//pasamos a la siguiente letra de la palabra
                               }
    return (longitud); //coge el numero y lo devuelve
}


// CONTADOR DE VOCALES

int contador_vocales(char palabra[]){// si palabra esta definida en el prog principal puedo poner solo palabra?
    char vocales[]={'a','e','i','o','u','A','E','I','O','U'};
    int nvocales=0;
    int cont1; //contador de las letras totales de la palabra
    int cont2; // contador del for de las vocales
    for(cont1=0;cont1<devuelve_longitud(palabra);cont1++){
          for(cont2=0;cont2<9;cont2++){
            if (palabra[cont1] == vocales[cont2]){
               nvocales++;
            }
          }
    }
    
    return(nvocales);
}


// CONTADOR CONSONANTES

int contador_consonantes(char palabra[]){
    char vocales[]={'a','e','i','o','u','A','E','I','O','U'};
    int nconsonantes=0;
    int cont1;
    int cont2;
    int fallos_vocal=0;
    for(cont1=0;cont1<devuelve_longitud(palabra);cont1++){
       for(cont2=0;cont2<=9;cont2++){
         if (palabra[cont1] != vocales[cont2]){
           fallos_vocal++;
         }

       }
       if(fallos_vocal==10){
           nconsonantes++;
       }
       fallos_vocal=0;
    }
 
 return (nconsonantes);   
}


// MINUS MAYUS

void mayus_minus(char palabra[]){ 
    int cont;
    for (cont=0;cont<devuelve_longitud(palabra);cont++){
        if (palabra[cont]<91 && palabra[cont]>64){
              palabra[cont] = palabra[cont]+32;               
        }
        else{
             if (palabra[cont]>96 && palabra[cont]<123){
              palabra[cont] = palabra[cont]-32;
             }
        }
        
    }
}
