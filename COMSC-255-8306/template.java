import java.util.Scanner;

public class template
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		int input;
		double price;
		double total;

		//input section
		System.out.print("Enter number of items: ");
		input = keyboard.nextInt();
		System.out.print("Enter the price: ");
		price = keyboard.nextDouble();
		
		//processing
		total=input*price;
		System.out.println("Hello World!");
		System.out.println("You entered: " + input);
		System.out.println("You entered for price: " + price);
		System.out.println("Total price: " + total);
	}
}