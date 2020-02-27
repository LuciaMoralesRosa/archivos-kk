# este programa se encarga de decirte si un numero es o no primo#
def primo ():
    print "Es tu numero primo?"
    primo = True
    numero = input ("Introduzca su numero aqui: ")
    for i in range (2, numero):
        if (numero % i == 0):
            primo = False
    if (primo == True):
        print "Es primo"
    else:
        print "Eo es primo"
primo()
