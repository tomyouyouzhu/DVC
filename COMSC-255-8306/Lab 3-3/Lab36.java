//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class Lab36
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		char x;
		System.out.println("Enter choice A-E to display a fruit name that starts with that letter.");
		System.out.println();
		System.out.print("Your choice (A-E only): ");
		x=keyboard.next().charAt(0);
		switch (x)
		{
			case 'a':
			case 'A': System.out.println("Apple!");
				break;
			case 'b':
			case 'B':System.out.println("Banana!");
				break;
			case 'c':
			case 'C':System.out.println("Charry!");
				break;
			case 'd':
			case 'D':System.out.println("Dragon fruit!");
				break;
			case 'e':
			case 'E':System.out.println("Elderberry!");
				break;
			default : System.out.println("A-E only please; run the program again with proper input.");
		}
		keyboard.close();
	}
}