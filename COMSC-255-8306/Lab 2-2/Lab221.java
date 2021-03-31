import java.util.Scanner;
public class Lab221
{
	public static void main(String[] args)
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.print("Enter an integer: ");
		int a=keyboard.nextInt();
		keyboard.nextLine();
		System.out.println("You entered: "+a);
		System.out.print("Enter a string: ");
		String b=keyboard.nextLine();
		System.out.println("You entered: "+b);
		System.out.print("Enter a decimal number: ");
		double c=keyboard.nextDouble();
		System.out.println("You entered: "+c);
		keyboard.nextLine();
		System.out.print("Enter a single character: ");
		String d=keyboard.nextLine();
		System.out.println("You entered: "+d.charAt(0));
		System.out.println("Program ending");
	}
}