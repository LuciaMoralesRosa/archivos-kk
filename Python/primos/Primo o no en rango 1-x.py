# con este programa realizaremos una lista determinando si son o no primos los numeros entre dos cifras

def rango_de_primos():
    n = input ("Numero mas alto= ")
    primo = True
    for i in range (1, n + 1):
        for p in range (2, i - 1):
            if (i % p == 0):
                primo = False
        if (primo == False):
            print "i= ", i, "No primo"
        else:
            print "i= ", i, "Primo"
        primo = True
rango_de_primos()
