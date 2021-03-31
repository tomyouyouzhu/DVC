import java.util.Scanner;

public class mile
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		double a,b;

		//input section
		System.out.print("Enter miles: ");
		a = keyboard.nextDouble();
		System.out.print("Enter gallons: ");
		b = keyboard.nextDouble();


		
		//processing
		System.out.println("miles/gallon :" + (a/b));
	}
}