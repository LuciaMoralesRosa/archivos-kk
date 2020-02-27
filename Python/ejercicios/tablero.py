def tablero():
   x=input ("Filas: ")
   a= '*'
   b= ' '
   for i in range(1,x+1):
      if (i%2==0):
         print (b+a)*x
      else:
         print (a+b)*x
   
tablero()
         
   
     
