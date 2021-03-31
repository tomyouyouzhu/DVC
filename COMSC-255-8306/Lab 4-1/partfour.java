//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class partfour
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		double a,b;
		char c;
		do 
		{
			System.out.print("Enter two numbers and I'll add them: ");
			a=keyboard.nextDouble();
			b=keyboard.nextDouble();
			System.out.println(a+" + "+b+" = "+(a+b));
			do 
			{
				System.out.print("Repeat program? Y/N: ");
				c=keyboard.next().charAt(0);
			}while (Character.toUpperCase(c)!='Y' && Character.toUpperCase(c)!='N');
		}while(Character.toUpperCase(c)!='N');
		keyboard.close();
	}
}