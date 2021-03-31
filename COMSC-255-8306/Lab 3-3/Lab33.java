//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class Lab33
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		double a,b,c,d;
		System.out.println("Enter the dimensions of 2 rectangles, and I`ll cakculate which one has the greater area.");
		System.out.println();
		System.out.println("RECTANGLE ONE:");
		System.out.print("Length: ");
		a=keyboard.nextDouble();
		System.out.print("Width: ");
		b=keyboard.nextDouble();
		c=a*b;
		System.out.println();
		System.out.println("RECTANGLE TWO:");
		System.out.print("Length: ");
		a=keyboard.nextDouble();
		System.out.print("Width: ");
		b=keyboard.nextDouble();
		d=a*b;
		System.out.println();
		if (c-d>0)
			System.out.println("Results: Rectangle 1 has the greater area :"+c+" vs. "+d);
		else if(c-d<0)
			System.out.println("Results: Rectangle 1 has the smaller area :"+c+" vs. "+d);
		else 
			System.out.println("They have the same area.");
		keyboard.close();
	}
}