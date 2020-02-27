# con este programa realizaremos una lista determinando si son o no primos los numeros entre dos cifras

def rango_de_primos():
    x = input ("Numero mas bajo= ")
    y = input ("Numero mas alto= ")
    
    primo = True
    for x in range (x, y + 1):
        for p in range (x+1, x - 1):
            if (x % p == 0):
                primo = False
        if (primo == False):
            print "i= ", x, "No primo"
        else:
            print "i= ", x, "Primo"
        primo = True
rango_de_primos()
