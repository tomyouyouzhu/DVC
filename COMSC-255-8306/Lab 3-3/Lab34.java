//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class Lab34
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		double a;
		System.out.println("***WATER STATE CALCULATER***");
		System.out.println("Enter a water temperature (in fahrenheit) to see its state at that.");
		System.out.print("Temperature (Solid, liquid, vapor) --> ");
		a=keyboard.nextDouble();
		System.out.println();
		System.out.println("Results:");
		System.out.printf("      Temperature: %.2f\n",a);
		System.out.print("            State: ");
		if (a<=32)
			System.out.println("solid");
		else if(a<=212)
			System.out.println("liquid");
		else 
			System.out.println("vapor");
		keyboard.close();
	}
}