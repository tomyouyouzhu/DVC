//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class Lab31
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		int a,b,c;
		System.out.println("Let`s talk about integer division.");
		System.out.println();
		System.out.print("Enter two integers separated by spaces: ");
		a=keyboard.nextInt();
		b=keyboard.nextInt();
		c=(a+b)/2;
		System.out.println();
		System.out.println("The average of "+a+" and "+b+" is "+c);
		System.out.println("...but this may be wrong because of the integer division issue.");
		System.out.println();
		System.out.printf("The calculated average of 65 and 80 is %.2f",(double) (a+b)/2);
		keyboard.close();
	}
}