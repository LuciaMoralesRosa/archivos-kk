
//Hola mundo y tabla de multiplicar

public class HiWorld {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int cont;
		int numero=5;
		System.out.println("Hello World");
		for(cont=0;cont<=10;cont++){
			System.out.print(numero);
			System.out.print(" x ");
			System.out.print(cont);
			System.out.print(" = ");
			System.out.println(cont*numero);
		}
	}

}