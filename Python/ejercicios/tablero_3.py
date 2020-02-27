def tablero():
   x=input ("Filas: ")
   y=input ("col: ")
   a= '*'
   b= ' '
   for i in range(1,x+1):
      if (i%2==0):
         print (b+a)*(x-1)
      else:
         print (a+b)*y
   
tablero()
         
   
     
