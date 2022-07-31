package EjemploDoWhile;
import java.util.*;

public class Numeros {
	public static void main (String[] args) {
		int value;
		
		Scanner entrada = new Scanner(System.in);
		
		do {
			System.out.println("Introduce un numero menor a 100: ");
			value = entrada.nextInt();
			
			if(value>100)
				System.out.println("El valor: " + value+" es mayor a 100");
		}
		while(value>100);
		System.out.println("Tu valor es: " +value);
	
	}

}
