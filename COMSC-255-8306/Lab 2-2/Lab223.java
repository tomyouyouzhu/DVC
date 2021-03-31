import java.util.Scanner;
public class Lab223
{
	public static void main(String[] args)
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.println("***********Part One************");
		System.out.println("***The Odd/Even Determinator***");
		System.out.print("Enter an integer to find out if it`s odd/even: ");
		int a=keyboard.nextInt();
		if (a%2==0)
			System.out.println(a+" is even!");
		else 
			System.out.println(a+" is odd!");
		System.out.println("***Magic Dates Determinator***");
		System.out.println();
		int x,y,z;
		System.out.println("Enter a month, date, and year, and find out if it's magic!");
		System.out.print("Enter two-digit month: ");
		x=keyboard.nextInt();
		System.out.print("Enter two-digit day: ");
		y=keyboard.nextInt();
		System.out.print("Enter two-digit year: ");
		z=keyboard.nextInt();
		if (x*y==z)
			System.out.println(x+"/"+y+"/"+z+" is a magic date!");
		else 
			System.out.println(x+"/"+y+"/"+z+" is not a magic date!");
		System.out.println("Program ending");
	}
}