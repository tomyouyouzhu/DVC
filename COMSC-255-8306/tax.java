import java.util.Scanner;

public class tax
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		double a;
		double rate=0.075;

		//input section
		System.out.print("Enter the price: ");
		a = keyboard.nextDouble();


		
		//processing
		System.out.println("Tax :" + (a*rate));
		System.out.println("Total :" + (a+a*rate));
	}
}