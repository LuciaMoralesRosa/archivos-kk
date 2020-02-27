def par_o_impar_multiplo3():
    x=input ("x= ")
    if (x%2==0):
        if (x%3==0):
            print "es par","es multiplo de tres"
        else:
            print "es par", "no es multiplo de tres"
    else:
        if (x%3==0):
            print "es impar", "es multiplo de tres"
        else:
            print "es impar", "no es multiplo de tres"
        
par_o_impar_multiplo3()
