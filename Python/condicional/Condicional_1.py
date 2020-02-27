#En este programa le pedimos al usuario que teclee los coeficientes de un polinomio y hallamos el valor de sus raices#

def calculadora_ecuacion ():
    print "introduzca los coeficientes del polinomio"
    print "A*x^2+B*x+C=0"
    a=input ("A= ")
    b=input ("B= ")
    c=input ("C= ")
    radicando=b*b-4*a*c
    if (radicando>=0):
        raiz1=(-b+(b*b-4*a*c)^(1/2))/(2*a)
        raiz2=(-b-(b*b-4*a*c)^(1/2))/(2*a)
        print "primera solucion =", + raiz1
        print "segunda solucion =", + raiz2
    else:
        print "Esta ecuacion no tiene solucion real"

calculadora_ecuacion ()
