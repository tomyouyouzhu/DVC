//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class Lab35
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		String a,b;
		int c;
		System.out.println("Enter two first names an I`ll sort them.");
		System.out.print("Name #1: ");
		a=keyboard.nextLine();
		System.out.print("Name #2: ");
		b=keyboard.nextLine();
		c=a.compareToIgnoreCase(b);
		System.out.print("Alphabotized: ");
		if (c>0)
			System.out.println(b+" "+a);
		else if (c<0)
			System.out.println(a+" "+b);
		else 
			System.out.println("names were the same.");	
		keyboard.close();
	}
}