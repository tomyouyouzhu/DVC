import java.util.Scanner;

public class sum
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		int a,b,c;

		//input section
		System.out.print("Enter the first intger: ");
		a = keyboard.nextInt();
		System.out.print("Enter the second intger: ");
		b = keyboard.nextInt();
		System.out.print("Enter the third intger: ");
		c = keyboard.nextInt();

		
		//processing
		System.out.println("Total :" + (a+b+c));
	}
}