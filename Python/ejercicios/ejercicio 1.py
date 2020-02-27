def multiplicacion():
    x=0
    while(x==0):
        x = input ("Introduzca el primer numero: ")
        if(x==0):
            print("ERROR. Has introducido un 0")

    y=0
    while(y==0):
        y = input ("Introduzca el primer numero: ")
        if(y == 0):
            print("ERROR. Has introducido un 0")

    z=0
    while(z == 0):
        z = input ("Introduzca el primer numero: ")
        if(z == 0):
            print("ERROR. Has introducido un 0")

    a=0
    while(a==0):
        a = input ("Introduzca el primer numero: ")
        if(a==0):
            print("ERROR. Has introducido un 0")        
   
    else:
        resultado = x*y*z*a
        print "Su resultado es", resultado

multiplicacion()
