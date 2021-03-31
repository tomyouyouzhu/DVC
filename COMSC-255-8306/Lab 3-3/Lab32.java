//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class Lab32
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		double a,b;
		System.out.println("Enter two different numnbers(doubles or integers) and i`ll tell you which is larger.");
		System.out.print("Enter first number: ");
		a=keyboard.nextDouble();
		System.out.print("Enter second number: ");
		b=keyboard.nextDouble();
		if (a>b)
			System.out.println("The first number ("+a+") is larger than the second number ("+b+").");
		else 
			System.out.println("The second number ("+b+") is larger than the first number ("+a+").");
		keyboard.close();
	}
}