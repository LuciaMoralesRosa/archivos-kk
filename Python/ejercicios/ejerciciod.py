def d():
    suma=0
    for cont in range (0,10+1):
        suma= suma + cont 
    print suma

d()

def g():
    for cont in range (0,11):
        if (cont% 2==0):
            print cont, '=' "par"
        else:
            print cont, '=' "impaR"

g()

def p():
    cont=0
    x= raw_input ("Numero:")
    while (cont < x+1):
        print cont
        cont= cont+1

p()
