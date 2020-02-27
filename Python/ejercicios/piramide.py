def piramide():
   filas= input ('Inserta número: ')

   for i in range(filas):
      esp=' '*(filas-i-1)
      asteriscos='*'*(2*i+1)
      print esp+ asteriscos

piramide()

def piramide_2():
   filas= input ('Inserte la altura: ')

   esp = ' '
   ast= '*'
   for i in range (filas):
      for n_esp in range (1,filas-i):   
         esp=esp+' '
      for n_ast in range (1,2*i+1):
         ast=ast+'*'
      print esp + ast
      esp = ' '
      ast= '*'
      
    
piramide_2()
