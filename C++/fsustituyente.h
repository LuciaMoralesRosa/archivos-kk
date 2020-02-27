int devuelve_longitud(char palabra[]){
   int longitud=0;
   int cont=0;
   while(palabra[cont]!='\0'){
       longitud++; 
       cont++;
       }
   return(longitud);
}
